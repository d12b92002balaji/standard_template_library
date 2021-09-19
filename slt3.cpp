#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
using namespace std;

bool f(int x,int y)
{
    return x>y;
}
void vectordemo()
{

    vector<int> a={1,2,3,7};

	cout<<a[1]<<endl;

	bool present = binary_search(a.begin(),a.end(),3);
	cout<<present<<endl;
	bool presents=binary_search(a.begin(),a.end(),4);
	cout<<presents<<endl;


    int presention=binary_search(a.begin(),a.end(),100);
    a.push_back(108);
    a.push_back(100);
    a.push_back(105);
    a.push_back(103);
    a.push_back(102);

	sort(a.begin() ,a.end());
    vector<int>::iterator it=lower_bound(a.begin(), a.end(),100);//>=
    vector<int>::iterator it2=upper_bound(a.begin(), a.end(),100);//>
    cout<<*it<<" "<<*it2<<endl;
    cout<<*it2 - *it<<endl;//4

    /*sort(a.begin(),a.end(), f);
    vector<int>::iterator it3;
    for(it3=a.begin();it3!=a.end();it3++)
    {
        cout<<*it3<<" ";
    }*/
    for(int x:a)
    {
        x++;
        cout<<x<<endl;
    }
}
void setdemo()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(-1);
    s.insert(-10);

    for(int x :s)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    //-10 -1 1 2
    auto it =s.find(-1);
    if(it == s.end())
    {
        cout<<"not present\n";
    }
    else{
        cout<<"present\n";
        cout<<*it<<endl;
    }
    auto it2=s.lower_bound(-1);
    cout<<*it2<<endl;

    auto it3=s.upper_bound(3);
    if(it3 ==s.end())
    {
         cout<<"oops! sorry cant find something like that!\n";
    }

}

void mapdemo()
{
    map<int,int> a;
    a[1]=100;
    a[2]=-1;
    a[3]=200;
    a[4]=1;
    map<char,int> cnt;
    string x="rachit jain";
    for(char c:x)
    {
        cnt[c]++;
    }
    cout<<cnt['a']<<" "<<cnt['z']<<endl;

}
int main()
{

mapdemo();




	return 0;
}
