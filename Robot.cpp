#include "Robot.h"
#include <cmath>

using namespace std;

int Robot::getDamage(){
  damage2 = strength + bonus_damage;
  bonus_damage = 0;
  return damage2;
}
void Robot::reset(){
  hp = maxHP;
  current_energy = maximum_energy;
  bonus_damage = 0;
}
bool Robot::useAbility(){
  bonus_damage = 0;
  if(current_energy >= ROBOT_ABILITY_COST){
    powerMult = current_energy/(double)maximum_energy;
    bonus_damage_double = strength * (pow(powerMult, POWER));
    current_energy = current_energy - ROBOT_ABILITY_COST;
    bonus_damage = bonus_damage_double;
    return true;
  } else{
    return false;
  }
}
