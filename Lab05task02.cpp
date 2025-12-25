/*There are 2 wolves and 1 sheep in a line. Both wolves will attempt to eat the 
sheep. You are supposed to find out which wolf will reach the sheep and eat it, 
assuming both wolves move at the same speed and the sheep does not move. 
Take as input the positions of wolf A, wolf B and the sheep on the line (xcoordinate) and find out which wolf will reach the sheep first and eat it.
If Wolf A reaches the sheep first, print “Wolf A”
If Wolf B reaches the sheep first, print “Wolf B”
If both wolves reach the sheep at the same time, the wolves will get distracted 
and fail to eat the sheep, so print “Wolves distracted, Sheep escaped”
Example: Wolf A pos = 3, Wolf B pos = 7, Sheep pos = 4. Wolf A will reach the 
sheep quicker than Wolf B so it will eat the sheep, program should print “Wolf A”.*/

#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int Wolf_A_pos,Wolf_B_pos,sheep_pos;
	cout<<"Enter the position of wolf A:"<<endl;
	cin>>Wolf_A_pos;
	cout<<"Enter the position of wolf B:"<<endl;
	cin>>Wolf_B_pos;
	cout<<"Enter the sheep position:"<<endl;
	cin>>sheep_pos;
	int distance_A,distance_B;
	distance_A=abs(Wolf_A_pos-sheep_pos);
	distance_B=abs(Wolf_B_pos-sheep_pos);
	if(distance_A<distance_B){
		cout<<"Wolf A";
	}
	else if(distance_B<distance_A){
		cout<<"Wolf B";
	}
	else{
		cout<<"Wolves distracted,sheep escaped.";
	}
	return 0;
}