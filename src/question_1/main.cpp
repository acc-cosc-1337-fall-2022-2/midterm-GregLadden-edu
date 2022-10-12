#include "question1.h"
#include<iostream>

using std::cout;
using std::cin;

int main()
{
    int mass = 0;
    int velocity = 0;
    int user_choice;

    do {

        cout<<"Enter Mass number.\n";
        cin>>mass;
        cout<<"Enter Velocity number.\n";
        cin>>velocity;

        cout<<get_kinetic_energy(mass,velocity)<<"\n";

        user_choice = run_menu();

    }
    while(user_choice != 2);

    return 0;
}