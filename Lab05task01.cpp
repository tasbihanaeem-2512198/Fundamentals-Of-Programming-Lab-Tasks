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
