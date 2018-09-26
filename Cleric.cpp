#include "Cleric.h"

using namespace std;

int Cleric::getDamage(){
  damage = magic;
  return damage;
}
void Cleric::reset(){
  hp = maxHP;
  mana = 5 * magic;
}
bool Cleric::useAbility(){
  if(mana >= CLERIC_ABILITY_COST){
    hp = hp + (magic / 3);
    mana = mana - CLERIC_ABILITY_COST;
    return true;
  } else{
    return false;
  }
}
void Cleric::regenerate(){
  //hp = hp + (strength / 6);
  if(mana < magic * 5){
    mana = mana + (magic / 5);
  }
}
