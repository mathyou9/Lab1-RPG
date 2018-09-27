#ifndef ARCHER_H
#define ARCHER_H
#include "Fighter.h"
#include <string>
#include <iostream>

class Archer : public Fighter {
public:
  Archer(std::string fighterName, int fighterHP, int fighterStrength, int fighterSpeed, int fighterMagic):Fighter(fighterName, fighterHP, fighterStrength, fighterSpeed, fighterMagic){};
  ~Archer(){};
  int getDamage();
  void reset();
  bool useAbility();
};

#endif
