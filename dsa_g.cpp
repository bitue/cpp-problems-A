#include<bits/stdc++.h>
using namespace std ;


int main (){

    int n ;
    cin>>n ;
    int arr[3]={0};
    int d =0 ;
    int i=0 ;
    while(n>0) {

        d = n%10 ;
        arr[i]= d ;

        n/=10;
        i++;
    }

    if(arr[0]==arr[2]){
        cout<<"Yes"<<endl;
    }
    else {
        cout<<"No"<<endl;
    }


}
