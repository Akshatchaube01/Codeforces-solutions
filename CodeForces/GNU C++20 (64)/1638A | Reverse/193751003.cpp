// Reverse Array - DIV 2 A 
#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1){
            int a;
            cin>>a;
            cout<<a;
        }
        else{
        int arr[n+1];
        // taking input
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        int l=0,r=0;
        int check = true;
        // getting l and r
        for(int i=1;i<=n;i++){
            if(arr[i]!=i && check){ // misplaced element
                l=i;
                check = false;
            }
            if(!check && arr[i] == l){// location
                r = i;
            }
        }
        // reversing from l to r
        while(l<=r){
            int temp = arr[l];
            arr[l] = arr[r];
            arr[r] =temp;
            l++;
            r--;
        }
        // final printing
        for(int i=1;i<=n;i++){ 
            cout<<arr[i]<<" ";
        }
        }
        cout<<"\n";
    }
    return 0;
}