#include<bits/stdc++.h>
using namespace std ;


void delete_array (int * a , int n , int pos){

    for(int i =pos ; i<n ; i++){
        a[i]= a[i+1];
    }


}

int main (){

    int arr[10] ;
    int n , pos ;
    cin>>n >>pos ;

    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

    delete_array(arr, n, pos);

    n--;
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<endl;
    }


}
