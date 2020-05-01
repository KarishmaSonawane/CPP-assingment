#include <iostream>
using namespace std;

class TicTacToe
{
    public:
    char board[10] = {'o','1','2','3','4','5','6','7','8','9'};
    int player = 1,choice;

    int checkwin()
    {
    if (board[1] == board[2] && board[2] == board[3])
        return 1;

    else if (board[4] == board[5] && board[5] == board[6])
        return 1;

    else if (board[7] == board[8] && board[8] == board[9])
        return 1;

    else if (board[1] == board[4] && board[4] == board[7])
        return 1;

    else if (board[2] == board[5] && board[5] == board[8])
        return 1;

    else if (board[3] == board[6] && board[6] == board[9])
        return 1;

    else if (board[1] == board[5] && board[5] == board[9])
        return 1;

    else if (board[3] == board[5] && board[5] == board[7])
        return 1;

    else if (board[1] != '1' && board[2] != '2' && board[3] != '3' 
                    && board[4] != '4' && board[5] != '5' && board[6] != '6' 
                  && board[7] != '7' && board[8] != '8' && board[9] != '9')
        return 0;

    else
        return -1;
    }


    void displayboard()
    {
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << board[1] << "  |  " << board[2] << "  |  " << board[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << board[4] << "  |  " << board[5] << "  |  " << board[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << board[7] << "  |  " << board[8] << "  |  " << board[9] << endl;

    cout << "     |     |     " << endl << endl;
    }

    void markBoard(char mark)
    {
        if (choice == 1 && board[1] == '1')

            board[1] = mark;
        else if (choice == 2 && board[2] == '2')

            board[2] = mark;
        else if (choice == 3 && board[3] == '3')

            board[3] = mark;
        else if (choice == 4 && board[4] == '4')

            board[4] = mark;
        else if (choice == 5 && board[5] == '5')

            board[5] = mark;
        else if (choice == 6 && board[6] == '6')

            board[6] = mark;
        else if (choice == 7 && board[7] == '7')

            board[7] = mark;
        else if (choice == 8 && board[8] == '8')

            board[8] = mark;
        else if (choice == 9 && board[9] == '9')

            board[9] = mark;
        else
        {
            cout<<"Invalid move ";

            player--;
            cin.clear();
            cin.ignore();
        }
    }

};

int main()
{
    TicTacToe t;

    char mark;
    int gamestatus=0;

    do
    {
        t.displayboard();
        t.player=(t.player%2)?1:2;

        cout << "Player " << t.player << ", enter a number:  ";
        cin >> t.choice;

        mark=(t.player == 1) ? 'X' : 'O';

        t.markBoard(mark);

        gamestatus=t.checkwin();

        t.player++;
    }while(gamestatus==-1);

    if(gamestatus==1)
        cout<<"==>\aPlayer "<<--t.player<<" win ";

    else
        cout<<"==>\aGame draw";

    t.displayboard();

    cin.clear();
    cin.ignore();
    return 0;
}

