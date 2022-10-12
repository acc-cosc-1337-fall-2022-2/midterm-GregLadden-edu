#include "question2.h"
#include<iostream>

using std::cout;
using std::cin;

bool test_config()
{
    return true;
}

double get_sales_commission(double sales)
{
    if(sales > 1500) {
        return sales * 0.08;
    } else if (sales > 999 ){
        return sales * 0.07;
    } else if (sales > 499) {
        return sales * 0.06;
    } else if (sales > 0) {
        return sales * 0.05;
    } else {
        return sales * 0;
    }
}

int run_menu(){
    int option = 0;

    cout<<"Do you want to continue? Type 1 for Yes or 2 for Now\n";
    cout<<"1) Yes\n";
    cout<<"2) No\n";
    cin>>option;

    return option;
}