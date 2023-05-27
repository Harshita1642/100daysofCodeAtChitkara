#include<iostream>
using namespace std;
int possible_cooks(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    for(int i=0 ; i<n ; i++){
        cin>>b[i];
    }
    int temp=a[0],count=0;
    for(int i=0 ; i<n ; i++){
        if(b[i]<=temp){
          count++;  
        }
        temp=a[i+1]-a[i];
        if(i+1==n){
            break;
        }
        //cout<<temp<<" ";
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    while(t>0){
        cout<<possible_cooks()<<endl;
        t--;
    }
    return 0;
}
