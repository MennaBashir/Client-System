#include <iostream>
#include<string>
#include "Client.h"
#include"Project.h"
#include "TimeSheet.h"
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
using namespace std;
HANDLE cout_handle = GetStdHandle(STD_OUTPUT_HANDLE);
void change_color(int a)
{
    if(a==1)
        SetConsoleTextAttribute(cout_handle,5);
    if(a==2)
        SetConsoleTextAttribute(cout_handle,8);
    if(a==3)
        SetConsoleTextAttribute(cout_handle,4);
    if(a==4)
        SetConsoleTextAttribute(cout_handle,6);
}
int main()
{
    change_color(1);
    cout<<"                     |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
    cout<<"                     |                                      |"<<endl;
    cout<<"                     |\x03 CLIENT TIME MANGEMENT APPLICATION \x03 |"<<endl;
    cout<<"                     |                                      |"<<endl;
    cout<<"                     |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;

    int n;
    change_color(2);
    cout<<" Enter default number of clients : "<<endl;
    cin>>n;
    Client *op = new Client[n];
    Project *op1 = new Project[n];
    TimeSheet *op0 = new TimeSheet[n];
    int a=0;
    int b=0;
    int c=0;
    int x;
    do
    {
        system("cls");
        change_color(1);
        cout<<"                     |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
        cout<<"                     |                                      |"<<endl;
        cout<<"                     |\x03 CLIENT TIME MANGEMENT APPLICATION \x03 |"<<endl;
        cout<<"                     |                                      |"<<endl;
        cout<<"                     |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|"<<endl;
        change_color(2);
        cout<<"   Choose the number that suits what you want from the list"<<endl;
        cout<<"            ____\x03___________\x03____________\x03___"<<endl;
        change_color(3);
        cout<<"        [1] to add a new client."<<endl;
        cout<<"        [2] to add a new project."<<endl;
        cout<<"        [3] to add time sheet for a client on a project."<<endl;
        cout<<"        [4] to display time sheets for a client on a project."<<endl;
        cout<<"        [5] to display all clients."<<endl;
        cout<<"        [6] to display all projects."<<endl;
        cout<<"        [0] to exist the program."<<endl;
        cin>>x;
        switch(x)
        {
        case 1:
            change_color(2);
            op[a].set_client();
            a++;
            cout<<" Press Enter To Continue"<<endl;
            getch();
            break;
        case 2:
            change_color(2);
            op1[b].set_project();
            b++;
            cout<<" Press Enter To Continue"<<endl;
            getch();
            break;
        case 3:
            change_color(2);
            op0[c].set_startTime();
            op0[c].set_endTime();
            c++;
            cout<<" Press Enter To Continue"<<endl;
            getch();
            break;
        case 4:
            change_color(4);
            for(int i=0; i<c; i++)
            {
                cout<<"Duration project "<<i+1<<endl;
                op0[i].get_duration();
                cout<<"    ======== \x06 ========"<<endl;
            }
            cout<<" Press Enter To Continue"<<endl;
            getch();
            delete []op0;
            break;
        case 5:
            change_color(4);
            for(int i=0; i<a; i++)
            {
                cout<<"Information about client "<<i+1<<endl;
                op[i].get_client();
                cout<<"    ======== \x06 ========"<<endl;
            }
            cout<<"   Press Enter To Continue"<<endl;
            getch();
            delete []op;
            break;
        case 6:
            change_color(4);
            for(int i=0; i<b; i++)
            {
                cout<<"Information about project "<<i+1<<endl;
                op1[i].get_project();
                cout<<"    ======== \x06 ========"<<endl;
            }
            cout<<" Press Enter To Continue"<<endl;
            getch();
            delete []op1;
            break;
        case 0:
            cout<<"Good bye\x02";
            break;
        default:
            change_color(1);
            cout<<"Please enter a valid number : "<<endl;
            cout<<" Press Enter To Continue"<<endl;
            getch();
            break;
        }
    }
    while(x!=0);

    return 0;
}
