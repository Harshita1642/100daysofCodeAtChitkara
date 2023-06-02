// The most popular feature on snapchat is Snapchat Streak.
// A streak is maintained between two people if both of them send at least one snap to each other daily.
// If, on any day, either person forgets to send at least one snap, the streak breaks and the streak count is set to 
// 0
// 0.

// Chef and Chefina like maintaining their snapchat streak. You observed the snap count of both of them for 
// �
// N consecutive days.
// On the 
// �
// �
// ℎ
// i 
// th
//   day, Chef sent 
// �
// �
// A 
// i
// ​
//   snaps to Chefina while Chefina sent 
// �
// �
// B 
// i
// ​
//   snaps to Chef.

// Find the maximum streak count they achieved in those 
// �
// N days.
#include <iostream>
using namespace std;
int streaks(int a[],int b[],int n){
    int ans=0,i=0,maximum=-1;
    while(i<n){
        if(a[i]!=0 && b[i]!=0){
            ans++;
        }else{
            maximum=max(ans,maximum);
            ans=0;
        }
        i++;
    }
    maximum=max(ans,maximum);
    return maximum;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	    int n;
	    cin>>n;
	    int a[n],b[n];
	    for(int i=0 ; i<n ; i++){
	        cin>>a[i];
	    }
	    for(int i=0 ; i<n ; i++){
	        cin>>b[i];
	    }
	    cout<<streaks(a,b,n)<<endl;
	    t--;
	}
	return 0;
}
