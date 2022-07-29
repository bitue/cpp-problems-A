#include<bits/stdc++.h>
using namespace std ;


int main (){


    flag:
    cout<<"N : size of arr , numbers ................"<<endl;
    int n ;
    cin>>n ;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

    cout<<"Which value you want to search "<<endl ;
    int x ;
    cin>>x ;
    for(int i=0 ; i<n ; i++){
        if(arr[i]==x){
            cout<<"Found at Position :"<<i+1<<endl;
        }
    }
    cout<<"Not Found"<<endl;

    cout<<"Do you want to search continue ? Press : Y/N"<<endl;
    char ch ;
    cin>>ch;
    if(toupper(ch)=='Y'){
        goto flag ;
    }


}
