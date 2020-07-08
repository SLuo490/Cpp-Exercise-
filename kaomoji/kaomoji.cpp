//
//  main.cpp
//  kaomoji
//
//  Created by Shi Tao Luo on 7/8/20.
//  Copyright © 2020 Shi Tao Luo. All rights reserved.
//


#include <iostream>
using namespace std;

string kaomoji(string sentence) {
    //replace every letter ("l" and "r") with "w"
    for (int i = 0; i < sentence.length(); ++i) {
        if (sentence[i] == 'l' || sentence[i] == 'r') {
            sentence[i] = 'w';
        }
    }
    
    //returns the new sentence
    return sentence;
}

int main() {
    string sentence;
    cout << "Enter a sentence/text: ";
    getline (cin, sentence);
    
    cout << "Translation: " << endl;
    cout << kaomoji (sentence) << endl;
}
