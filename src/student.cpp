#include "student.h"
#include<iostream>
#include"fcivector.h"
#include"courses.h"
using namespace std;
/*student::student()
{
    //ctor
}*/

courses c1;
fcivector<courses>cv;
istream &operator>>( istream  &input, student &s ) {

    cout<<"student name:"<<endl;
    cin.clear();
    cin.ignore(10000,'\n');
    getline(input,s.Sname);
    cout<<"student id :"<<endl;
    input >>s.Sid;
    cout<<" student department:"<<endl;
    input>>s.Sdepartment;
    input>>c1;
    cv.pushback(c1);


         return input;

      }

ostream &operator<<( ostream  &output, student &s) {

    output<<"student name:"<<s.Sname;
    output<<"student id:"<<s.Sid;
    output<<" student department:"<<s.Sdepartment;

         return output;
      }
void student::operator =(student &s)
{
   Sname=s.Sname;
   Sid=s.Sid;
   Sdepartment=s.Sdepartment;
}
bool student::operator==(student &s)
{
    if(Sname==s.Sname&&Sdepartment==s.Sdepartment&&Sid==s.Sid)
    {
        return true;
    }
    else{
        return false;
    }
}
void student::printinfo(){

    cout<<"student name:"<<this->Sname<<endl;
    cout<<"student id:"<<this->Sid<<endl;
    cout<<" student department:"<<this->Sdepartment<<endl;

}

