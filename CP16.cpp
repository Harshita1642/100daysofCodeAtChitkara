//Two Rooks problem of codechef : https://www.codechef.com/problems/TWOROOKS
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	    int x1,y1,x2,y2;
	    cin>>x1>>y1>>x2>>y2;
	    if(x1==x2 || y1==y2){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	    t--;
	}
	return 0;
}
