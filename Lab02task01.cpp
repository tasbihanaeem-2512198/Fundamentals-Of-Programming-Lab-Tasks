//Take a number as an input from a user. Check if the number is an even number or an odd number.
#include <iostream>
using namespace std;
int main(){
	int number;
	cout<<"Enter the number:"<<endl;
	cin>>number;
	if(number%2==0){
		cout<<"The number you have entered is even.";
	}
	else{
		cout<<"The number you have entered is odd.";
	}
	return 0;
}