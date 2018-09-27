#include "Fighter.h"

using namespace std;

string Fighter::getName() const {
  return name;
}
int Fighter::getMaximumHP() const{
  return maxHP;
}

int Fighter::getCurrentHP() const{
  return hp;
}

int Fighter::getStrength() const{
  return strength;
}

int Fighter::getSpeed() const{
  return speed;
}

int Fighter::getMagic() const{
  return magic;
}

void Fighter::takeDamage(int damage){
  double speed_double;
  speed_double = speed/4;
  damage = damage - speed_double;
  if(damage < 1){
    damage = 1;
  }
  hp = hp - damage;
}

void Fighter::regenerate(){
  int regen;
  regen = strength / 6;
  if (regen < 1){
    regen = 1;
  }
  hp = hp + regen;
  if(hp > maxHP){
    hp = maxHP;
  }
}
