#include <iostream>
using namespace std;
int main(){
	int size;
	cout<<"Enter the size of an array:"<<endl;
	cin>>size;
	int arr[size];
	cout<<"Enter the elements of an array:";
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	for(int i=size-1;i>=0;i--){
		cout<<arr[i]<<" ";
	}
	return 0;
}