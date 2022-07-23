#include<bits/stdc++.h>
using namespace std ;

class Restaurant {
public :
    int food_items_codes[12];
    string food_items_names[12];
    int food_items_prices[12];
    int tax ;

    Restaurant (int tax) {

        this->tax = tax ;

    }

    void display_board (){
        cout<<"item code\t\titem name \t\t item price :"<<endl;
        for(int i=0 ; i<12 ; i++) {
        cout<<this->food_items_codes[i]<<" \t\t "<<this->food_items_names[i]<<" \t\t"<<this->food_items_prices[i]<<endl;
        }


    }

    // get the value of tax
    int get_tax_value(){
        return this->tax ;

    }


};



// Restaurant open fun

Restaurant * open_restaurant (){

    Restaurant * res = new Restaurant(0);

    return res ;


}

// display items board

void display_board (Restaurant * res_f) {

    res_f->display_board();


}

// take input for table fun

bool check_code (Restaurant *res , int code ){

    for(int i=0 ; i<12 ; i++){ // need 12 loop
        if(res->food_items_codes[i]==code) {
            return true ;
        }
    }

    return false;


}

void take_input_table(Restaurant *res , int *codes , int * qty, int items) {

    for(int i =0 ; i<items ; i++){
        cout<<"Enter the Item"<<i+1<<" code :"<<endl;
        cin>>codes[i];

        while(!check_code(res, codes[i])) {

            cout<<"Your Food code is invalid ...need"<<endl;
            cout<<"Enter the Item "<<i+1<<" code Again:"<<endl;
            cin>>codes[i];

        }

        cout<<"Enter the Item "<<i+1<<" Quantity :"<<endl;
        cin>>qty[i];


    }




}

void code_to_price_array (Restaurant * res, int *codes , int *prices, int items, string * foods ) {




    for(int i=0 ; i<items ; i++){
        for(int j =0 ; j<12 ; j++){ // need 12
            if(res->food_items_codes[j]== codes[i]){
                prices[i]= res->food_items_prices[j];
                foods[i]= res->food_items_names[j];
            }
        }
    }





}

void bill_function_final (Restaurant * res , int *prices , int *qty , int *codes , int items , int table_no , string *foods ) {

    float bill =0 ;
    float tax = 0;

    cout << "_________________________________________________________________________________" << endl;
    cout<<"FINAL BILL OF Table "<<table_no<<endl;


    //cout<<"Item code :\t\t Item Name :\t\t Item Price :\t\t item Quantity \t\t Total price :"<<endl;
     cout << "Item Code\tItem Name\t\tItem Price\tItem Quantity\tTotal Price" << endl;
    for(int i =0 ; i<items ; i++){
        bill+=prices[i]*qty[i] ;

    cout<<codes[i]<<"\t\t"<<foods[i]<<"\t"<<prices[i]<<" \t\t "<<qty[i]<<" \t\t"<<prices[i]*qty[i]<<endl;
    // cout << code << "\t\t" << name << "\t" << price << "\t\t" << quantity << "\t\t" << total << endl;
    }

    tax = bill * 0.05 ;
    res->tax = res->tax + tax ;
    cout<<"tax :(5% tax ) \t\t\t\t\t\t\t "<<tax<<endl ;
    cout<<"----------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<" Total bill : (Included tax ) \t\t\t\t\t\t\t"<<bill + tax<<endl;



}

int main (){

    Restaurant *res = open_restaurant();


    int n ;
    cin>>n ;
    for(int i=0 ; i<n ; i++){

        cin>>res->food_items_codes[i];

        cin.ignore();


        getline(cin, res->food_items_names[i]);
        //cin>>res->food_items_names[i];

        cin>>res->food_items_prices[i];

    }

    while(true) {

        display_board(res);
        int table_num , items  ;

        cout<<"Enter Table No :"<<endl;
        cin>>table_num ;
        cout<<"Enter The Numbers of Items :"<<endl;
        cin>>items;

        int food_codes[items], food_qty[items];

        // take input function

        take_input_table(res, food_codes, food_qty, items);

        // make price array here

        int prices[items];
        string food_names[items];

        //make price array input accordingly to the fullfil code array
        code_to_price_array(res, food_codes, prices, items, food_names);


        // need to bill Function
        bill_function_final (res, prices , food_qty, food_codes, items, table_num, food_names);

    // cout<<"tax value  now:::::::::::::::::: "<<res->tax<<endl;


    }




}
