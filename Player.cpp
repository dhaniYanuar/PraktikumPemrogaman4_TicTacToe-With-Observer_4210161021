#include <iostream>
#include <vector>
#include "Player.h"
using namespace std;


Player::Player(Gameplay *mod) {
        model = mod;
        model->attach(this);
}
Gameplay Player::getSubject(){
        return model;
}

void Player::update(bool condition){
	win = condition;
	if(win){
		cout << "Player 1 Won";
	}
	else{
		cout << "Player 2 Won";
	}
}
