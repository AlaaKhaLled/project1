#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include <string>
#include "fcivector.h"
#include"courses.h"
using namespace std;
class student
{
     protected:
        int Sid;
        string Sname;
        string Sdepartment;
       fcivector<courses>cv;

    public:
        student(){
        int Sid=0;
        string Sname;
        string Sdepartment;
        };
    void printinfo();
     friend istream &operator>>( istream  &input, student &s );
     friend ostream &operator<<( ostream  &output, student &s);
     void operator =(student &s);
     bool operator==(student &s);
};

#endif // STUDENT_H
