#include <iostream>


using namespace std;

// games variables in a class
class TicTacToe
{
private:
	// both players choices set to 0
	int choice = 0;
	int Ply = 0;

public:
	// board array, and prototype functions
	char board[3][3] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ' };
	void game();
	void print();
	void table();
	void winner();
	bool end();

};


