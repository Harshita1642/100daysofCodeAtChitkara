// https://www.codechef.com/problems/HIRETEST
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	    int n,m;
	    cin>>n>>m;
	    int x,y;
	    cin>>x>>y;
	    char arr[n][m];
	    for(int i=0; i<n ;i++){
	        for(int j=0 ; j<m ; j++){
	            cin>>arr[i][j];
	        }
	    }
	    for(int i=0; i<n ;i++){
	        int count_p=0,count_f=0;
	        for(int j=0 ; j<m ; j++){
	            if(arr[i][j]=='P'){
	                count_p++;
	            }else if(arr[i][j]=='F'){
	                count_f++;
	            }
	        }
	        if((count_f>=x) || (count_p>=y && count_f==x-1)){
    	        cout<<"1";
    	    }else{
    	        cout<<"0";
    	    }
	    }
	    cout<<endl;
	    t--;
	}
	return 0;
}
