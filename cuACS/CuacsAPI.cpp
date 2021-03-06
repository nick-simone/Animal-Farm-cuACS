#include <iostream>
#include <iomanip>
#include <string>
#include "CuacsAPI.h"

using namespace std;

CuacsAPI::CuacsAPI()
{
	ps = PersistentStorageAPI();
	animals = ps.retrieveProfiles("Animal");
        availableAnimalId = animals->size();
    humans = ps.retrieveProfiles("Human");
        availableHumanId = humans->size();
}

vector<Animal*> CuacsAPI::getAnimals()
{
	vector<Animal*>* shipAnimals = new vector<Animal*>();
	for(Profile* a: *animals)
	{
		shipAnimals->push_back(dynamic_cast<Animal*>(a));
	}
	vector<Animal*> ret = *shipAnimals;
	delete shipAnimals;
	return ret;
}

vector<Human*> CuacsAPI::getHumans()
{
    vector<Human*>* shipHumans = new vector<Human*>();
    for(Profile* a: *humans)
    {
        shipHumans->push_back(dynamic_cast<Human*>(a));
    }
    vector<Human*> ret = *shipHumans;
    delete shipHumans;
    return ret;
}

void CuacsAPI::addAnimal(string name, string animalType, string breed, int age, string gender, string color, string size,
                         int aggression, int attachment, int obedience, string energy, bool isCrateTrained, bool isHypoallergenic,
                         bool isNeutered, int childrenComfort, int loudness, float cost, float costPerYear, int intelligence, int cleanliness, int playfulness, int loyalty, int lifeExp)
{
    availableAnimalId = availableAnimalId + 1;
    ps.storeProfile(new Animal(availableAnimalId, name, animalType, breed, age, gender, color, size, aggression, attachment, obedience, energy,
                               isCrateTrained, isHypoallergenic, isNeutered, childrenComfort, loudness, cost, costPerYear, intelligence, cleanliness, playfulness, loyalty, lifeExp), "Animal");
}

void CuacsAPI::addHuman(string name, int age, string gender, string typePreference, string purpose, int attachment, int patience, string homeType,
                        string travel, string allergies, int noiseTolerance, bool needNeutered, int numChildren,
                        string salary, float budget, string freeTime, string email, string address, string phone)
{
    availableHumanId = availableHumanId + 1;
    ps.storeProfile(new Human(availableHumanId, name, age, gender, typePreference, purpose, attachment, patience, homeType,
                              travel, allergies, noiseTolerance, needNeutered, numChildren,
                              salary, budget, freeTime, email, address, phone), "Human");
}

void CuacsAPI::editAnimal(int id, string name, string animalType, string breed, int age, string gender, string color, string size,
                         int aggression, int attachment, int obedience, string energy, bool isCrateTrained, bool isHypoallergenic,
                         bool isNeutered, int childrenComfort, int loudness, float cost, float costPerYear, int intelligence, int cleanliness, int playfulness, int loyalty, int lifeExp)
{
    ps.storeProfile(new Animal(id, name, animalType, breed, age, gender, color, size, aggression, attachment, obedience, energy,
                               isCrateTrained, isHypoallergenic, isNeutered, childrenComfort, loudness, cost, costPerYear, intelligence, cleanliness, playfulness, loyalty, lifeExp), "Animal");
}

void CuacsAPI::editHuman(int id, string name, int age, string gender, string typePreference, string purpose, int attachment, int patience, string homeType,
                        string travel, string allergies, int noiseTolerance, bool needNeutered, int numChildren,
                        string salary, float budget, string freeTime, string email, string address, string phone)
{
    ps.storeProfile(new Human(id, name, age, gender, typePreference, purpose, attachment, patience, homeType,
                              travel, allergies, noiseTolerance, needNeutered, numChildren,
                              salary, budget, freeTime, email, address, phone), "Human");
}

CuacsAPI::~CuacsAPI()
{
	while(animals->size() > 0){
		Profile* temp = animals->front();
		animals->pop_front();
	}
	delete animals;

    while(humans->size() > 0){
        Profile* temp = humans->front();
        humans->pop_front();
    }
    delete humans;
}
