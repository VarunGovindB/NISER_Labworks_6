#include <iostream>
using namespace std;

int main() {
	char arr[10]={'v','a','r','u','n'},*ptr;
	ptr=arr;
	cout<<"Printing array using index method"<<endl;
	for(int i=0;arr[i]!=NULL;i++)
	cout<<arr[i];
	cout<<"\nPrinting array using pointer method"<<endl;
	for(int i=0;*(ptr+i)!=NULL;i++)
	cout<<*(ptr+i);
	return 0;
}
