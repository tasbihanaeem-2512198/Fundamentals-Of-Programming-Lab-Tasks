/*Write a C Program that takes a user input array and prints the sum of its elements.
Input: {1,2,3,4,5,6,7,8,9}
Output: 45*/
#include <iostream>
using namespace std;
int main(){
	int sum=0;
	int size;
	cout<<"Enter the size of an array:"<<endl;
	cin>>size;
	int arr[size];
	cout<<"Enter the elements of an array:";
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	for(int i=0;i<size;i++){
		sum+=arr[i];
	}
	cout<<"The sum of elements of an array is "<<sum<<"."<<endl;
	return 0;
}