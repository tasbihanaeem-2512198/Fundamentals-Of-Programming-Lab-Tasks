#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a1=5,a2=2,a3=-3,b1=-4,b2=9,b3=2;
	double angle_degree=53;
	double angle_rad=angle_degree*M_PI/180;
	double magnitudeofvector_A;
	double magnitudeofvector_B;
	double dot_product;
	magnitudeofvector_A=sqrt(a1*a1+a2*a2+a3*a3);
	magnitudeofvector_B=sqrt(b1*b1+b2*b2+b3*b3);
	dot_product=magnitudeofvector_A*magnitudeofvector_B*cos(angle_rad);
	cout<<"Dot product is "<<dot_product<<endl;
	return 0;
}