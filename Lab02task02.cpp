//Complete the number sequence for 20 terms total: 1, 4, 9, 16….
#include <iostream>
using namespace std;
int main(){
	for(int i=1;i<=20;i++){
		int sequence;
		sequence=i*i;
		cout<<sequence<<endl;
	}
	return 0;
}