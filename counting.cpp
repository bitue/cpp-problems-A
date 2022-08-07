#include<bits/stdc++.h>
using namespace std ;


void print_arr(int * a , int n ){
    cout<<endl;
    for(int i=0 ; i<n ; i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;


}


int main (){


    int n ;
    cin>>n ;
    int a [n];
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }

    // counting sort implement here


    // find the max value from the array
    int max_value = a[0];
    for(int i=1 ; i<n ; i++){
        if(max_value < a[i]){
            max_value = a[i];
        }
    }

  //  cout<<max_value<<endl;

    // max_value +1 length array make  as well as init it to 0

    int curr[max_value+1] = {0};
    // make it a frequency array of this array

    for(int i =0 ; i<n ; i++){
        curr[a[i]]++ ;
    }

    //

    cout<<"Frequency calculation here "<<endl;
    for(int i =0 ; i<max_value +1 ; i++){
        cout<<curr[i]<<" ";
    }



    cout<<endl;



    // prefix sum of this frequent array

    int co = curr[0];

    for(int i=1 ; i<max_value+1 ; i++){
        co += curr[i];
        curr[i]= co ;
    }

      cout<<"prefix sum"<<endl;
     for(int i =0 ; i<max_value + 1  ; i++){
        cout<<curr[i]<<" ";
    }
    cout<<endl;





    // make a final array of which is the result
    int final_a [n]={0};
    // for loop from the end of the array
    for(int i = n-1 ; i>=0 ; i--){
        // before the cumalitive sum ;
        cout<<"before the cumalitive sum";
        print_arr(curr, max_value +1 );
        int k = a[i];
        curr[k]-- ;
        final_a[curr[k]] = a[i];
        cout<<"after the cumalitive sum";
          print_arr(curr, max_value +1 );
        // print the curr[max_value+1]  ;
        cout<<"Now Present condition of final_array";
          print_arr(final_a, n );
        // print the final_a[n]


    }

    // present the before arr
     cout<<endl;
     cout<<"before"<<endl;
    for(int i =0 ; i<n ; i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;

    // after sort the arr

    cout<<"after"<<endl;

      for(int i =0 ; i<n ; i++){
        cout<<final_a[i]<<" ";
    }
    cout<<endl;


}
