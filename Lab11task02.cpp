/*An automobile company has a serial number for engine parts starting from AA0 to FF9. The other 
characteristics of parts to be specified in a structure are: Year of manufacture, material and quantity 
manufactured.
? Specify a structure to store information corresponding to a part.
? Write a program to retrieve information on parts with serial numbers between BB1 and CC6.*/
#include <iostream>
#include <string>
using namespace std;
struct Part{
    string serialNumber;
    int year;
    string material;
    int quantity;
};
int main(){
    int n;
    cout<<"Enter number of parts: ";
    cin >> n;

    Part parts[100];
    for (int i=0;i<n;i++) {
        cout << "\nEnter details of part " << i+1<<endl;
        cout << "Serial Number: ";
        cin >> parts[i].serialNumber;
        cout << "Year of Manufacture: ";
        cin >> parts[i].year;
        cout << "Material: ";
        cin >> parts[i].material;
        cout << "Quantity Manufactured: ";
        cin >> parts[i].quantity;
    }
    cout << "\nParts with serial numbers between BB1 and CC6:\n";
    for (int i = 0; i < n; i++) {
        if (parts[i].serialNumber >= "BB1" &&
            parts[i].serialNumber <= "CC6") {

            cout << "\nSerial Number: " << parts[i].serialNumber;
            cout << "\nYear: " << parts[i].year;
            cout << "\nMaterial: " << parts[i].material;
            cout << "\nQuantity: " << parts[i].quantity << endl;
        }
    }
    return 0;
}