//
//  Student.h
//  Student Registration
//
//  Created by Shi Tao Luo on 7/7/20.
//  Copyright © 2020 Shi Tao Luo. All rights reserved.
//

#include <iostream>
using namespace std;

#ifndef Student_h
#define Student_h

class Student {
private:
    //Student Infographics
    string First_name;
    string Last_name;
    string Date_of_Birth;
    string grade_level;
    string school_name;
    int age;
    int graduation_year;
    double GPA;

public:
    //constructor
    Student() {};

    //initalizing the constructor
    Student(string First_name, string Last_name, string Date_of_Birth, string grade_level, string school_name, int age, int graduation_year, double GPA)
    {
        this->First_name = First_name;
        this->Last_name = Last_name;
        this->Date_of_Birth = Date_of_Birth;
        this->grade_level = grade_level;
        this->school_name = school_name;
        this->age = age;
        this->graduation_year = graduation_year;
        this->GPA = GPA;
    }

    //get student info
    string get_f_name () {
        return First_name;
    }
    string get_l_name () {
        return Last_name;
    }
    string get_DOB () {
        return Date_of_Birth;
    }
    string get_grade_level() {
        return grade_level;
    }
    string get_school_name() {
        return school_name;
    }
    int get_age () {
        return age;
    }
    int get_grad_year() {
        return graduation_year;
    }
    double get_GPA() {
        return GPA;
    }

    //Set Student Info
    void set_first_name (string input_First_Name) {
        First_name = input_First_Name;
    }
    void set_last_name (string input_last_name) {
        Last_name = input_last_name;
    }
    void set_DOB (string input_DOB) {
        Date_of_Birth = input_DOB;
    }
    void set_grade_level(string input_grade) {
        grade_level = input_grade;
    }
    void set_age(int input_age) {
        age = input_age;
    }
    void set_grad_year (int input_grad_year) {
        graduation_year = input_grad_year;
    }
    void set_GPA (double input_GPA) {
        GPA = input_GPA;
    }
    void set_school_name(string input_school) {
        school_name = input_school;
    }

    //Show Student Profile
    void view_profile() {
        cout << "Student First and Last Name: " << get_f_name() << " " <<get_l_name() << endl;
        cout << "Student Date of Birth: " << get_DOB() << endl;
        cout << "Student Age: " << get_age() << endl;
        cout << "Student School: " << get_school_name() << endl;
        cout << "Student Grade: " << get_grade_level() << endl;
        cout << "Student Graduation Year: " << get_grad_year() << endl;
        cout << "Student GPA: " << get_GPA() << endl;
    }
};


#endif /* Student_h */
