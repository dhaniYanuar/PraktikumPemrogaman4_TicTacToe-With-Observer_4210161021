#include <iostream>
#include <vector>
#include "Player.h"
using namespace std;


class Gameplay{
private:
	//Gamelay attribute
	char square[9] = {'0','1','2','3','4','5','6','7','8'};
	
	//Subject attribute
	vector < class Player * > views;
	bool condition = false;
public :
	//Gameplay
	int checkwin();	
	void mark(int player, int box);	
	void display();	
	void play();

	
	//Subject Method
	void attach(Player *obs);
    void notify();
};




