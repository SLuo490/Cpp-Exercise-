/*
 Shi Tao Luo
 Defang Ip Address
 String Exercise
*/

#include <iostream>
using namespace std;

string defangIPaddr(string address) {
    string defangip = "";
    for (char c : address) {
        if (c == '.') {
            defangip += "[.]";
        }
        defangip += c;
    }
    return defangip;
}

int main() {
    string ip = "255.100.50.0";
    cout << defangIPaddr(ip) << endl;
}
