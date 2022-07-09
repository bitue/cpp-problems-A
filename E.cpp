#include<bits/stdc++.h>
using namespace std ;

int main (){

    int x ;
    int co=0;
    cin>>x;
    for(int i=2 ;i<x ; i++){
        int temp =i ;
        while(temp%2 ==0) {
            co++;
            temp = temp/2;
            //cout<<i<<" <=i" <<temp<<"<=temp"<<co<<"<=co"<<endl;

        }
    }
    cout<<co<<endl;


}
