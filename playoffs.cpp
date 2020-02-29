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

int minWins = 0;
int maxWins = 16;

int numOpenTeamsPlayoffs = 256;
int numImTeamsPlayoffs = 64;
int numMainTeamsPlayoffs, numAdvancedTeamsPlayoffs = 32;

int imMoveups = 2;
int mainMoveupsFromOpen = 5;


void playoffsOrNot (string division, int wins) {

    string made = "Made playoffs.";
    string notMade = "Did not make playoffs.";
    string depends = "Depends on how many rounds lost.";
    if (division != "open" && division != "intermediate" && division != "main" && division != "advanced") {
        cout << "Division does not exist!\n";
        return;
    }
    if (wins < 0 || wins > 16) {
        cout << "Impossible number of wins.\n";
        return;
    }
    if (division == "open") {
        if (wins > 16 || wins < 0) {
            cout << "Impossible amount of wins.\n";
        }
        else if (wins >= openWinsPlayoffs) {
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
        if (wins > 16 || wins < 0) {
            cout << "Impossible amount of wins.\n";
        }
        else if (wins >= imWinsPlayoffs) {
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
        if (wins > 16 || wins < 0) {
            cout << "Impossible amount of wins.\n";
        }
        else if (wins >= mainWinsPlayoffs) {
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
        if (wins > 16 || wins < 0) {
            cout << "Impossible amount of wins.\n";
        }
        else if (wins >= advancedWinsPlayoffs) {
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

void introduction() {
    int input;
    int wins;
    string division;

    while (input != 0) {
        cout << "\nWelcome! Press the corresponding number to select each option: " << endl;
        cout << "0. Exit the program." << endl;
        cout << "1. Check if you made playoffs (open, intermediate, main, advanced)." << endl;
        cout << "2. Check to see how many wins you need to make IM/Main/Advanced." << endl;
        cin >> input;
        if (input == 1) {
            cout << "Enter which division: ";
            cin >> division;
            cout << "Enter how many wins: ";
            cin >> wins;
            playoffsOrNot(division, wins);
        }
        //inputs 2, 3, etc...
    }
    cout << "Goodbye!";
    return;
}

int main() {

    introduction();

    return 0;
}