#include "Fighter.h"

using namespace std;

string Fighter::getName() const {
  cout << "fighter constructor" << name << endl;
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
  damage = damage - (speed / 4);
  hp = hp - damage;
}

void Fighter::regenerate(){
  hp = hp + (strength / 6);
}
