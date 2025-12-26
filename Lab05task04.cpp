/*Write a program in which user enters his NTS and F.Sc marks and your program 
will help student in selection of university. Based on these marks Student will be 
allocated a seat at different department of different university.  Oxford University 
IT: Above 70% in Fsc. and 70 % in NTS
Electronics: Above 70% in Fsc. and 60 % in NTS
Telecommunication Above 70% in Fsc. and 50 % in NTS
 MIT
IT: 70% - 60 % in Fsc. and 50 % in NTS
Chemical: 59% – 50 % in Fsc. and 50 % in NTS
Computer: Above 40% and below 50 % in Fsc. and 50 % in NTS*/

#include <iostream>
using namespace std;
int main(){
    int fsc_marks, nts_marks;
    cout<<"Enter the fsc marks: ";
    cin>>fsc_marks;
    cout<<"Enter the nts marks: ";
    cin>>nts_marks;
    cout<<"\nOxford University"<<endl;
    if(fsc_marks > 70 && nts_marks > 70){
        cout<<"IT Department"<<endl;
    }
    else if(fsc_marks > 70 && nts_marks >= 60){
        cout<<"Electronics Department"<<endl;
    }
    else if(fsc_marks >= 40 && nts_marks >= 40){
        cout<<"Telecommunication Department"<<endl;
    }
    else{
        cout<<"Not Eligible"<<endl;
    }
    cout<<"\nMIT University"<<endl;
    if(fsc_marks >= 60 && fsc_marks <= 70 && nts_marks >= 50){
        cout<<"IT Department"<<endl;
    }
    else if(fsc_marks > 50 && fsc_marks <= 59 && nts_marks >= 50){
        cout<<"Chemical Department"<<endl;
    }
    else if(fsc_marks >= 40 && nts_marks >= 40){
        cout<<"Computer Department"<<endl;
    }
    else{
        cout<<"Not Eligible"<<endl;
    }

    return 0;
}

