#include<iostream>
using namespace std;

class base1{
	public:
	int a , b;
	base1(){
		cout <<"Enter two numbers:";
		cin>>a >>b;
	}	
};

class base2{
	public:
	int c , d;
	base2(){
		cout <<"Enter two numbers:";
		cin>>c >>d;
	}
};

class child:public base1 , public base2{
	public:
	child(){
		cout<<"The sum of the numbers is:"<<a+b+c+d<<endl;
	}	
};

int main()
{
	child c;
}