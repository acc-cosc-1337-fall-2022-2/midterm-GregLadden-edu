#include<iostream>

using std::cout;
using std::cin;

bool test_config()
{
    return true;
}

int get_earned_points(int sold)
{
    if(sold > 15) {
        return sold * 15;
    } else if (sold > 10) {
        return sold * 10;
    } else if (sold > 5) {
        return sold * 5;
    } else if (sold > 1) {
        return sold * 1;
    } else {
        return sold * 0;
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