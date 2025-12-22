/*You are supposed to create a mark sheet. There are total 4 subjects. Each subject has maximum marks 
100, therefore total maximum marks are 400. Take marks of 4 subjects as an input from the user. Calculate the 
average percentage, and output the final overall letter grade using table below. Note: There should only be ONE 
grade in output (if marks are 87 then only A should be output, not A, B, C, D, and F).
Letter Grade Percentage
A 86+
B 74+
C 62+
D 50+
F <50*/
#include <iostream>
using namespace std;
int main(){
	int math,physics,english,computer_science;
	float total_marks=400.0;
	cout<<"Enter the marks of math:";
	cin>>math;
	cout<<"Enter the marks of english:";
	cin>>english;
	cout<<"Enter the marks of physics:";
	cin>>physics;
	cout<<"Enter the marks of computer science:";
	cin>>computer_science;
	float percentage=(math+physics+english+computer_science)/total_marks*100.0;
	cout<<"Percentage: "<<percentage<<endl;
	if(percentage>86){
		cout<<"Grade:A"<<endl;
	}
	else if(percentage>74){
		cout<<"Grade:B"<<endl;
	}
	else if(percentage>62){
		cout<<"Grade:C"<<endl;
	}
	else if(percentage>50){
		cout<<"Grade:D"<<endl;
	}
	else{
		cout<<"Grade:F"<<endl;
	}
	return 0;
}