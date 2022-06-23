#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
// Bubble out the maximum element in the array to last position
// outer loop for n-1 passes
// inner loop for comparing adj elements & if not in right order -> swap
// best - O(n) , avg - O(n^2) , worst - O(n^2)
// space comp - O(1)
int main(){
    ll n,i,j,m;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n-1;i++){
        bool swapped = false ;
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                swapped = true;
            }
        }
        if(swapped==false){
            break;
        }
    }
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}