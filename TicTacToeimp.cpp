#include "TicTacToeHeader.h"

//  function that colds the game
void TicTacToe::game()
{
	// winner variable
	bool i = false;

	// prompt
	cout << "Tic TacToe Game" << endl << endl;

	// prints rule
	cout << "Please enter your choice of space: " << endl;
	cout << "top left = 1  | top middle = 2 | top right = 3" << endl;
	cout << "middle left = 4  | middle = 5 | middle right = 6" << endl;
	cout << "bottom left = 7  | bottom middle = 8  | bottom right = 9" << endl;


	// for loop asks users for their choice of space
	for (int a = 0; a < 4; a++)
	{


		cout << "player1 choice: ";
		cin >> choice;
		cout << endl;

		// if statments to find a winer
		winner();

		cout << "player2 choice: ";
		cin >> Ply;


		// if both players choice equal the same make player 2 make another choice
		if (choice == Ply)
		{
			cout << "player2 Choice: ";
			cin >> Ply;
		}

		// adds a x or o to the table
		table();

		// a for loop to print the new board, table
		for (int b = 0; b < 1; b++)
		{

			print();

		}
		cout << endl;

		
		// variable equals a win checking function
		i = end();
		// if i is true and a winner is found end this function
		if (i == true)
			break;
	}

}




// a function to show the game tables choice of space
void TicTacToe::table()
{
	// 2 switch statments for both players choices
	switch (choice)
	{
	case 1:
		board[0][0] = 'x';

		break;
	case 2:
		board[0][1] = 'x';
		break;
	case 3:
		board[0][2] = 'x';
		break;
	case 4:

		board[1][0] = 'x';
		break;
	case 5:
		board[1][1] = 'x';

		break;
	case 6:
		board[1][2] = 'x';

		break;
	case 7:
		board[2][0] = 'x';

		break;
	case 8:
		board[2][1] = 'x';

		break;
	case 9:
		board[2][2] = 'x';

		break;
	default:
		cout << "not a choice try again";
		cin >> choice;
		break;
	}




	switch (Ply)
	{
	case 1:
		board[0][0] = 'o';

		break;
	case 2:
		board[0][1] = 'o';
		break;
	case 3:
		board[0][2] = 'o';
		break;
	case 4:

		board[1][0] = 'o';
		break;
	case 5:
		board[1][1] = 'o';

		break;
	case 6:
		board[1][2] = 'o';

		break;
	case 7:
		board[2][0] = 'o';

		break;
	case 8:
		board[2][1] = 'o';

		break;
	case 9:
		board[2][2] = 'o';

		break;
	default:
		cout << "not a choice try again";
		cin >> Ply;
		break;
	}
}




// funtion to print table
void TicTacToe::print()
{
	// nested for loop to print board
	for (int a = 0; a < 3; a++)
	{
		for (int b = 0; b < 3; b++)
		{
			// prints values
			cout << board[a][b] << "|";


		}
		
		cout << endl;

	}
}


// funtion to check for a winner
void TicTacToe::winner()
{
	// if top is  covered  winner is choosen
	if (board[0][0] == board[0][1] && board[0][0] == board[0][2])
	{

	// x is player 1 y is player 2
		if (board[0][0] == 'x')
		{

			cout << "Player1 win! " << endl;

		}
		if (board[0][0] == 'o')
		{

			cout << "Player2 wins! " << endl;
		}
	}


	// if left is covered winner is choosen
	if (board[0][0] == board[1][0] && board[0][0] == board[2][0])
	{
		if (board[0][0] == 'x')
		{
			cout << "Player1 win! " << endl;
		}
		if (board[0][0] == 'o')
		{
			cout << "Player2 wins! " << endl;
		}
	}


	// if diagonlly is covered, winner is choosen
	if (board[0][0] == board[1][1] && board[0][0] == board[2][2])
	{
		if (board[0][0] == 'x')
		{

			cout << "Player1 win! " << endl;
		}

		if (board[0][0] == 'o')
		{

			cout << "Player2 wins! " << endl;
		}
	}


	// if right is covered  winner is choosen
	if (board[0][2] == board[1][2] && board[0][2] == board[2][2])
	{
		if (board[0][2] == 'x')
		{

			cout << "Player1 win! " << endl;
		}

		if (board[0][2] == 'o')
		{

			cout << "Player2 wins! " << endl;
		}
	}

	// if bottom is covered  winner is choosen
	if (board[2][0] == board[2][1] && board[2][0] == board[2][2])
	{

		if (board[2][0] == 'x')
		{

			cout << "Player1 win! " << endl;
		}
		if (board[2][0] == 'o')
		{
			cout << "Player2 wins! " << endl;

		}
	}
	// if diagnal was chosen
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2])
	{

		if (board[2][0] == 'x')
		{

			cout << "Player1 win! " << endl;
		}
		if (board[2][0] == 'o')
		{
			cout << "Player2 wins! " << endl;

		}
	}
	// if middle was chosen
	if (board[2][1] == board[1][1] && board[2][1] == board[0][1])
	{

		if (board[1][1] == 'x')
		{

			cout << "Player1 win! " << endl;
		}
		if (board[1][1] == 'o')
		{
			cout << "Player2 wins! " << endl;

		}
	}
	// if middle was chosen
	if (board[1][0] == board[1][1] && board[1][0] == board[1][2])
	{

		if (board[1][0] == 'x')
		{

			cout << "Player1 win! " << endl;
		}
		if (board[1][0] == 'o')
		{
			cout << "Player2 wins! " << endl;

		}
	}
}




// function to find a winner and end game
bool TicTacToe::end()
{
	//same as winner only returns true
	if (board[0][0] == board[0][1] && board[0][0] == board[0][2])
	{
		if (board[0][0] == 'x')
		{

			return true;

		}
		if (board[0][0] == 'o')
		{

			return true;

		}
	}



	if (board[0][0] == board[1][0] && board[0][0] == board[2][0])
	{
		if (board[0][0] == 'x')
		{

			return true;
		}
		if (board[0][0] == 'o')
		{

			return true;
		}
	}



	if (board[0][0] == board[1][1] && board[0][0] == board[2][2])
	{

		if (board[0][0] == 'x')
		{

			return true;
		}

		if (board[0][0] == 'o')
		{

			return true;
		}
	}



	if (board[0][2] == board[1][2] && board[0][2] == board[2][2])
	{
		if (board[0][2] == 'x')
		{

			return true;
		}

		if (board[0][0] == 'o')
		{

			return true;
		}
	}


	if (board[2][0] == board[2][1] && board[2][0] == board[2][2])
	{

		if (board[2][0] == 'x')
		{

			return true;
		}
		if (board[0][0] == 'o')
		{
			return true;

		}
	}
}