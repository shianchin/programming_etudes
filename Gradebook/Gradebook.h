#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <string.h>
using namespace std;

class GradeBook
{
public:
    GradeBook ();
    void set (string name_course, string name_instructor);
    string getCourseName();
    string getInstructorName();
    void displayMessage();
    
private:
    string courseName;
	string instructorName;
};

#endif
