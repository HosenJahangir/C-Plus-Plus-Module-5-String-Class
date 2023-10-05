#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    string::iterator it;
    cin >> s;
    // Space sosho input nite "getline(cin,s)"
    // string er age 'int' input nile "getline" problem create kore. Tai'int' er pore "cin.ignore();" use korte habe.

    /*for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << endl;
    }*/
    // cout<<*s.begin()<<endl;
    // cout<<(*s.end()-1)<<endl;
    for (auto it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}