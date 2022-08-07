#include<bits/stdc++.h>
using namespace std ;


int binary_search_fun (int *a , int lb , int ub , int target) {

    while(lb<=ub){
        int mid = (lb + ub)/2 ;
        if(a[mid]== target) return mid + 1 ;
        else if(target > a[mid]) {
           lb = mid +1 ;
        }
        else {

           ub = mid-1 ;
        }
    }

    return lb ;


}


int main (){

    int n ;
    cin>>n ;
    int a[n];

    for(int i=0 ; i<n ; i++) cin>>a[i];

    for(int i=1 ; i<n ; i++){

        int key = a[i];

        int j=i-1 ;

        int pos = binary_search_fun(a , 0 , j, key);

      //  while(j>=0 && a[j]>key){
      //      a[j+1]=a[j];
      //      j--;
      //  }

      while(j>=pos){
            a[j+1] = a[j];
            j--;
      }
        a[j+1]=key ;
    }

    for(int i=0 ; i<n ; i++) cout<<a[i]<<" ";


}
