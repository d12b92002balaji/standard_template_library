#include <iostream>
#include <string>
#include <utility>
using namespace std;
int main()
{
	pair<string ,int> pair1;
	pair<string,int> pair2(".com",2);
	pair1=make_pair("greeks",1);
	pair<string,int> pair3;
	pair3.first="dheepan";
	pair3.second=3;
	cout<<pair1.first;
	cout<<pair1.second;cout<<endl;
	cout<<pair2.first;
	cout<<pair2.second;cout<<endl;
	cout<<pair3.first;
	cout<<pair3.second;cout<<endl;
	return 0;
}
