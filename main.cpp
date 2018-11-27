#include <iostream>
#include <cstdlib>
#include <stdio.h>
using namespace std;
char board[3][3]={'1','2','3','4','5','6','7','8','9'};
char user='X';
void BoardMaker()
{
	system("cls");
	cout<<"Tic Tac Toe v1.0"<<endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout<<board[i][j]<<" ";
		}
		cout<<endl;
	}
}
void game()
{
	int a;
	cout<<"Press the number of the field: ";
	cin>>a;

 switch(a)
    {
        case 1:
            board[0][0]=user;
        break;

        case 2:
            board[0][1]=user;
		break;

        case 3:
            board[0][2]=user;
		break;

        case 4:
            board[1][0]=user;
		break;

        case 5:
            board[1][1]=user;
		break;

        case 6:
            board[1][2]=user;
		break;

        case 7:
            board[2][0]=user;
        break;

        case 8:
            board[2][1]=user;
        break;

        case 9:
            board[2][2]=user;
        break;
    }
}
void ToggleUser()
{
	if (user=='X')
    {
        user='O';
    }

	else
    {
       user='X';
    }

}
char Win()
{
	//first player
	if (board[0][0]=='X'&&board[0][1]=='X'&&board[0][2]=='X')
		return 'X';
	if (board[1][0]=='X'&&board[1][1]=='X'&&board[1][2]=='X')
		return 'X';
	if (board[2][0]=='X'&&board[2][1]=='X'&&board[2][2]=='X')
		return 'X';

	if (board[0][0]=='X'&&board[1][0]=='X'&&board[2][0]=='X')
		return 'X';
	if (board[0][1]=='X'&&board[1][1]=='X'&&board[2][1]=='X')
		return 'X';
	if (board[0][2]=='X'&&board[1][2]=='X'&&board[2][2]=='X')
		return 'X';

	if (board[0][0]=='X'&&board[1][1]=='X'&& board[2][2]=='X')
		return 'X';
	if (board[2][0]=='X'&&board[1][1]=='X'&& board[0][2]=='X')
		return 'X';

	//second player
	if (board[0][0]=='O'&&board[0][1]=='O'&& board[0][2]=='O')
		return 'O';
	if (board[1][0]=='O'&& board[1][1]=='O'&&board[1][2]=='O')
		return 'O';
	if (board[2][0]=='O'&& board[2][1]=='O'&& board[2][2]=='O')
		return 'O';

	if (board[0][0]=='O'&&board[1][0]=='O'&&board[2][0]=='O')
		return 'O';
	if (board[0][1]=='O'&&board[1][1]=='O'&&board[2][1]=='O')
		return 'O';
	if (board[0][2]=='O'&&board[1][2]=='O'&&board[2][2]=='O')
		return 'O';

	if (board[0][0]=='O'&&board[1][1]=='O'&&board[2][2]=='O')
		return 'O';
	if (board[2][0]=='O'&&board[1][1]=='O'&&board[0][2]=='O')
		return 'O';

	return '/';
}
int main()
{
	BoardMaker();
	while (1)
	{
		game();
		BoardMaker();
		if (Win() == 'X')
		{
			cout << "X wins!" << endl;
			break;
		}
		else if (Win() == 'O')
		{
			cout << "O wins!" << endl;
			break;
		}
		ToggleUser();
	}
	getchar();
	return 0;
}
