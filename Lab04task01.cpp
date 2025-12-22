/*1. Ali went to visit his grandmother in USA and she gave him 368 pennies as a gift. 
Carrying so many coins would be a hassle, so Ali wishes to convert the 368 pennies 
into a better format. Write a C program which converts the 368 pennies into a set of 
pennies, nickels, dimes, and quarters such that Ali has to carry the least amount of 
coins.  1 quarter = 25 pennies  1 dime = 10 pennies  1 nickel = 5 pennies*/

#include <iostream>
using namespace std;
int main(){
	int total_pennis,quarter,dimes,nickel,pennis;
	cout<<"Enter the pennis:";
	cin>>total_pennis;
	quarter=total_pennis/25;
	total_pennis=total_pennis%25;
	
	dimes=total_pennis/10;
	total_pennis=total_pennis%10;
	
	nickel=total_pennis/5;
	pennis=total_pennis%5;
	
	
	cout<<"Quarter:"<<quarter<<endl;
	cout<<"dimes:"<<dimes<<endl;
	cout<<"Nickel:"<<nickel<<endl;
	cout<<"pennis:"<<pennis<<endl;
	
	
	return 0;

}
