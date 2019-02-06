#ifndef PERSISTENTSTORAGEAPI_H
#define PERSISTENTSTORAGEAPI_H
#include <list>
#include "Profile.h"
using namespace std;

class PersistentStorageAPI
{
public:
  void storeProfile(Profile, string);
  void storeProfiles(list<Profile>, string);
  list<Profile> retrieveProfiles(string);
private:
  string getDirectory(string);
}
