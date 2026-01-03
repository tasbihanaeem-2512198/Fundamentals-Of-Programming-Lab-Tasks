/*Write a C program with a user-defined function calculate to perform basic arithmetic operations such as addition, 
subtraction, multiplication, and division. The program should take two numbers and an operation choice as input, 
and then use the function to perform the operation.*/
#include <iostream>
using namespace std;
int calculate(float num1,float num2,char operation){
	float result;
	switch(operation){
		case '+':
			result=num1+num2;
			break;
		case '-':
			result=num1-num2;
			break;
		case '*':
			result=num1*num2;
			break;
		case '/':
			result=num1/num2;
			break;
		default:
			cout<<"Invalid choice";
	}	
	return result;
}
int main(){
	float num1,num2,result;
	char operation;
	cout<<"Enter the first number:"<<endl;
	cin>>num1;
	cout<<"Enter the second number:"<<endl;
	cin>>num2;
	cout<<"Enter the operation:"<<endl;
	cin>>operation;
	result=calculate(num1,num2,operation);
	cout<<"The result is "<<result<<endl;
	return 0;
}