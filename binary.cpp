#include<bits/stdc++.h>
using namespace std ;




int binary_search_fun (int * a , int lb , int ub , int target) {

    if(lb > ub){
           // cout<<"Y"<<endl;
           cout<<"Nothing found"<<endl;
        return -1 ;
    }

    int mid = (ub + lb)/ 2 ;
    if(a[mid]== target){

        return mid ;
    }

    if(target > a[mid]){
        //  cout<<"Y"<<endl;
        lb = mid +1 ;
        cout<<"lb :"<<lb<<endl ;
         cout<<"ub :"<<ub<<endl ;



      return binary_search_fun(a, lb , ub , target);

    }
    if(target < a[mid]) {
         // cout<<"Y"<<endl;
        ub = mid-1 ;
     return binary_search_fun(a, lb , ub , target);
    }

}


int main (){

    int n ;
    int target ;

    cin>>n >> target ;

    int a[n];


    for(int i=0 ; i<n ; i++) cin>>a[i];

    sort(a, a+n);


    int lb =0 ;
    int ub = n-1 ;

   int res =  binary_search_fun(a, lb , ub , target) ;

   cout<<res<<endl;





}
