#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,temperature;
	cin>>t;
	while(t){
	    cin>>temperature;
	    if(temperature>98){
	        cout<<"Yes"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
	    t--;
	}
	return 0;
}
