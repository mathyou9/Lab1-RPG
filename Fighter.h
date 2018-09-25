#pragma once
#include "FighterInterface.h"
#include <iostream>
#include <string>
using namespace std;

class Fighter : public FighterInterface{
public:
  Fighter(std::string myName,int myhp, int mystrength, int mySpeed, int mymagic){
    cout << "In Fighter Constructor " << myName << " " << myhp << " " << mystrength << " " << mySpeed << " " << mymagic << endl;
    name = myName;
    speed = mySpeed;
    originalSpeed = mySpeed;
    hp = myhp;
    maxHP = myhp;
    strength = mystrength;
    magic = mymagic;
    damage = 0;
  };
  ~Fighter(){}

  string getName() const;

	int getMaximumHP() const;

  int getCurrentHP() const;

	int getStrength() const;

	int getSpeed() const;

	int getMagic() const;

	virtual int getDamage() = 0;

	void takeDamage(int damage);

	virtual void reset() = 0;

	virtual void regenerate();

	virtual bool useAbility() = 0;

protected:
  string name;
  int speed;
  int hp;
  int maxHP;
  int strength;
  int magic;
  int damage;
  int originalSpeed;
};
