#include <iostream>
using namespace std;
int main(){
	cout<<"Menu"<<endl;
	cout<<"Press B for burger (RS 200)"<<endl;
	cout<<"Press F for french fries (RS 50)"<<endl;
	cout<<"Press P for Pizza (RS 500)"<<endl;
	cout<<"Press S for sandwiches (RS 150)"<<endl;
	int no_of_types_of_snacks;
	cout<<"Enter the number of types of snacks:";
	cin>>no_of_types_of_snacks;
	char choice;
	int quantity;
	int total_charges;
	int amount;
	for(int i=1;i<=no_of_types_of_snacks;i++){
		cout<<"Enter the choice:"<<endl;
		cin>>choice;
		switch(choice){
		case 'B':
		   case 'b':
		   	cout<<"Enter the quantity:"<<endl;
		   	cin>>quantity;
		   	amount=quantity*200;
		   	break;
		case 'F':
			case 'f':
			cout<<"Enter the quantity:"<<endl;
		   	cin>>quantity;
		   	amount=quantity*50;
		   	break;
		case 'P':
		  case 'p':
		  	cout<<"Enter the quantity:"<<endl;
		  	cin>>quantity;
		  	amount=quantity*500;
		  	break;
		case 'S':
			case 's':
			cout<<"Enter the quantity:"<<endl;
		   	cin>>quantity;
		   	amount=quantity*150;
		   	break;
		}
		total_charges+=amount;
	}
     cout<<"Total Charges:"<<total_charges<<endl;
	return 0;
}