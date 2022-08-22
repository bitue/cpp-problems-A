#include<bits/stdc++.h>
using namespace std ;

int main (){
    int n ;
    cin>>n ;
    int arr[n] ;
    for(int i=0 ; i<n ; i++) cin>>arr[i];
    int m ;
    cin>>m ;
    int a[m];
    for(int i=0 ; i<m ; i++) cin>>a[i];

    //find max 
    int max_value = arr[0];
    for(int i=1 ; i<n ; i++){
        max_value  = max(max_value , arr[i]);

    }
    for(int i =0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            if(arr[i] == a[j]){
                arr[i] = max_value +1 ;
            }
        }
    }

    for(int i =0 ; i<n ; i++){
        if(arr[i] < max_value +1) {
            cout<<arr[i]<<" ";

        }
    }

}