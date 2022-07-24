#include<bits/stdc++.h>
using namespace std ;


void insert_operation (int * a , int n , int pos , int val){

    for(int i=n-1 ; i>=pos; i--){
        a[i+1]= a[i] ;
    }
    a[pos]= val ;



}

int main (){

    int arr [10];
    int n , pos;
    cin>>n>>pos ;
    if(pos >n || pos <0) {
        cout<<"Invalid"<<endl;
        return 0;
    }



    for(int i =0 ; i<n ; i++){
        cin>>arr[i];
    }

    cout<<"tell the value :"<<endl;
    int val ;
    cin>>val ;

    insert_operation(arr, n , pos, val);
    for(int i=0 ; i<n+1 ; i++){
        cout<<arr[i]<<endl;
    }



    return 0;

}
