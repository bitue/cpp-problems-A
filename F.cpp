#include<bits/stdc++.h>

using namespace std ;

int main (){

    int n ,k ;
    cin>>n>>k;
    int arr [n];
    for(int i=0 ; i<n ; i++){

        cin>>arr[i];

    }
    int co =0;
    sort(arr, arr+n);
    reverse(arr, arr+n);
    for(int i=0 ; i<k ; i++){
        co = co + arr[i];
    }

    cout<<co;



}
