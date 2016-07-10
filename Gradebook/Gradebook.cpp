#include <iostream>
#include <string.h>
#include "Gradebook.h"
using namespace std;

GradeBook::GradeBook ()
{
	courseName = "";
    instructorName = "";
}

void GradeBook::set (string name_course, string name_instructor)
{
    courseName = name_course;
    instructorName = name_instructor;
}

string GradeBook::getCourseName()
{
    return courseName;
}

string GradeBook::getInstructorName()
{
    return instructorName;
}

void GradeBook::displayMessage()
{
    cout<<"Welcome to the grade book for\n"<<getCourseName()<<"!"
            <<"\nThis course is presented by: "<<getInstructorName()<<endl;
}


