/*Write a C++ program that asks the user to input two numbers. The program should: 1. Calculate the
sum of the two numbers
2. Find the square of the sum
3. Display the final result*/

#include <iostream>
using namespace std;
int main(){
	int sum,square,first_number,second_number;
	cout<<"Enter the first number:";
	cin>>first_number;
	cout<<"Enter the second number:";
	cin>>second_number;
	sum=first_number+second_number;
	square=sum*sum;
	cout<<"The square of a sum of number is "<<square<<"."<<endl;
	return 0;
}