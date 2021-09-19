#include<iostream>
#include<stack>

using namespace std;
int main()
{
    stack <string> s;
    s.push("love");
    s.push("babbar");
    s.push("kumar");
    s.pop();
    cout<<"top element:"<<s.top()<<endl;
    cout<<"size of stack:"<<s.size()<<endl;
    cout<<"empty of not:"<<s.empty()<<endl;
    return 0;
}
