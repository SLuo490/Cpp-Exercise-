//
//  Student Registration
//
//  Created by Shi Tao Luo on 7/4/20.
//  Copyright © 2020 Shi Tao Luo. All rights reserved.
//

#include <iostream>
#include "Student.h"
using namespace std;

int main() {
    
    Student a;
    
    //student's first and last name
    string first_name;
    cout << "Enter first name: ";
    getline(cin, first_name);
    a.set_first_name(first_name);
    
    string last_name;
    cout << "Enter last name: ";
    getline(cin, last_name);
    a.set_last_name(last_name);
    
    //Student Date of Birth
    string Date_of_Birth;
    cout << "Enter Birthday(Month/Day/Year): ";
    getline(cin, Date_of_Birth);
    a.set_DOB(Date_of_Birth);
    
    //Student Age
    int Age;
    cout << "Enter current age: ";
    cin >> Age;
    a.set_age(Age);
        
    //school name
    string School_name;
    cout << "Enter School Name: ";
    cin >> ws;
    getline(cin,School_name);
    a.set_school_name(School_name);
    
    //Student Grade
    string Grade;
    cout << "Enter current grade level: ";
    cin >> Grade;
    a.set_grade_level(Grade);
    
    //Student Graduation Year
    int grad_year;
    cout << "Enter year of graduation: ";
    cin >> grad_year;
    a.set_grad_year(grad_year);
    
    //Student GPA:
    double gpa;
    cout << "Enter GPA: ";
    cin >> gpa;
    a.set_GPA(gpa);
    
    cout << endl;
    
    //view student profile
    cout << "----------------" << endl;
    cout << "Student Profile: " << endl;
    cout << "----------------" << endl;
    a.view_profile();

    cout << endl;
    return 0;
}
