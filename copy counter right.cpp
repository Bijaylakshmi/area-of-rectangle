//copy constrctor
#include<iostream>
using namespace std;
class counter
{
	int c;
	public:
		counter();   //default constructor
		counter(int a)  //parameterized constructor
		{
			c=a;
		}
		counter(counter &ob)   //copy constructor
		{
			cout<<"copy constructor called";
			c=ob.c;
		}
		void show()
		{
			cout<<c<<endl;
		}
	};
	main()
	{
		class counter obj(5);
		obj.show();  //5
		class counter obj2(obj);
		obj2.show();  //5
	}
