#include<iostream>
using namespace std;
classs student
{
	
	int rollno;
	char name[30];
	static int count;
	public:
		
		void get()
		{
			count++;
			cout<<"enter rollno and name=";
			cin>>rollno>>name;
		}
		static void show()
		{
			cout<<"\n calling is = "<<count;
		}
};
int student::count=0;
main()
obj1.get();
obj1.get();
obj1.get();
obj1
