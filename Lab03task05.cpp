#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	float pie=3.14,radius,height;
	cout<<"Enter the radius:";
	cin>>radius;
	cout<<"Enter the height:";
	cin>>height;
	float volume=1/3.0*pie*radius*radius*height;
	cout<<"The volume of a cone is "<<fixed<<setprecision(3)<<volume<<endl;
	return 0;
}