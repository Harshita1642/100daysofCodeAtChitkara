//Broken Telephone problem codechef https://www.codechef.com/problems/BROKPHON
#include <iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0 ; i<n ; i++){
	        cin>>arr[i];
	    }
	    int count=0;
		int temp=arr[0];
		for(int i=0;i<n-1;i++)
		{
			if((arr[i]!=temp)||(arr[i]!=arr[i+1]))
			{
			   count++; 
			}
			
			temp=arr[i];
		}
		if(arr[n-1]!=temp)
		count++;
		cout<<count<<endl;
	    t--;
	}
	return 0;
}
