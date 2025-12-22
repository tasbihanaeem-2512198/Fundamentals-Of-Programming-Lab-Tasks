/*Write a C program to find the euclidean distance between 2 points (x1, x2) and (y1, 
y2).*/


#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int x1,x2,y1,y2;
	cout<<"Enter the value of x1:";
	cin>>x1;
	cout<<"Enter the value of x2:";
	cin>>x2;
	cout<<"Enter the value of y1:";
	cin>>y1;
	cout<<"Enter thevalue of y2:";
	cin>>y2;
	int euclidean_distance=sqrt(pow(x2-x1,2))+sqrt(pow(y2-y1,2));
	cout<<"The euclidean distance is "<<euclidean_distance;
	return 0;

}
