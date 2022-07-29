#include<bits/stdc++.h>
using namespace std ;


// Binary Search algo
int binary_search(int *a , int lb , int ub , int target){
    if(lb <=ub) {
        int mid = (lb + ub) /2 ;

        if(a[mid]==target){
            cout<<"Got this at idx is "<<mid<<endl;
            return mid ;
        }
        if(target > a[mid]){
            lb = mid+1;
            binary_search(a ,lb , ub , target );
        }
        if(target < a[mid] ){
            ub = mid-1 ;
            binary_search(a ,lb , ub , target );

        }
    }
    return -1 ;

}

int main (){

    int n ;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    int lb =0 ;
    int ub = n-1;
    int target ;
    cout<<"target the value"<<endl;
    cin>>target ;

   int res = binary_search(arr, lb, ub , target);

   if(res !=-1){
        cout<<"pos :"<<res+1<<endl;
   }
   else {
        cout<<"Invalid"<<endl;
   }



}
