/*Write a C++ program that asks the user to enter their First Name and Last Name. After taking the
input, the program should display the message: “Hello Mr. FirstName LastName.*/

#include <iostream>
using namespace std;
int main(){
	string first_name;
	string last_name;
	cout<<"Enter your first name:"<<endl;
	getline(cin,first_name);
	cout<<"Enter your last name:"<<endl;
	getline(cin,last_name);
	cout<<"Hello Mr."<<first_name<<" "<<last_name;
	return 0;
}