/*Write a C++ program that takes the drone position (x1, y1) and obstacle position (x2, y2). Calculate
and display the distance between them using the formula: D = √((x2 − x1)² + (y2 − y1)²)*/

#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int x1,x2,y1,y2;
	cout<<"Drone Position:"<<endl;
	cout<<"Enter the value of x co-ordinate:";
	cin>>x1;
	cout<<"Enter the value of y co-ordinate:";
	cin>>y1;
	cout<<"Obstacle Position:"<<endl;
	cout<<"Enter the value of x co-ordinate:";
	cin>>x2;
	cout<<"Enter the value of y co-ordinate:";
	cin>>y2;
	float distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	cout<<"The distance between drone and obstacle is "<<distance<<"m"<<endl;
	return 0;
}