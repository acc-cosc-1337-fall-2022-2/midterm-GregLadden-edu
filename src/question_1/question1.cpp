#include "question1.h"
#include<iostream>
#include<cmath>

using std::cout;
using std::cin;

bool test_config()
{
    return true;
}

double get_kinetic_energy(double m,double v)
{

    return .5 * m * pow(v,2);
}

int run_menu(){
    int option = 0;

    cout<<"Do you want to continue? Type 1 for Yes or 2 for Now\n";
    cout<<"1) Yes\n";
    cout<<"2) No\n";
    cin>>option;

    return option;
}

