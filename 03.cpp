#include <iostream>
using namespace std;

int main() 
{
int arr[10],*p;
arr[0]=0;
arr[1]=1;
arr[2]=2;
arr[3]=3;
arr[4]=4;
arr[5]=5;
arr[6]=6;
arr[7]=7;
arr[8]=8;
arr[9]=9;
for(int i=0;i<10;i++)
{
	cout<<arr[i];
}
p=arr;
for(int i=0;i<10;i++)
{
	cout<<*p+i;
}

return 0;
}
