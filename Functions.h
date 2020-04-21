#pragma once
#include <string>
#include "Classes.h"
using namespace std;


string GetUserName();
void GetUserInput(string userName);
void GearScenario(string* userName);
void IntruderScenario(string userName, Intruder& intruder);
void StoryStart(string userName);
