// Input
// The first line of the input contains a single integer 
// �
// T denoting the number of test cases. The description of 
// �
// T test cases follows.
// The first and only line of each test case contains two space-separated integers 
// �
// A and 
// �
// B.
// Output
// For each test case, print a single line containing one integer — the number of matches needed to write the result (
// �
// +
// �
// A+B).
#include <iostream>
using namespace std;
int no_of_matches(int param){
    int digit,count=0;
    while(param>0){
        digit=param%10;
        if(digit==0 || digit==6 || digit==9){
            count+=6;
        }else if(digit==1){
            count+=2;
        }else if(digit==2 || digit==3 || digit==5){
            count+=5;
        }else if(digit==4){
            count+=4;
        }else if(digit==7){
            count+=3;
        }else if(digit==8){
            count+=7;
        }
        param=param/10;
    }
    return count;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	    int a,b;
	    cin>>a>>b;
	    cout<<no_of_matches(a+b)<<endl;
	    t--;
	}
	return 0;
}
