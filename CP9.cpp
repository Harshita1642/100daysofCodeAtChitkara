#include <iostream>
using namespace std;
int count_players(int arr[],int n,int k){
    int count=0;
    for(int i=0 ; i<n ; i++){
        if(arr[i]>k){
            count++;
        }
    }
    return count;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0 ; i<n ; i++){
	        cin>>arr[i];
	    }
	    cout<<count_players(arr,n,k)<<endl;
	    t--;
	}
	return 0;
}
