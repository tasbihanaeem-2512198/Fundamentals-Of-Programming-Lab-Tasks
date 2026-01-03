#include <iostream>
using namespace std;

void processArray(int arr[],int size){
	int sum=0;
	int maxValue=arr[0];
	int minValue=arr[0];
	for(int i=0;i<size;i++){
		sum+=arr[i];
	}
	for(int i=1;i<size;i++){
		if(arr[i]>maxValue){
			maxValue=arr[i];
		}
		if(arr[i]<minValue){
			minValue=arr[i];
		}
	}
	cout<<"Sum is "<<sum<<endl;
	cout<<"Maximum element is "<<maxValue<<endl;
	cout<<"Minimum element is "<<minValue<<endl;
	
}
int main(){
	int arr[]={4,8,1,15,6};
	processArray(arr,5);

	
	
	
	return 0;
}