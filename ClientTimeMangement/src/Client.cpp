#include "Client.h"
void Client::set_client()
{
    cout<<"Enter Client Data by Using his Name, his Phone and his Email_Address : "<<endl;
    cin>>m_name;
    cin>>m_phone;
    cin>>m_email;
}
void Client::get_client()
{
    cout<<"     Name : "<<m_name<<endl;
    cout<<"     Phone : "<<m_phone<<endl;
    cout<<"     Email : "<<m_email<<endl;


}
