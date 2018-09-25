#include "Arena.h"

using namespace std;
bool Arena::addFighter(string info){
  stringstream ss(info);
  string name, type;
  int speed, hp, strength, magic;

  if(ss >> name >> type >> hp >> strength >> speed >> magic){
    cout << "addFighter got " << name << " " << type << " " << hp << " " << strength << " " << speed << " " << magic << endl;
    if(type == "A"){
      cout << "Adding Archer" << endl;
      fighterVec.push_back(new Archer(name, hp, strength, speed, magic));
    }
    else if (type == "C"){
      cout << "Adding Cleric" << endl;
      fighterVec.push_back(new Cleric(name, hp, strength, speed, magic));
    }
    else if (type == "R"){
      cout << "Adding Robot" << endl;
      fighterVec.push_back(new Robot(name, hp, strength, speed, magic));
    } else{
      return false;
    }
    return true;
  }
  return false;
}

bool Arena::removeFighter(string name){
  for (int i = 0; i < fighterVec.size(); i++){
    if(fighterVec.at(i)->getName() == name){
      fighterVec.erase(fighterVec.begin() + i);
      return true;
    }
  }
  return false;
}

FighterInterface* Arena::getFighter(string name){
  stringstream ss;
  for (Fighter* fp : fighterVec){
    if(fp->getName() == name){
      return fp;
    }
  }
  return NULL;
}

int Arena::getSize() const{
  return fighterVec.size();
}
