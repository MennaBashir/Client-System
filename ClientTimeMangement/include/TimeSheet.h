#ifndef TIMESHEET_H
#define TIMESHEET_H
#include<iostream>
using namespace std;
class TimeSheet
{
    private:
        int h1,m1,s1;
        int h2,m2,s2;
    public:
        void set_startTime();
        void set_endTime();
        void get_duration();
};

#endif
