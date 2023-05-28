#include <iostream>
using namespace std;
int count_4(int num){
    int d=0,count=0;
    while(num>0){
        d=num%10;
        if(d==4){
            count++;
        }
        num=num/10;
    }
    return count;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	    int num;
	    cin>>num;
	   cout<< count_4(num)<<endl;
	    t--;
	}
	return 0;
}
