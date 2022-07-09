#include<bits/stdc++.h>
using namespace std ;


int main (){

    int n ;
    cin>>n ;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];

    }

    sort(arr, arr+n);
    reverse(arr, arr+n);
    int co =0 ;
    for(int i=0 ; i<n-1 ; i++){
        co = arr[i]-arr[i+1]+co;
    }

    cout<<co;




}
