/*Write a C Program to find the minimum and maximum number in an array.
Input: {4,1,6,8,10,21,8,9,2,6}
Output:
Minimum Number = 1
Maximum Number = 21
*/
#include <iostream>
using namespace std;
int main(){
	int arr[7]={78,34,23,12,99,76,67};
	int max_element=arr[0];
	int min_element=arr[0];
	for(int i=1;i<7;i++){
		if(arr[i]>max_element){
			max_element=arr[i];
		}
	}
	for(int i=1;i<7;i++){
		if(arr[i]<min_element){
			min_element=arr[i];
		}
	}
	cout<<"Maximum element in an array is "<<max_element<<endl;
	cout<<"Minimum element in an array is "<<min_element<<endl;
	
	return 0;
}