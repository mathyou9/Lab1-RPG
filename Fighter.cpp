#include "Fighter.h"

using namespace std;

string Fighter::getName() const {
  cout << "In Fighter getName " << name << endl;
  return name;
}
int Fighter::getMaximumHP() const{
  return maxHP;
}

int Fighter::getCurrentHP() const{
  return maxHP;
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
}

void Fighter::regenerate(){
  hp = hp + (strength / 6);
}
