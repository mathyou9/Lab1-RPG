#include "ArenaInterface.h"
#include "FighterInterface.h"
#include "Fighter.h"
#include "Archer.h"
#include "Cleric.h"
#include "Robot.h"
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

class Arena : public ArenaInterface{
public:
  Arena(){}
  ~Arena(){}

  bool addFighter(string info);

  bool removeFighter(string name);

  FighterInterface* getFighter(string name);

  int getSize() const;
private:
  vector<Fighter*> fighterVec;
};
