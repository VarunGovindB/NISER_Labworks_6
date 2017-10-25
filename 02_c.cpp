#include <iostream>
using namespace std;

int main() 
{
	int a=2,b=3;
	int *p;
	p=&b;
	b=*p;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<*p;
	
return 0;
}
