/*Write a C program to input a character from the user and check whether the 
given character is a small alphabet, capital alphabet, digit or special character, 
using if else.*/

#include <iostream>
using namespace std;

int main() {
    char character;
    cout << "Enter the character:" << endl;
    cin >> character;

    if (character >= 'A' && character <= 'Z') {
        cout << "Capital alphabet" << endl;
    }
    else if (character >= 'a' && character <= 'z') {
        cout << "Small alphabet" << endl;
    }
    else {
        cout << "Special character" << endl;
    }

    return 0;
}

