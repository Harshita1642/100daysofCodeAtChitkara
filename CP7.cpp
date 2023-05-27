#include <iostream>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	    int t1,t2,r1,r2;
	    cin>>t1>>t2>>r1>>r2;
	    float k1,k2;
	    k1=(pow(t1,2))/(pow(r1,3));
	    k2=(pow(t2,2))/(pow(r2,3));
	    if(k1==k2){
	        cout<<"YES"<<endl;
	    }else if(k1!=k2){
	        cout<<"NO"<<endl;
	    }
	    t--;
	}
	return 0;
}
