#include<bits/stdc++.h>
using namespace std ;

int main () {

    int n ;
    cin>>n ;
    int arr [n];
    for(int i =0 ; i<n ; i++){
        cin>>arr[i];
    }

    for(int i=1 ; i<n ; i++){
       int key = arr[i];

       for(int j=i ; j>0 ; j--){

            if(arr[j]< arr[j-1]){
                swap(arr[j], arr[j-1]);
            }
       }


    }

    cout<<"After sort"<<endl;

    for(int i =0 ; i<n ; i++){
        cout<<arr[i] <<" ";
    }




}
