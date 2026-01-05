/*You are developing a C program for a coffee shop that offers discounts based on customer loyalty and purchase 
history. The program should work as follows:
The program should have a user-defined function named calculateDiscount that takes two parameters: the 
customer's total purchase amount and the number of times they have visited the shop in the past month.
determine the discount based on the following criteria:
1. If the customer has visited the shop more than 10 times in the past month and their total purchase amount 
is $50 or more, they get a 15% discount.
2. If the customer has visited the shop more than 5 times in the past month and their total purchase amount 
is $30 or more, they get a 10% discount.
3. For all other customers, no discount is applied.
The function should return the calculated discount amount.
In the main part of the program, prompt the user to input their total purchase amount and the number of times they 
have visited the shop. Call the calculateDiscount function to calculate the discount, and display the discount 
amount to the user.*/

#include <iostream>
using namespace std;
int discountAmount(int totalAmount,int nooftimes){
	int discount;
	int amountafterdiscount;
	if(totalAmount>=50 && nooftimes>10){
	  discount=15/100.0*totalAmount;
	  amountafterdiscount=totalAmount-discount;
	  return amountafterdiscount;
	}
	else if(totalAmount>=30 && nooftimes>5){
	  discount=10/100.0*totalAmount;
	  amountafterdiscount=totalAmount-discount;	
	  return amountafterdiscount;
	}
	else{
		cout<<"No discount."<<endl;
		exit(0);
	}
}

int main(){
	int totalPurchaseAmount;
	int numberOfTimes;
	cout<<"Enter the total purchase amount (in dollars($)):"<<endl;
	cin>>totalPurchaseAmount;
	cout<<"Enter the number of times you visited the shop:"<<endl;
	cin>>numberOfTimes;
	cout<<"Discount amount:"<<discountAmount(totalPurchaseAmount,numberOfTimes)<<"$";
	
	return 0;
}