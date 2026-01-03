/*Create a C program that swaps the values of two integers using a user-defined function, swapIntegers. The user 
inputs two integer values, and the program uses the function to swap them. It should perform the swap, and display 
the updated values.*/

include <iostream>
using namespace std;

void swap(int num1,int num2){
	int temp=num1;
	num1=num2;
	num2=temp;
	cout<<"a="<<num1<<" b="<<num2<<endl;
}

int main(){
	int a,b;
	cout<<"Enter the value of a:"<<endl;
	cin>>a;
	cout<<"Enter the value of b:"<<endl;
	cin>>b;
	swap(a,b);
	return 0;
}