#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
// Quick sort: Select a pivot element. Then,
// All the elements before the pivot should be less than the pivot &
// all the elements after the pivot should be greater than the pivot.
// works on recursion. Use of two pointers to find the place of pivot
// best - O(nlogn) , avg - O(nlogn) , worst - O(n^2)
// // space comp - O(n) 
// below implementation using the last element as pivot.

void swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int a[],int p,int r){
    int i = p-1;
    int pivot = a[r];
    for(int j=p;j<=r-1;j++){
        if(a[j]<pivot){
            i+=1;
            swap(a[i],a[j]);
        }
    }
    i+=1;
    swap(a[i],a[r]);
    return i;
}

void Quicksort(int a[],int p,int r){
    if(p<r){
        int q = partition(a,p,r);
        Quicksort(a,p,q-1);
        Quicksort(a,q+1,r);
    }
}

int main(){
    int n,i,j,m;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    Quicksort(a,0,n-1);
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}