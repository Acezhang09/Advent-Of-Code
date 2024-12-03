#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <bits/stdc++.h>

using namespace std;

void part1() {
    string InputLine;
    ifstream InputFile("Q4Input.txt");
    int overlapping = 0;
    while (getline(InputFile, InputLine)) {
        int min_val_1 = stoi(InputLine.substr(0, InputLine.find('-')));
        InputLine.erase(0, InputLine.find('-')+1);
        int max_val_1 = stoi(InputLine.substr(0, InputLine.find(',')));
        InputLine.erase(0, InputLine.find(',')+1);
        int min_val_2 = stoi(InputLine.substr(0, InputLine.find('-')));
        InputLine.erase(0, InputLine.find('-')+1);
        int max_val_2 = stoi(InputLine);
        if (((min_val_1 <= min_val_2) && (max_val_1 >= max_val_2)) || ((min_val_1 >= min_val_2) && (max_val_1 <= max_val_2))){
            overlapping++;
        }
    }
    cout << overlapping << endl;
}

void part2() {
    string InputLine;
    ifstream InputFile("Q4Input.txt");
    int overlapping = 0;
    while (getline(InputFile, InputLine)) {
        int min_val_1 = stoi(InputLine.substr(0, InputLine.find('-')));
        InputLine.erase(0, InputLine.find('-')+1);
        int max_val_1 = stoi(InputLine.substr(0, InputLine.find(',')));
        InputLine.erase(0, InputLine.find(',')+1);
        int min_val_2 = stoi(InputLine.substr(0, InputLine.find('-')));
        InputLine.erase(0, InputLine.find('-')+1);
        int max_val_2 = stoi(InputLine);
        if (((min_val_1 >= min_val_2) && (min_val_1 <= max_val_2)) || ((min_val_2 >= min_val_1) && (min_val_2 <= max_val_1))){
            overlapping++;
        }
    }
    cout << overlapping << endl;
}

int main() {
    //part1();
    part2();
    return 0;
}