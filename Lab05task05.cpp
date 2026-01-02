/*Write a program to control a coffee machine. Allow the user to input the type of coffee as B for Black 
and W for White. Ask the user if the cup size is double and if the coffee is manual. The following table 
details the time chart for the machine for each coffee type. Display a statement for each step. If the 
coffee size is double, increase the baking time by 50 percent. Use functions to display instructions to the 
user and to compute the coffee time.*/

#include <iostream>
using namespace std;
int main(){
	char coffee_type,cup_size;
	cout<<"Enter the coffee type (W for white,B for black):"<<endl;
	cin>>coffee_type;
	cout<<"Enter the cup size (D for double,S for single):"<<endl;
	cin>>cup_size;
	int totalTime=0;
	switch(coffee_type){
		case 'W':
		case 'w':
			cout<<"---Making a White coffee---"<<endl;
			totalTime+=15;
			cout<<"Put Water"<<endl;
			
			totalTime+=15;
			cout<<"Add sugar"<<endl;
			
			totalTime+=20;
			cout<<"Mix well"<<endl;
			
			totalTime+=2;
			cout<<"Add coffee"<<endl;
			
			totalTime+=4;
			cout<<"Add milk"<<endl;
			
			totalTime+=20;
			cout<<"Mix well"<<endl;
			break;
			
	case 'B':
	case 'b':
		cout<<"---Making a Black Coffee---"<<endl;
		totalTime+=20;
		cout<<"Put Water"<<endl;
		
		totalTime+=20;
		cout<<"Add sugar"<<endl;
		
		totalTime+=25;
		cout<<"Mix well"<<endl;
		
		totalTime+=15;
		cout<<"Add coffee"<<endl;
		
		totalTime+=25;
		cout<<"Mix well"<<endl;
		break;
		
		default:
			cout<<"Invalid Coffee type"<<endl;
		    return 0;
			
	}
	if(cup_size=='D'|| cup_size=='d'){
		totalTime=totalTime+totalTime/2;
	}
	
	cout<<"Total time required "<<totalTime<<" minutes."<<endl;
	
	return 0;

}

