#include "TimeSheet.h"
#include<cmath>
void TimeSheet::set_startTime()
{
    cout<<" Enter project start time : "<<endl;
    cin>>h1>>m1>>s1;

}
void TimeSheet::set_endTime()
{
    cout<<" Enter project end time : "<<endl;
    cin>>h2>>m2>>s2;

}
void TimeSheet::get_duration()
{
    int x=abs(h2-h1);
    int y=abs(m2-m1);
    int z=abs(s2-s1);
    while(y>60)
    {
        x++;
        y=y-60;
    }
    while(z>60)
    {
        y++;
        z=z-60;
    }
    cout<<" Project duration : "<<x<<"h:"<<y<<"m:"<<z<<"s"<<endl;

}
