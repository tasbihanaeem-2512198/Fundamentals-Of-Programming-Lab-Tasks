/*An online shopping store is providing discounts on the items due to the Eid. If the 
cost of items is more than 1999 it will give a discount upto 10%. If the cost of 
shopping is 2000 to 4000, a 20% discount will be applied. If the cost of shopping is 
4001 to 6000, a 30% discount will be applied. If it's more than 6000 then 50% 
discount will be applied to the cost of shopping. Print the actual amount, saved 
amount and the amount after discount.*/
#include <iostream>
using namespace std;
int main(){
	int actual_amount;
	int amount_after_discount;
	int saved_amount;
	int discount_amount;
	cout<<"Enter the actual amount:";
	cin>>actual_amount;
	if(actual_amount<=1999){
		discount_amount=actual_amount*10/100.0;
	}
	else if(actual_amount>=2000 && actual_amount<=4000){
		discount_amount=actual_amount*20/100.0;
	}
	else if(actual_amount>=4001 && actual_amount<=6000){
		discount_amount=actual_amount*30/100.0;
	}
	else{
		discount_amount=actual_amount*50/100.0;
	}
	amount_after_discount=actual_amount-discount_amount;
	saved_amount=actual_amount-amount_after_discount;
	cout<<"Actual amount:"<<actual_amount<<endl;
	cout<<"Amount after discount:"<<amount_after_discount<<endl;
	cout<<"Saved_amount:"<<saved_amount;
	return 0;
}