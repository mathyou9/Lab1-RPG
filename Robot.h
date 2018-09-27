#pragma once
#include "Fighter.h"
#include <string>
#include <iostream>
using namespace std;


class Robot : public Fighter{
public:
  Robot(std::string fighterName, int fighterHP, int fighterStrength, int fighterSpeed, int fighterMagic):Fighter(fighterName, fighterHP, fighterStrength, fighterSpeed, fighterMagic){};
  ~Robot(){};
  int getDamage();
  void reset();
  bool useAbility();
private:
  double bonus_damage_double;
  double powerMult;
  double const POWER = 4.0;
};
