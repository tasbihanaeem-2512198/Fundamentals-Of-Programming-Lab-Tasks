#include<iostream>
using namespace std;
int main(){
float hours;
int minutes;
int normal=50;
cout<<"Enter parking time in hours:";
cin>>hours;
minutes=hours*60;
if(minutes<=60)
cout<<"Parking charges="<<normal;
else if(minutes>60&&minutes<120)
cout<<"Parking charges="<<normal+(2*normal);
else
cout<<"Parking charges="<<normal+(3*normal);
return 0;
}
