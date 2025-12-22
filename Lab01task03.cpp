/*Sara has a cylindrical water tank with a radius of 5 meters and a height of 8 meters. Write a C++
program to calculate and display the volume of the water tank using the formula: V = π × r² × h*/

#include <iostream>
using namespace std;
int main(){
	int radius,height;
	float volume,PIE=3.14;
	cout<<"Enter the radius:";
	cin>>radius;
	cout<<"Enter the height:";
	cin>>height;
	volume=PIE*radius*height;
	cout<<"The volume of a water tank is "<<volume;
	return 0;
}