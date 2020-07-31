/*
 Shi Tao Luo
 Balanced String
*/

#include <iostream>
#include <algorithm>

using namespace std;

int balancedStr (string str) {
    int result = 0, r = 0, l = 0;
    //loop through the string
    for (char i : str) {
        
        //if the char is r, increase r by 1
        if (i == 'R') {
            r++;
        }
        //if the char is l, increase l by 1
        else {
            l++;
        }
        
        //if the count of r and l is the same, increase result by 1 and set l and r to 0
        if (l == r) {
            result++;
            r = 0;
            l = 0;
        }
    }
    return result;
}

int main() {
    cout << balancedStr("RLRLRRLL") << endl;
}
