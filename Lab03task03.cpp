/*Write a C program that takes two integer values as input from the user. Then swap the values taken 
from the user and display the output of the variables. (Value of num1 should be stored in num2 and vice 
versa).*/

#include <iostream>
using namespace std;
int main(){
	int number1,number2;
	cout<<"Enter the first number:";
	cin>>number1;
	cout<<"Enter the second number:";
	cin>>number2;
	cout<<"Before swapping: "<<number1<<" "<<number2<<endl;
	int temp=number1;
	number1=number2;
	number2=temp;
	cout<<"After swapping: "<<number1<<" "<<number2<<endl;
	return 0;
}