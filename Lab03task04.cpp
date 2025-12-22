/*4 A customer asks the IT firm to develop a program in C++ language, which can take
tax rate and salary from the user at runtime and then calculate the tax the user has to pay and the
salary he/she will have after paying the tax. Display the net income after tax deduction*/


#include <iostream>
using namespace std;
int main(){
	float tax_rate,tax_amount,salary,net_income;
	cout<<"Enter the salary:";
	cin>>salary;
	cout<<"Enter the tax rate(%):";
	cin>>tax_rate;
	tax_amount=salary*tax_rate/100;
	net_income=salary-tax_amount;
	cout<<"Tax amount:"<<tax_amount<<endl;
	cout<<"Net income:"<<net_income<<endl;
	return 0;

}
