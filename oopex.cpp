#include<bits/stdc++.h>
using namespace std ;

class Student {


public :
    string name ;
    char section ;
    int roll ;

   void  set_marks (int eng) {

       english_marks = eng ;




    }

    void set_password ( string pass ) {

        password = pass ;



    }

    int get_marks (){

        return english_marks ;


    }

    void update_marks (string p , int m ) {

        if(p == password) {
            english_marks = m ;
        }
        else {
            cout<<"error occurs here " ;
            return ;
        }


    }

    void find_student (int r , int m , string p ) {

        if(r != roll) {
            cout<<"error occurs " <<endl ;
        }
        else {
            update_marks(p, m) ;
            cout<<"updated !!"<<endl ;
        }


    }



protected :
   int english_marks ;
private :
    string password ;





};




int main (){

    int n ;
    cin>>n ;

    Student arr[n];

    for(int i =0 ; i<n ; i++){
      //  cout<<"name[i] : roll[i] :  section[i] : english_marks[i]  password[i] "<<endl;
        cin>>arr[i].name;
        cin>>arr[i].roll ;
        cin>>arr[i].section ;
        int marks ;
        cin>>marks ;
        arr[i].set_marks(marks);
        string pass ;
        cin>>pass ;
        arr[i].set_password(pass);
    }

    for(int i=0 ; i<n ; i++){
        cout<<arr[i].name <<endl;
        cout<<arr[i].roll <<endl;
        cout<<arr[i].section <<endl;
    }

    for(int i =0 ; i<n ; i++){
       cout<< arr[i].get_marks()<<endl ;
    }

   // arr[0].update_marks("abc", 100);

      for(int i =0 ; i<n ; i++){
       cout<< arr[i].get_marks()<<endl ;
    }


    arr[0].find_student(1, 45, "abc");
    cout<<arr[0].get_marks()<<endl;



}
