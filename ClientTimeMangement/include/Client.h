#ifndef CLIENT_H
#define CLIENT_H
#include<string>
#include<iostream>
using namespace std;
class Client
{
     private:
         string m_name;
         long m_phone;
         string m_email;
    public:
        void set_client();
        void get_client();

};

#endif
