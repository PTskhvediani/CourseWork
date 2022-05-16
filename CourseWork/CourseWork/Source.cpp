#include <iostream>
#include <vector>
#include "CarConsole.h"
using namespace std;

int main()
{
    CarConsole cars;
    int option;
    bool exit = false;

    cout << "--------------- Hello --------------- \n";

    while (!exit) {
        cout << "---------- Choose an option ---------- \n";
        cout << "(1) Create Car \n";
        cout << "(2) Update Car \n";
        cout << "(3) Delete Car \n";
        cout << "(4) Print All Cars \n";
        cout << "(5) Exit \n";

        option = 0;
        cin >> option;

        cout << "\n--------------------------------------\n";

        switch (option) {
        case 1:
            cars.Create();
            break;
        case 2:
            cars.Update();
            break;
        case 3:
            cars.Delete();
            break;
        case 4:
            cars.PrintAll();
            break;
        case 5: exit = true; break;
        default: std::cout << "Invlaid Option\n"; break;
        }

        cout << "\n--------------------------------------\n";
    }
}