#include <iostream>
using namespace std;

int main() 
{
int a=1,*l;
float b=2,*m;
char c=3,*n;
double d=4,*o;
l=&a;
m=&b;
n=&c;
cout<<sizeof(a)<<endl;
cout<<sizeof(b)<<endl;
cout<<sizeof(c)<<endl;
cout<<sizeof(d)<<endl;
cout<<sizeof(l)<<endl;
cout<<sizeof(m)<<endl;
cout<<sizeof(n)<<endl;
cout<<sizeof(o)<<endl;
return 0;
}
