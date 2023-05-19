#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	    int x,y;
	    cin>>x>>y;
	    if(x>10*y){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	    t--;
	}
	return 0;
}
