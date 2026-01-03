/*In this C program, you are tasked with creating a function called decideCarUsage that helps users decide whether 
they should use their car on a particular day of the week. Users provide the numeric part of their car's number and 
the day of the week (1 to 7). The program applies a simple rule: even-numbered cars should be used on even days, 
and odd-numbered cars on odd days. The function returns 1 if the car should be used and 0 if it should not.*/

#include <iostream>
using namespace std;
int decideCarUsage(int car_num,int day){
	if(car_num%2==0 && day%2==0){
		return 1;
	}
	else if(car_num%2!=0 && day%2!=0){
		return 1;
	}
	else{
		return 0;
	}
	
	
	
	
}
int main(){
	int cars_number,day_of_the_week;
	cout<<"Enter the car number:"<<endl;
	cin>>cars_number;
	cout<<"Enter the day of the week:"<<endl;
	cin>>day_of_the_week;
	if(decideCarUsage(cars_number,day_of_the_week)==1){
		cout<<"The car should be used."<<endl;
	}
	else{
		cout<<"The car should not be used."<<endl;
	}
	return 0;
}