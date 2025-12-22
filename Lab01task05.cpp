/*An ice cream seller sets up shops in four areas of Karachi: Clifton Corner, Saddar Square, Gulshan
Glades, and Korangi Crossing. The price of one ice cream is 150 Rs. The numbers sold are 35, 50,
20, and 45 respectively. Write a C++ program to calculate the total ice creams sold and the total
money earned.*/

#include <iostream>
using namespace std;
int main(){
	int priceoficecream=150;
	int cliftoncorner_icecream=35;
	int saddarsquare_icecream=50;
	int gulshanglades_icecream=20;
	int korangicrossing_icecream=45;
	int totalicecreamsold;
	int totalmoneyearned;
	totalicecreamsold=cliftoncorner_icecream+saddarsquare_icecream+gulshanglades_icecream+korangicrossing_icecream;
	totalmoneyearned=totalicecreamsold*150;
	cout<<"Total ice cream sold:"<<totalicecreamsold<<endl;
	cout<<"Total money earned:"<<totalmoneyearned;
	return 0;
}