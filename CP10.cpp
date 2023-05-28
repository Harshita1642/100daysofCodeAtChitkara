#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if(b>a){
	        a+=c;
	    }else{
	        b+=c;
	    }
	    if(b>a){
	        a+=d;
	    }else{
	        b+=d;
	    }
	    if(b>a){
	        cout<<'S'<<endl;
	    }else{
	        cout<<'N'<<endl;
	    }
	    t--;
	}
	return 0;
}
