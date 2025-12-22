/*A car traveled for some hours. Take the number of Hours travelled as input on runtime, and then take 
input for the Distance Travelled during this time, Calculate Average Speed and display it on the screen.*/
#include <iostream>
using namespace std;
int main(){
	float hours;
	float distance_travelled;
	cout<<"Enter the number of hours you have travelled:";
	cin>>hours;
	cout<<"Enter the distance:";
	cin>>distance_travelled;
	if(hours==0){
		cout<<"Hours cannot be zero because division with 0 is not possible.";
	}
	else{
	float average_speed=distance_travelled/hours;
	cout<<"The average speed is "<<average_speed<<" km/h";
    }
	return 0;
}