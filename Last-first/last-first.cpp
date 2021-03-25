#include <iostream>
#include <algorithm>

using namespace std;

const int MAX = 10000;

string a[MAX], b[MAX];
int n, k, cases, num, j, kth;
string s;

void lastfirst(int m)
{
    for (int i=0; i < n; ++i)
    {
        s = a[i]; k = s.length();
        s = s.substr(k - m, m) + s.substr(0, k - m);
        b[i] = s;
    }
}

int main()
{
    cin >> n;
    for (int i=0; i < n; ++i)
    {
        cin >> a[i]; b[i] = a[i];
    }
    cin >> cases;
    for (int i =0; i < cases; ++i)
    {
        cin >> num;
        lastfirst(num);
        sort(b, b + n);
        cin >> kth;
        for (int j=0; j < kth; ++j)
        {
            cin >> k; cout << b[k - 1] << endl;
        }
        cout << endl;
    }
    return 0;
}
