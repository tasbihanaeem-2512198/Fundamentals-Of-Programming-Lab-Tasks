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
