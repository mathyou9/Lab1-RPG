#pragma once
#include "Fighter.h"
#include <string>
#include <iostream>
using namespace std;


class Cleric : public Fighter {
public:
  Cleric(std::string fighterName, int fighterHP, int fighterStrength, int fighterSpeed, int fighterMagic):Fighter(fighterName, fighterHP, fighterStrength, fighterSpeed, fighterMagic){};
  ~Cleric(){};
  int getDamage();
  void reset();
  bool useAbility();
  void regenerate();
};
