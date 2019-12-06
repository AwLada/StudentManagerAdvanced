#include <iostream>
#include <string>
#include "student.h"
#include <vector>

student::student()
{
    first = "";
    last = "";
    grades.push_back (0);

}

void student::setName(string firstName,string lastName)
{
        first = firstName;
        last = lastName;

}

string student::fullName()
{
        string full;
        string space = " ";
        full.append(first);
        full.append(space);
        full.append(last);
        return full;
}

void student::addGrade(double grade)
{
        if (grades[0] == 0)
        {
            grades.clear();
        }
    grades.push_back (grade);
}

double student::getScore()
{
        double total = 0;
        double Grade = 0;
        for (int i=0; i< (grades.size()); i++)
        {
            total = total + grades[i];
            Grade = total / i;
        }


        return Grade;
}
