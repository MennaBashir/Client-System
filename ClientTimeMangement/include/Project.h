#ifndef PROJECT_H
#define PROJECT_H
#include<string>
#include<iostream>
using namespace std;

class Project
{
    private:
        string m_name;
        string m_description;
        int m_day,m_month,m_year;
        public:
            void set_project();
            void get_project();

};

#endif
