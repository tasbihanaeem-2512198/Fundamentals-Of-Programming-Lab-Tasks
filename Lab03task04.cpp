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