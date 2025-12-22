/*A gadget store is offering a 15% discount on a gadget with an original price of 2000 Rs. Write a C++
program to calculate and print the discounted price of the gadget.*/

#include <iostream>
using namespace std;
int main(){
	float original_price=2000;
	float discount=(15.0/100)*original_price;
	float discounted_price=original_price-discount;
	cout<<"The discounted price of the gadget is "<<discounted_price;
	return 0;
}