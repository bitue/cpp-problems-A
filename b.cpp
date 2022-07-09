#include<bits/stdc++.h>
using namespace std ;

void swap_arr(int *a, int n, int *co) {

    for(int i =0 ; i<n-1 ; i++){


        for(int j=i+1 ; j<n ; j++){
            if(*(a+i) > *(a+j)) {
                cout<<j<<" "<<endl;
                co[j]++;
                swap(*(a+i), *(a+j));
            }
        }

    }



}


void normal_sort(int *a, int n) {

    for(int i=0 ; i<n-1 ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(a[i] > a[j]){
                swap(a[i], a[j]);
            }
        }
    }
}

int main (){

   int arr []={1, 5 , 0, 2, 6, 3};
    int *co = new int[6]{0};

  swap_arr(arr, 6, co);

   for(int i=0 ; i<6 ; i++){
     cout<<arr[i]<<" " ;
   }

   cout << endl ;

   for(int i=0 ; i<6 ; i++){
      cout <<co[i]<<" ";
   }




}
