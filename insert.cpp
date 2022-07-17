#include<bits/stdc++.h>

using namespace std ;

void insert_func (int * a , int n , int pos , int val){

    for(int i=n-2 ; i >=pos ; i--){

        a[i+1]= a[i];
    }

    a[pos]= val ;




}

int main (){

    int arr [9]= {1, 2, 3, 4, 5, 6, 7, 8, 0};
    int val ,pos ;
    cin>>val>>pos;


    insert_func(arr, 9, pos , val);

    for(int i=0 ; i<9 ; i++){

        cout<<arr[i]<<" ";

    }







}
