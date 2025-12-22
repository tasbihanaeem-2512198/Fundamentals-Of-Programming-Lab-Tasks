/*Find both roots of the quadratic equation using the formula, after taking a, b, c as
inputs using C++.*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
int a,b,c;
cout<<"Enter the value of a,b and c:";
cin>>a;
cin>>b;
cin>>c;
float realPart,imagPart;
double discriminant=b*b-4*a*c;
double root1,root2;
if(discriminant>0){
	root1=-b+sqrt(discriminant)/2*a;
	root2=-b-sqrt(discriminant)/2*a;
	cout<<"Two real and distinct roots."<<endl;
	cout<<"root1="<<root1<<endl;
	cout<<"root2="<<root2;
}
else if(discriminant==0){
	root1=-b/(2*a);
	cout<<"Two real and equal roots."<<endl;
	cout<<"Root="<<root1<<endl;	
}
else{
	realPart=-b/(2*a);
	imagPart=sqrt(-discriminant)/2*a;
	cout<<"Roots are imaginary."<<endl;
	cout<<"Root 1="<<realPart<<"+"<<imagPart<<"i"<<endl;
	cout<<"Root 2="<<realPart<<"-"<<imagPart<<"i"<<endl;
}
return 0;

}
