#include <iostream>
using namespace std;
//int declarations
//values need to be updated to be more accurate, hard-coded for now
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
int mainMoveupsFromIm = 2;
int advancedMoveupsFromOpen = 8;
int advancedMoveupsFromIm = 6;
int advancedMoveupsFromMain = 3;
int mdlMoveupsFromAdvanced = 3;

string moveupNotPossible = "Moveup invalid.\n";


void playoffsOrNot (string division, int wins) { //fix bug where a string input into "wins" causes infintite loop

    string made = "Made playoffs.\n";
    string notMade = "Did not make playoffs.\n";
    string depends = "Depends on how many rounds lost.\n";
    //invalid values
    if (division != "open" && division != "intermediate" && division != "main" && division != "advanced") {
        cout << "Division does not exist!\n";
        return;
    }
    if (wins < minWins || wins > maxWins) {
        cout << "Impossible number of wins.\n";
        return;
    }
    //valid values
    if (division == "open") {
        if (wins >= openWinsPlayoffs) {
            cout << made;
        }
        else if (wins <= openWinsPlayoffs) {
            cout << notMade;
        }
        else {
            cout << depends;
        }
    }

    else if (division == "intermediate") {
        if (wins >= imWinsPlayoffs) {
            cout << made;
        }
        else if (wins <= imWinsNoPlayoffs) {
            cout << notMade;
        }
        else {
            cout << depends;
        }
    }

    else if (division == "main") {
        if (wins >= mainWinsPlayoffs) {
            cout << made;
        }
        else if (wins <= mainWinsNoPlayoffs) {
            cout << notMade;
        }
        else {
            cout << depends;
        }
    }
    else if (division == "advanced") {
        if (wins >= advancedWinsPlayoffs) {
            cout << made;
        }
        else if (wins <= advancedWinsNoPlayoffs) {
            cout << notMade;
        }
        else {
            cout << depends;
        }
    }
    else {
        cout << "Error: invalid division.\n";
    }
    return;
}



void winsForMoveups(string currDivision, string nextDivision) {
    int numWins = 0;
    if (currDivision != "open" && currDivision != "intermediate" && currDivision != "main" && currDivision != "advanced") {
        cout << "Current division does not exist!\n";
        return;
    }
    if (nextDivision != "open" && nextDivision != "intermediate" && nextDivision != "main" && nextDivision != "advanced" && nextDivision != "MDL") {
        cout << "Division does not exist!\n";
        return;
    }
    if (currDivision == "open") {
        if (nextDivision == "intermediate") {
            numWins = imMoveups;
        }
        else if (nextDivision == "main") {
            numWins = mainMoveupsFromOpen;
        }
        else if (nextDivision == "advanced") {
            numWins = advancedMoveupsFromOpen;
        }
        else {
            cout << moveupNotPossible;
            return;
        }
    }
    else if (currDivision == "intermediate") {
        if (nextDivision == "main") {
            numWins = mainMoveupsFromIm;
        }
        else if (nextDivision == "advanced") {
            numWins = advancedMoveupsFromIm;
        }
        else {
            cout << moveupNotPossible;
            return;
        }
    }
    else if (currDivision == "main") {
        if (nextDivision == "advanced") {
            numWins = advancedMoveupsFromMain;
        }
        else {
            cout << moveupNotPossible;
            return;
        }
    }
    else if (currDivision == "advanced") {
        if (nextDivision == "MDL") {
            numWins = mdlMoveupsFromAdvanced;
        }
        else {
            cout << moveupNotPossible;
            return;
        }
    }

    cout << "Wins needed from " << currDivision << " to " << nextDivision << " is " << numWins << ".\n";

    return;
}

void introduction() {
    int input;
    int wins;
    string division, currDivision, desiredDivision;

    while (input != 0) {
        cout << "\nWelcome! Press the corresponding number to select each option: " << endl;
        cout << "0. Exit the program." << endl;
        cout << "1. Check if you made playoffs (open, intermediate, main, advanced)." << endl;
        cout << "2. Check to see how many wins you need to make intermediate/main/advanced." << endl;
        cin >> input;
        if (input == 1) {
            cout << "Enter which division: ";
            cin >> division;
            cout << "Enter how many wins: ";
            cin >> wins;
            playoffsOrNot(division, wins);
        }
        else if (input == 2) { 
            cout << "Enter current division (open, intermediate, main, advanced): ";
            cin >> currDivision;
            cout << "Enter desired division (intermediate, main, advanced, MDL): ";
            cin >> desiredDivision;
            winsForMoveups(currDivision, desiredDivision);
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