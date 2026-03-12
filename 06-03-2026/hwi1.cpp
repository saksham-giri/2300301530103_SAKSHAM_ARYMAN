#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q,x,y,l,r;
    
    cout<<"input n: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"input elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"input q: ";
    cin>>q;
    for(int i=0;i<q;i++){
        cout<<"input l,r,x,y: ";
        cin>>l>>r>>x>>y;

        for(int k=0;k<=r-l;k++){
            arr[l+k]=x+k*y;
        }
        
        
    }
    int sum=0;
    for(int m=0;m<n;m++){
            sum+=arr[m];
        }
        cout<<sum;
    return 0;
}