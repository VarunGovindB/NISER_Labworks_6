#include <iostream>
using namespace std;

int main() 
{
	int a=2,b;
	int *p;
	p=&a;
	b=*p;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<*p;
	
return 0;
}
