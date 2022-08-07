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

   for(int i=0 ; i<n/2 ; i++){
      if(arr[i]!=arr[n-1]) {
        cout<<"No"<<endl;
      }
   }
   cout<<"Yes"<<endl;


}
