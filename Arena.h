#include "ArenaInterface.h"
#include "FighterInterface.h"
#include "Fighter.h"
#include "Archer.h"
#include "Cleric.h"
#include "Robot.h"
#include <vector>
#include <sstream>

using namespace std;

class Arena : class ArenaInterface{
public:
  Arena(){}
  ~Race(){}

  bool addFighter(string info);//fill params

  bool removeFighter(string name);//fil params

  FighterInterface* getFighter(string name); //find out what params

  int getSize() const = 0;
private:
  vector<Fighter*> fighterVec;
}
