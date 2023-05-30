// Input
// The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows.
// First line will contain a single integer denoting n.
// Second line will contain n space separated integers where ith integer corresponds to the day dith as given in the problem.
// Output
// Print a single line corresponding to the answer of the problem.
// #incluInput
// The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows.
// First line will contain a single integer denoting n.
// Second line will contain n space separated integers where ith integer corresponds to the day dith as given in the problem.
// Output
// Print a single line corresponding to the answer of the problem.de <iostream>
using namespace std;
int frndship_test(int arr[],int n){
    int count=0;
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(arr[i]==arr[j]){
                arr[j]=-2;
            }
        }
    }
    for(int i=0 ; i<n ; i++){
        if(arr[i]!=-2){
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
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0 ; i<n ; i++){
	        cin>>arr[i];
	    }
	    cout<<frndship_test(arr,n)<<endl;
	    t--;
	}
	return 0;
}
