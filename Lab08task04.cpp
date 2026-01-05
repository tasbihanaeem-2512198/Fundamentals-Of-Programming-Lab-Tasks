/*Your task is to create a C program that performs password length validation and user authentication based on the 
given requirements below:
a) Prompts the user to enter a password.
b) Validates the entered password by checking if it is at least 8 characters long.
c) If the password meets the length requirement, the program should compare it to a stored password 
"Secure123."
d) If the entered password matches the stored password, display "Login successful. Welcome!" Otherwise, 
display "Login failed. Incorrect password."*/
#include <iostream>
#include<string.h>
using namespace std;
int main(){
	string storepassword="Secure123";
	string password;
	do{
		cout<<"Enter the password:";
		getline(cin,password);
		
		if(password.length()!=8){
			cout<<"Password should be 8 characters long"<<endl;
     	 }
		
	}while(password.length()<8);
	if(password==storepassword){
		cout<<"Login Successful.Welcome!"<<endl;
	}
	else{
		cout<<"Login failed,incorrect password."<<endl;
	}
	return 0;
}