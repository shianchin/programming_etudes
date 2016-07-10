#include <iostream>
#include <string.h>
#include "Gradebook.h"

using namespace std;

int main()
{
    string nameOfCourse = ""; 
	string nameOfInstructor = "";
	
	GradeBook * GradeBookptr;
    GradeBookptr = new GradeBook();
    
    cout<<"Please enter the course name: "<<endl;
    getline (cin, nameOfCourse);
    
    cout<<"gradeBook instructor name is: "<<endl;
    getline (cin, nameOfInstructor);
    
    GradeBookptr->set (nameOfCourse, nameOfInstructor);
    
    cout<<endl;
    GradeBookptr->displayMessage();
    
	delete GradeBookptr;
        
    system("PAUSE");
    return 0;
}
