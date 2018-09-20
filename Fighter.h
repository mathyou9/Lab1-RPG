#include "FighterInterface.h"

class Fighter : class FighterInterface{
public:
  Fighter(){

  };
  ~Fighter(){}

  virtual std::string getName() const = 0;

	virtual int getMaximumHP() const z= 0;

	virtual int getCurrentHP() const = 0;

	virtual int getStrength() const = 0;

	virtual int getSpeed() const = 0;

	virtual int getMagic() const = 0;

	virtual int getDamage() = 0;

	virtual void takeDamage(int damage) = 0;

	virtual void reset() = 0;

	virtual void regenerate() = 0;

	virtual bool useAbility() = 0;

protected:


}
