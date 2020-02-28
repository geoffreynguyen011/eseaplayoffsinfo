#include <iostream>
using namespace std;

int openWinsPlayoffs = 10;
int openWinsNoPlayoffs = 8;
int imWinsPlayoffs = 11;
int imWinsNoPlayoffs = 9;
int mainWinsPlayoffs = 11;
int mainWinsNoPlayoffs = 9;
int advancedWinsPlayoffs = 11;
int advancedWinsNoPlayoffs = 9;

int numOpenTeamsPlayoffs = 256;
int numImTeamsPlayoffs = 64;
int numMainTeamsPlayoffs, numAdvancedTeamsPlayoffs = 32;

int imMoveups = 2;
int mainMoveupsFromOpen = ;

void introduction() {
    int input;
    int wins;
    string division;

    while (input != 0) {
        cout << "\nWelcome! Press the corresponding number to select each option: " << endl;
        cout << "0. Exit the program." << endl;
        cout << "1. Check if you made playoffs." << endl;
        cout << "2. Check to see how many wins you need to make IM/Main/Advanced." << endl;
        cin >> input;
        if (input == 1) {
            cout << "Enter which division: ";
            cin >> division;
            cout << "Enter how many wins: ";
            cin >> wins;
            if (division == "open") {
                playoffsOrNot(wins, division);
            }
            else if (division == "intermediate") {
                playoffsOrNot(wins, division);
            }
            else if (division == "main") {
                playoffsOrNot(wins, division);
            }
        }
        //inputs 2, 3, etc...
    }
    cout << "Goodbye!\n";
    return;
}

void playoffsOrNot (int wins, string division) {

    string made = "Made playoffs.";
    string notMade = "Did not make playoffs.";
    string depends = "Depends on how many rounds lost.";

    if (division == "open") {
        if (wins >= openWinsPlayoffs) {
            cout << made << '\n';
        }
        else if (wins <= openWinsPlayoffs) {
            cout << notMade << '\n';
        }
        else {
            cout << depends << '\n';
        }
    }

    else if (division == "intermediate") {
        if (wins >= imWinsPlayoffs) {
            cout << made << '\n';
        }
        else if (wins <= imWinsNoPlayoffs) {
            cout << notMade << '\n';
        }
        else {
            cout << depends << '\n';
        }
    }

    else if (division == "main") {
        if (wins >= mainWinsPlayoffs) {
            cout << made << '\n';
        }
        else if (wins <= mainWinsNoPlayoffs) {
            cout << notMade << '\n';
        }
        else {
            cout << depends << '\n';
        }
    }
    else if (division == "advanced") {
        if (wins >= advancedWinsPlayoffs) {
            cout << made << '\n';
        }
        else if (wins <= advancedWinsNoPlayoffs) {
            cout << notMade << '\n';
        }
        else {
            cout << depends << '\n';
        }
    }
    else {
        cout << "Error: invalid division." << '\n';
    }
    return;
}



void winsForMoveups(string currDivision, string nextDivision) {
    if (currDivision == "open") {
        if (nextDivision == "intermediate") {
            
        }
    }

    return;
}

int main() {

    introduction();

    return 0;
}