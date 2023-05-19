#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	    int a,b;
	    cin>>a>>b;
	    if(a<=b){
	        cout<<a<<endl;
	    }else{
	        cout<<b<<endl;
	    }
	    t--;
	}
	return 0;
}
