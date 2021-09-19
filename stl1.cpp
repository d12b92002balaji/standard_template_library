#include <algorithm>
#include <iostream>
using namespace std;
void show(int a[],int array_size)
{
	for(int i=0;i<array_size;++i)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	int a[]={12,1,5,3,8,10,4,23,78};
	int asize=sizeof(a)/sizeof(a[0]);
	cout<<"\n\n the array before the sort"<<endl;
	show(a,asize);
	sort(a,a+asize);
	cout<<"\n\n the array after the sort"<<endl;
	show(a,asize);
	cout<<endl;
	if(binary_search(a,a+10,2))
		cout<<"founded element"<<endl;
	else
		cout<<"not founded element"<<endl;
	return 0;
}

