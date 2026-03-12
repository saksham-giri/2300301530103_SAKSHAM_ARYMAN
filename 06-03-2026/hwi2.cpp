#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cout<<"enter number of integers: ";
    cin>>n;
    cout<<"enter k: ";
    cin>>k;
    int currSum=0,maxSum=INT_MIN,l=0;
    unordered_map<int,int> freq;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int r=0;r<n;r++){
        currSum+=arr[r];
        
        freq[arr[r]]++;
        while(freq.size()>k){
            freq[arr[l]]--;
            currSum-=arr[l];
            if(freq[arr[l]]==0) freq.erase(arr[l]);
            l++;
        }
        
        maxSum=max(maxSum,currSum);
    }
    cout<<max(maxSum,0);
    return 0;
}