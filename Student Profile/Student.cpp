//
//  Student Registration
//
//  Created by Shi Tao Luo on 7/4/20.
//  Copyright © 2020 Shi Tao Luo. All rights reserved.
//

#include <iostream>
using namespace std;

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
    :First_name(First_name), Last_name(Last_name), Date_of_Birth(Date_of_Birth), grade_level(grade_level), school_name(school_name), age(age), graduation_year(graduation_year), GPA (GPA)
    {}

    //get student info
    string get_f_name ();
    string get_l_name ();
    string get_DOB ();
    string get_grade_level();
    string get_school_name();
    int get_age ();
    int get_grad_year();
    double get_GPA();

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
    void view_profile();
};

//get student info
string Student:: get_l_name () {
    return Last_name;
}
string Student:: get_DOB () {
    return Date_of_Birth;
}
string Student:: get_grade_level() {
    return grade_level;
}
int Student:: get_age () {
    return age;
}
int Student:: get_grad_year() {
    return graduation_year;
}
string Student::get_f_name() {
    return First_name;
}
double Student:: get_GPA() {
    return GPA;
}
string Student:: get_school_name() {
    return school_name;
}

//view student profile
void Student::view_profile() {
    cout << "Student First and Last Name: " << get_f_name() << " " <<get_l_name() << endl;
    cout << "Student Date of Birth: " << get_DOB() << endl;
    cout << "Student Age: " << get_age() << endl;
    cout << "Student School: " << get_school_name() << endl;
    cout << "Student Grade: " << get_grade_level() << endl;
    cout << "Student Graduation Year: " << get_grad_year() << endl;
    cout << "Student GPA: " << get_GPA() << endl;
}


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
