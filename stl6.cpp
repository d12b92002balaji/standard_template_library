#include<iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int>d;
    d.push_back(1);
    d.push_front(2);
    d.push_front(3);
    d.push_front(4);
    d.push_front(5);


    d.erase(d.begin(),d.end());
    for(int x:d)
    {
        cout<<x<<endl;
    }
    return 0;
}
