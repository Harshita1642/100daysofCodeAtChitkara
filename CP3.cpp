#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t){
	    int a,b,investment_a,investment_b;
	    cin>>a>>b;
	    investment_a=a*10;
	    investment_b=b*5;
	    if(investment_a>investment_b){
	        cout<<"FIRST"<<endl;
	    }
	    else if(investment_a==investment_b){
	         cout<<"ANY"<<endl;
	    }else{
	        cout<<"SECOND"<<endl;
	    }
	    t--;
	}
	return 0;
}
