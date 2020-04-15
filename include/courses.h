#ifndef COURSES_H
#define COURSES_H
#include <string>
using namespace std;

class courses
{   protected:
        string coursename;
        string coursecode;
        char coursegrade;
        float coursepoint;
        int courseyear;
        int coursesemester;

    public:
        courses(){
          string coursename;
        string coursecode;
        char coursegrade;
        float coursepoint=0;
        int courseyear=0;
        int coursesemester=0;

        };
        void printcourseinfo();
         friend istream &operator>>( istream  &input, courses &c );
         friend ostream &operator<<( ostream  &output, courses &c);
         void operator =(courses &c);
         bool operator==(courses &c);
};

#endif // COURSES_H
