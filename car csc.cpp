//outside class defination
#include<iostream>
using namespace std;
class student
{
int rollno;
char name[30];
public:
void getdata();
void showdata();
};
void student::getdata()
{
cout<<"enter the values of rollno and name=";
cin>>rollno>>name;
}
void student::showdata()
{
cout<<"\n rollno is="<<rollno;
cout<<"n\ name is="<< name;
}
main()
{
class student obj;
obj.getdata();
obj.showdata();
}
