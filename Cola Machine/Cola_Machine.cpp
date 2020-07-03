/*
Shi Tao Luo
July 3 2020
 
This program allows the user to choose (1-5) a drink from the a list of drinks in a machine.
*/


#include <iostream>
using namespace std;


int main() {
    
    //list the choices
    cout << "Choices: " << endl;
    cout << "1: Coke" << endl;
    cout << "2: Water" << endl;
    cout << "3: Sprite" << endl;
    cout << "4: Pepsi" << endl;
    cout << "5: Gatorade" << endl;

    int choices;
    cout << "Enter a number: ";
    cin >> choices;
    
    
    //print out the choices based on what user enter
    switch (choices) {
        case 1:
            cout << "Coke" << endl;
            break;
        case 2:
            cout << "Water" << endl;
            break;
        case 3:
            cout << "Sprite" << endl;
            break;
        case 4:
            cout << "Pepsi" << endl;
            break;
        case 5:
            cout << "Gatorade" << endl;
    }
    
    
    //edge cases:
    /*
    if choices is other besides 1-5
    print error
     */
    if (choices <= 0 || choices >= 6) {
        cout << "Error" << endl;
    }
    
    return 0;
}

