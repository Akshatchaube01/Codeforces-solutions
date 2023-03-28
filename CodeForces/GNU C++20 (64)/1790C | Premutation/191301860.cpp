//Problem C - Permutations
#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
int mostFrequent(int arr[], int n)
{
    sort(arr, arr + n);
    int max_count = 1, res = arr[0], curr_count = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1])
            curr_count++;
        else
            curr_count = 1;
        
        if (curr_count > max_count) {
            max_count = curr_count;
            res = arr[i - 1];
        }
    }
  
    return res;
}
void solve(){
    int n;
    cin>>n;
    int arr[n*(n-1)];
    int arr2[n];
    int arr3[n];
    for(int i=0;i<n*(n-1);i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        arr2[i]=arr[(n-1)*i];
        arr3[i]=arr[(n-1)*i];
    }
    int max=mostFrequent(arr3,n);
    cout<<max<<" ";
    int new_i=0;
    for(int i=0;i<n;i++){
        if(max!=arr2[i]){
            new_i=i;
        }
    }
    new_i*=(n-1);
    for(int i=0;i<n-1;i++){
        cout<<arr[new_i+i]<<" ";
    }
    cout<<endl;
}
#undef int
int main(){ 
    SPEED; 
    cout.precision(8); 
    cout << fixed; 
     int t;
     cin>>t;
     //t=1;
     while(t--){
         solve();
     }
    return 0; 
} 