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