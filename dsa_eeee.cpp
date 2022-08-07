#include<bits/stdc++.h>
using namespace std ;


void update_pre_arr(int *a , int *b , int n ){

    int co =0 ;

    for(int i=0 ; i<n ; i++){
       a[i]=0;

    }
    for(int i=0 ; i<n ; i++){
        co+=b[i];
        a[i]= co ;

    }


}

void print_arr (int *a , int n ){

    for(int i=0 ;i<n ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;


}

int main (){

    int  t ;
    cin>>t;
    for(int i=0 ; i<t ; i++){
        cout<<"Case "<<i+1<<":"<<endl;
        int n , q ;
        cin>>n >>q ;
        int arr[n];

        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
        }
        // pre sum arr ;
        int co =0 ;
        int pre_sum [n] ={0};
        for(int i=0 ; i<n ; i++){
            co +=arr[i];
            pre_sum[i]= co ;

        }

        while(q--){

            int c ;
            cin>>c ;
            if(c == 1 ){
                int o ;
                cin>>o ;
                  cout<<arr[o]<<endl;
                arr[o]=0 ;
               // pre_sum[o] = pre_sum[o]-arr[o];
                update_pre_arr(pre_sum , arr, n);

        /*

                cout<<"print-arr"<<endl;
                print_arr(arr, n);

                cout<<"print-pre-arr"<<endl;
                print_arr(pre_sum, n);

*/
            }
            if(c ==2){
                int a, v ;
                cin>>a >>v ;
               // pre_sum[a]= pre_sum[a] +  v ;
                arr[a]+=v;
                update_pre_arr(pre_sum , arr, n);
                 /*

                cout<<"print-arr"<<endl;
                print_arr(arr, n);

                cout<<"print-pre-arr"<<endl;
                print_arr(pre_sum, n);

*/



            }
            if(c ==3 ){
                int f , l ;
                cin>>f>>l;
                if(f==0){
                cout<<pre_sum[l]<<endl ;

                }
                else {
                cout<<pre_sum[l]- pre_sum[f-1] <<endl;

                }
                  /*

                cout<<"print-arr"<<endl;
                print_arr(arr, n);

                cout<<"print-pre-arr"<<endl;
                print_arr(pre_sum, n);

*/
            }
        }
    }


}
