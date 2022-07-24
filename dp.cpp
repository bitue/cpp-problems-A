#include<bits/stdc++.h>
using namespace std ;

int main (){

    int n ;
    cin>>n ;
    int *ptr =NULL;

    ptr = new int[n];

    for(int i=0 ; i<n ; i++){
        cin>>ptr[i];
    }
    for(int i=0 ; i<n ; i++){
        cout<<*ptr<<endl;
        ptr ++;
    }


}
