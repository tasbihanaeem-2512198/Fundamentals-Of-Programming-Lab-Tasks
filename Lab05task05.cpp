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
			
	}
	if(cup_size=='D'|| cup_size=='d'){
		totalTime=totalTime+totalTime/2;
	}
	
	cout<<"Total time required "<<totalTime<<" minutes."<<endl;
	
	return 0;
}