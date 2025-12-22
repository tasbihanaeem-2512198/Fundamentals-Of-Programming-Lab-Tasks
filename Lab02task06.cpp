/*A temperature monitoring system is used to monitor the appropriate level of the temperature. A
temperature greater than 40 °C is categorized as HIGH, and below 15 °C is categorized as LOW. Anything in 
between is considered MEDIUM. Additionally, as soon as a temperature below 0 °C is monitored, the whole 
system shuts down after displaying ERROR for 5 seconds. Write a scratch program for the above case, taking 
continuous inputs of the temperature, and output the appropriate message regarding temperature level*/
#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	int temperature;
	while(true){
		cout<<"Enter the temperature:"<<endl;
		cin>>temperature;
		if(temperature<0){
			cout<<"Error"<<endl;
			sleep(5);
			break;
		}
		else if(temperature>=40){
			cout<<"High temperature"<<endl;
		}
		else if(temperature>15 && temperature<40){
			cout<<"Medium temperature"<<endl;
		}
		else{
			cout<<"Low temperature"<<endl;
		}
	}
	return 0;
}