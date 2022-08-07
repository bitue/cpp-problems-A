#include<bits/stdc++.h>
using namespace std ;


int main (){

    int n ;
    cin>>n ;
    int a [n];
       for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }

    int co =0 ;

    bool flag = false ;

      for(int i=0 ; i<n-1 ; i++){
          flag = false ;
        for(int j=0 ; j<n-1-i ; j++){

            if(a[j+1]< a[j]){
                swap(a[j], a[j+1]);
                flag = true ;
               // cout<<"Swap done"<<endl;
            }
            co++;

        }
      if(!flag) break ;

    }

       for(int i=0 ; i<n ; i++){
        cout<<a[i]<<" ";

    }

    cout<<co<<endl;











}
