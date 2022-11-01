#include<iostream>
using namespace std;

int main()
{
    int option;

    cout<<"*********Shedule**********"<<endl;
    cout<<" Please Select in the form of 1 , 2"<<endl;
    cout<<"1.9th"<<endl;
    cout<<"2.10th"<<endl;
    cout<<"3.11th"<<endl;
    cout<<"4.12th"<<endl;
    cin>>option;

    switch(option)
    {
    case 1:
        cout<<" Shedule Class 9th "<<endl;
        cout<<"English 9:00 - 9:40"<<endl;
        cout<<"Math 9:40 - 10:20"<<endl;
        cout<<"Physics 10:20 - 11:00 "<<endl;
        cout<<" BREAK "<<endl;
        cout<<"Computer 11:20 - 12:00 "<<endl;
        cout<<"Biology 12:00 - 12:40 "<<endl;
        cout<<"Chemistry 12:40 - 1:20 "<<endl;
        break;
    case 2:
        cout<<" Shedule Class 10th "<<endl;
        cout<<"Math 9:00 - 9:40"<<endl;
        cout<<"Physics 9:40 - 10:20 "<<endl;
        cout<<"Biology 10:20 - 11:00 "<<endl;
        cout<<" BREAK "<<endl;
        cout<<"Chemistry 11:20 - 12:00"<<endl;
        cout<<"Computer 12:00 - 12:40"<<endl;
        cout<<"English 12:40 - 1:20 "<<endl;
        break;
    case 3:
        cout<<" Shedule Class 11th "<<endl;
        cout<<"Biology 9:00 - 9:40 "<<endl;
        cout<<"English 9:40 - 10:20 "<<endl;
        cout<<"Math 10:20 - 11:00 "<<endl;
        cout<<" BREAK "<<endl;
        cout<<"Physics 11:20 - 12:00"<<endl;
        cout<<"Chemistry 12:00 - 12:40 "<<endl;
        cout<<"Computer 12:40 - 1:20"<<endl;
        break;
    case 4:
        cout<<"Shedule Class 12th "<<endl;
        cout<<"Chemistry 9:000 - 9:40 "<<endl;
        cout<<"Biology 9:40 - 10:20 "<<endl;
        cout<<"Computer 10:20 - 11:00"<<endl;
        cout<< "BREAK" <<endl;
        cout<<"Physics 11:20 - 12:00 "<<endl;
        cout<<"Math 12:00 - 12:40 "<<endl;
        cout<<"English 12:40 - 1:20"<<endl;
        break;

    }
    return 0;
}
