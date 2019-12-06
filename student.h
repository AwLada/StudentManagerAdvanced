#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class student
{
        private:
                string first;
                string last;
                vector <double> grades;

        public:
                student();
                void setName (string firstName,string lastName);
                void addGrade(double grade);
                double getScore();
                string fullName();
};
#endif
