#include<iostream>
#include "question2.h"

using std::cout;
using std:: cin;

int main()
{
    double sales = 0;
    int user_choice;
    double sales_commission;
    do {

        cout<<"Enter Sales amount.\n";
        cin>>sales;
        sales_commission = get_sales_commission(sales);

        cout<<"Sales of $"<< sales<<" yields a commission of $"<< sales_commission<<"\n";

        user_choice = run_menu();

    }
    while(user_choice != 2);


    return 0;
}