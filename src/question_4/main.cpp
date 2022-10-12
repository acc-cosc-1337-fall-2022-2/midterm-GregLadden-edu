#include<iostream>
#include "question4.h"

using std::cout;
using std::cin;

int main()
{
    int sold = 0;
    int user_choice;
    int points_earned;
    do {

        cout<<"Enter how many sold.\n";
        cin>>sold;
        points_earned = get_earned_points(sold);

        cout<<points_earned<<"\n";

        user_choice = run_menu();
    }
    while(user_choice != 2);

    return 0;
}