//types of pointer
//void pointer
#include<iostream>
using namespace std;
	main()
	{
		int a=10
		
	 
		
		float b=5.5;
		char c= 'a';
		void *p;
		p=&a;
		cout<<"value of= "<<*(int *)p<<endl;   //type casting
		p=&b;
		
		p=&c;
	}
	
