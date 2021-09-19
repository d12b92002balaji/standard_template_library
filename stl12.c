#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    cout<<"finding-->"<<binary_search(v.begin(),v.end(),6)<<endl;
    return 0;
}
