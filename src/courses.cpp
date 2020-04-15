#include "courses.h"
#include<iostream>>
using namespace std;
/*courses::courses()
{
    //ctor
*/

istream &operator>>( istream  &input, courses &c ) {

    cout<<"course name:"<<endl;
    cin.clear();
    cin.ignore(10000,'\n');
    getline(input , c.coursename);

    cout<<"course code :"<<endl;
    input >>c.coursecode;

    cout<<"course grade:"<<endl;
    input >> c.coursegrade;

    cout<<"course point:"<<endl;
    input >> c.coursepoint;

    cout<<"course year:"<<endl;
    input >> c.courseyear;

    cout<<"course semester"<<endl;
    input>>c.coursesemester;


         return input;
      }

ostream &operator<<( ostream  &output, courses &c ) {

    output<<"course name:"<<c.coursename;
    output<<"course code:"<<c.coursecode;
    output<<"course grade:"<<c.coursegrade;
    output<<"course point:"<<c.coursepoint;
    output<<"course year:"<<c.courseyear;
    output<<"course semester:"<<c.coursesemester;

         return output;
      }
void courses::operator =(courses &c){
        coursename=c.coursename;
         coursecode=c.coursecode;
         coursegrade=c.coursegrade;
         coursepoint=c.coursepoint;
         courseyear=c.courseyear;
        coursesemester=c.coursesemester;

}
bool courses::operator==(courses &c){
if (  coursename==c.coursename&&coursecode==c.coursecode&&coursegrade==c.coursegrade&&coursepoint==c.coursepoint&&courseyear==c.courseyear&&coursesemester==c.coursesemester)
{
    return true;
}
else
{
    return false;
}

}

void courses::printcourseinfo(){
    cout<<"enter courseinfo"<<endl;
    cout<<"course name:"<<coursename<<endl;
    cout<<"course code:"<<coursecode<<endl;
    cout<<"course grade:"<<coursegrade<<endl;
    cout<<"course point:"<<coursepoint<<endl;
    cout<<"course year:"<<courseyear<<endl;
    cout<<"course semester:"<<coursesemester<<endl;

}

