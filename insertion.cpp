#include<bits/stdc++.h>
using namespace std ;

void print_array (int * a , int n ) {

    cout<<endl;

    for(int i =0 ; i<n ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;


}

int main () {

    int n ;
    cin>>n ;
    int a [n];

    for(int i =0 ; i<n ; i++){
        cin>>a[i];
    }

      cout<<"before sort"<<endl;
    print_array(a , n);

    for(int i =1 ; i<n ; i++){
        int key = a[i];
        cout<<"iteration no : "<<i<< " start "<<endl;
        cout<<"Key :"<<key<<endl;

        int j = i-1 ;
        cout<<"Compare key with each element on the left of it until an element smaller than"<<endl;
        while(j>=0 && key < a[j]) {
            a[j+1] = a[j];
            cout<<"if found in while loop "<< "a[j+1] = a[j]";
            print_array(a, n);
            j-- ;

        }
        cout<<"after the while loop key value assigned its actual sorted place "<<endl;
        a[j+1]= key ;

        print_array(a, n);
        cout<<"iteration no : "<<i<< " end "<<endl;

    }

    cout<<"after sort "<<endl;
    print_array(a, n);







}
