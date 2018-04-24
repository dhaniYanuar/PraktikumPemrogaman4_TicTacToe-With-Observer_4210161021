#include "Gameplay.h"
#include <iostream>
#include <vector>
using namespace std;

int Gameplay::checkwin(){
		if (square[0] == square [1]  && square[1] == square[2] )
		{	if ( square [0] == 'X' )			
			return 1;
			else
			return 2; 
		}		
		else
		if (square[3] == square [4]  && square[4] == square[5] )
			{	if ( square [3] == 'X' )			
			return 1;
			else
			return 2; 
		}
		else
		if (square[6] == square [7]  && square[7] == square[8] )
			{	if ( square [6] == 'X' )			
			return 1;
			else
			return 2; 
		}
		else
		if (square[0] == square [3]  && square[3] == square[6] )
			{	if ( square [0] == 'X' )			
			return 1;
			else
			return 2; 
		}
		else
		if (square[1] == square [4]  && square[4] == square[7] )
			{	if ( square [1] == 'X' )			
			return 1;
			else
			return 2; 
		}
	else
		if (square[2] == square [5]  && square[5] == square[8] )
			{	if ( square [2] == 'X' )			
			return 1;
			else
			return 2; 
		}
	else
		if (square[0] == square [4]  && square[4] == square[8] )
			{	if ( square [0] == 'X' )			
			return 1;
			else
			return 2; 
		}
	else
		if (square[2] == square [4]  && square[4] == square[6] )
			{	if ( square [2] == 'X' )			
			return 1;
			else
			return 2; 
		}
	else
		if (square[0] == square [3]  && square[3] == square[6] )
			{	if ( square [0] == 'X' )			
			return 1;
			else
			return 2; 
		}
	else 
	return 0;
}

void Gameplay::mark(int player, int box){
	if (player == 1 )
	{

		square[box] = 'X';
	}
	else
		square[box] = 'Y';
}

void Gameplay::display(){
		for(int i=0;i<9;i++)
		{
			cout<< square[i] << "\t" ;
				if (i == 2 || i== 5 || i==8)
					cout<<"\n"; 
		}
}

void Gameplay::play(){
	int player1 = 1, player2 =2 ;
		
	int box, result = 0, flag = 0;
		
	for(int i=1;i<5;i++)
	{
		system("cls");
		display();
		cout<< "\n Player " << player1 << "Enter the Box";
		cin>> box;
		mark( player1, box);
		system("cls");
		display();

		result =checkwin();	
		if (result == 1 )
		{	cout<<"\n Congratualtions! player " << player1 << " has Won ";
			flag = 1;			
			break;
		}
		else
		if (result == 2 )
		{	cout<<"\n Congratualtions! player " << player2 << " has Won ";
			flag = 1;			
			break;
		}

		cout<< "\n Player " << player2 << "Enter the Box";
		cin>> box;
		mark ( player2, box);
		display();
		
		result =checkwin();	
		if (result == 1 )
		{	cout<<"\n Congratualtions! player " << player1 << " has Won ";
			flag = 1;
			condition = true;
			break;
		}
		else
		if (result == 2 )
		{	cout<<"\n Congratualtions! player " << player2 << " has Won ";
			flag = 1;
			condition = false;
			break;
		}
	}
		if (flag == 0 )
		cout<<" \n Sorry, The game is a draw ";
}


void Gameplay::attach(Player *obs) {
    views.push_back(obs);
}
void Gameplay::notify(){
	for (int i = 0; i < views.size(); i++)
    views[i]->update(condition);
}




