#include <iostream>
#include <string>
using namespace std;

string s0, send;

string add_U(string s)
{
    if (s[s.length() - 1] == 'I') s = s + "U";
    return s;
}

string add_Mx(string s)
{
    if (s[0] == 'M') s = s + s.substr(1, s.length() - 1);
    return s;
}

string rep_III_U(string s)
{
    size_t found;
    found = s.find("III");
    while(found != string::npos)
    {
        s.replace(found, 3, "U");
        found = s.find("III");
    }
    return s;
}

string rem_UU(string s)
{
    size_t found;
    found = s.find("UU");
    while (found != string::npos)
    {
        s.erase(found, 2);
        found = s.rfind("UU");
    }
    return s;
}

void final()
{
    string s;
    while(getline(cin, s))
    {
        string miu = "MI";
        for(int i=0; i < s.length(); i++)
        {
            if (s[i] == 'A') miu = add_U(miu);
            else if (s[i] == 'B') miu = add_Mx(miu);
            else if (s[i] == 'C') miu = rep_III_U(miu);
            else miu = rem_UU(miu);
//                   cout << miu << " ";
        }
        cout << miu << endl;
    }
}

int main()
{
    final();
    return 0;
}
