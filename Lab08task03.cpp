/*You are working on a text processing program. Create a C program that reads a text input from the user and 
searches for a specific character (e.g., 'a') within the text using the strchr function. Display the total count of 
occurrences of the character in the input text.*/
#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char text[200];
	char ch='a';
	int count=0;
	cout<<"Enter the text:"<<endl;
	cin.getline(text,200);
	char *ptr=text;
	while((ptr=strchr(ptr,ch))!=NULL){
		count++;
		ptr++;
	}
	cout<<"Total occurences of "<<ch<<":"<<count;
	return 0;
}