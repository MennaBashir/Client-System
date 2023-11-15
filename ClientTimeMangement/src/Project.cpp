#include"Project.h"
void Project::set_project()
{
    cout<<"Record information about a Project \" Name,Recipe and Deadline for delivery \" "<<endl;
    cin>>m_name;
    cin>>m_description;
    cin>>m_day>>m_month>>m_year;
}
void Project::get_project()
{
    cout<<"      Name project : "<<m_name<<endl;
    cout<<"      Description : "<<m_description<<endl;
    cout<<"      Deadline for delivery : "<<m_day<<"/"<<m_month<<"/"<<m_year<<endl;

}
