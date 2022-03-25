#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // variables name
    char a[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

    // Dasbord Making
    cout<<endl;
    cout<<endl;
    cout << "******************************** Tic Cross Game ************************************ " << endl;
    cout << endl;
    cout << "Player-1 [X]" << endl;
    cout << "Player-2 [O]" << endl;
    cout << endl;
    cout << " _____ _____ _____ " << endl;
    cout << "|     |     |     |" << endl;
    cout << "|  " << a[0][0] << "  |  " << a[0][1] << "  |  " << a[0][2] << "  |" << endl;
    cout << "|_____|_____|_____|" << endl;
    cout << "|     |     |     |" << endl;
    cout << "|  " << a[1][0] << "  |  " << a[1][1] << "  |  " << a[1][2] << "  |" << endl;
    cout << "|_____|_____|_____|" << endl;
    cout << "|     |     |     |" << endl;
    cout << "|  " << a[2][0] << "  |  " << a[2][1] << "  |  " << a[2][2] << "  |" << endl;
    cout << "|_____|_____|_____|" << endl;

    // For Player 1 data
    for (int i = 0; i < 9 / 2; i++)
    {

        cout << "Player-1's Turn :" << endl;
        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
            a[0][0] = 'X';
            break;
        case 2:
            a[0][1] = 'X';
            break;
        case 3:
            a[0][2] = 'X';
            break;
        case 4:
            a[1][0] = 'X';
            break;
        case 5:
            a[1][1] = 'X';
            break;
        case 6:
            a[1][2] = 'X';
            break;
        case 7:
            a[2][0] = 'X';
            break;
        case 8:
            a[2][1] = 'X';
            break;
        case 9:
            a[2][2] = 'X';
            break;
        default:
            cout << "Invalid Choice" << endl;
            break;
        }

        cout << " _____ _____ _____ " << endl;
        cout << "|     |     |     |" << endl;
        cout << "|  " << a[0][0] << "  |  " << a[0][1] << "  |  " << a[0][2] << "  |" << endl;
        cout << "|_____|_____|_____|" << endl;
        cout << "|     |     |     |" << endl;
        cout << "|  " << a[1][0] << "  |  " << a[1][1] << "  |  " << a[1][2] << "  |" << endl;
        cout << "|_____|_____|_____|" << endl;
        cout << "|     |     |     |" << endl;
        cout << "|  " << a[2][0] << "  |  " << a[2][1] << "  |  " << a[2][2] << "  |" << endl;
        cout << "|_____|_____|_____|" << endl;

        // Player1 score

        if ((a[0][0] == 'X') && (a[0][1] == 'X') && (a[0][2] == 'X') || (a[1][0] == 'X') && (a[1][1] == 'X') && (a[1][2] == 'X') || (a[2][0] == 'X') && (a[2][1] == 'X') && (a[2][2] == 'X') || (a[0][0] == 'X') && (a[1][0] == 'X') && (a[2][0] == 'X') || (a[0][1] == 'X') && (a[1][1] == 'X') && (a[2][1] == 'X') || (a[0][2] == 'X') && (a[1][2] == 'X') && (a[2][2] == 'X') || (a[0][0] == 'X') && (a[1][1] == 'X') && (a[2][2] == 'X') || (a[0][2] == 'X') && (a[1][1] == 'X') && (a[2][0] == 'X'))
        {
            cout << endl;
            cout << "SCORE BOARD" << endl;
            cout << endl;
            cout << "  NAME   | SCORE " << endl;
            cout << "Player-1 | 10" << endl;
            cout << "Player-2 | 0" << endl;
            cout << endl;
            cout<<"**************************** Player1 is the Winner **********************************"<<endl;
            cout<<endl;
            break;
        }
        // For Player 2 data

        cout << "Player-2's Turn :" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            a[0][0] = 'O';
            break;
        case 2:
            a[0][1] = 'O';
            break;
        case 3:
            a[0][2] = 'O';
            break;
        case 4:
            a[1][0] = 'O';
            break;
        case 5:
            a[1][1] = 'O';
            break;
        case 6:
            a[1][2] = 'O';
            break;
        case 7:
            a[2][0] = 'O';
            break;
        case 8:
            a[2][1] = 'O';
            break;
        case 9:
            a[2][2] = 'O';
            break;
        default:
            cout << "Invalid Choice" << endl;
            break;
        }

        cout << " _____ _____ _____ " << endl;
        cout << "|     |     |     |" << endl;
        cout << "|  " << a[0][0] << "  |  " << a[0][1] << "  |  " << a[0][2] << "  |" << endl;
        cout << "|_____|_____|_____|" << endl;
        cout << "|     |     |     |" << endl;
        cout << "|  " << a[1][0] << "  |  " << a[1][1] << "  |  " << a[1][2] << "  |" << endl;
        cout << "|_____|_____|_____|" << endl;
        cout << "|     |     |     |" << endl;
        cout << "|  " << a[2][0] << "  |  " << a[2][1] << "  |  " << a[2][2] << "  |" << endl;
        cout << "|_____|_____|_____|" << endl;

        // player2 Score
        if ((a[0][0] == 'O') && (a[0][1] == 'O') && (a[0][2] == 'O') || (a[1][0] == 'O') && (a[1][1] == 'O') && (a[1][2] == 'O') || (a[2][0] == 'O') && (a[2][1] == 'O') && (a[2][2] == 'O') || (a[0][0] == 'O') && (a[1][0] == 'O') && (a[2][0] == 'O') || (a[0][1] == 'O') && (a[1][1] == 'O') && (a[2][1] == 'O') || (a[0][2] == 'O') && (a[1][2] == 'O') && (a[2][2] == 'O') || (a[0][0] == 'O') && (a[1][1] == 'O') && (a[2][2] == 'O') || (a[0][2] == 'O') && (a[1][1] == 'O') && (a[2][0] == 'O'))
        {
            cout << endl;
            cout << "SCORE BOARD" << endl;
            cout << endl;
            cout << "  NAME   | SCORE " << endl;
            cout << "Player-2 | 10" << endl;
            cout << "Player-1 | 0" << endl;
            cout << endl;
            cout<<"**************************** Player2 is the Winner **********************************"<<endl;
            cout<<endl;
            break;
        }
       
    }



    return 0;
}
