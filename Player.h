#include <iostream>
#include <vector>
#include "Gameplay.h"
using namespace std;

class Player {
private :
    Gameplay *model;
    bool win =false;
public:
    Player(Gameplay *mod);
	void update (bool condition);
protected:
    Gameplay *getSubject();
};
