//
//  main.cpp
//  letter replacer 
//
//  Created by Shi Tao Luo on 7/8/20.
//  Copyright © 2020 Shi Tao Luo. All rights reserved.
//


#include <iostream>
using namespace std;

string replace(string sentence, char letter, char letter_to_replace) {
    //replace every letter the user specify with another letter
    for (int i = 0; i < sentence.length(); ++i) {
        if (sentence[i] == letter_to_replace) {
            sentence[i] = letter;
        }
    }
    //returns the new sentence
    return sentence;
}

int main() {
    string sentence;
    cout << "Enter a sentence/text: ";
    getline (cin, sentence);
    
    //ask user for a character/letter to replace
    char letter_to_replace;
    cout << "Enter a letter to replace: ";
    cin >> letter_to_replace;
    
    //ask user which letter to replace with
    char letter;
    cout << "Enter a letter you want to replace with: ";
    cin >> letter;
    
    //the translation
    cout << "Translation: " << endl;
    cout << replace(sentence, letter, letter_to_replace) << endl;
}
