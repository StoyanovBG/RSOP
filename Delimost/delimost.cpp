#include<iostream>

using namespace std;


int mod(int k, char s[], char q[])
{
    int i=0;
    int c=0;
    int j=0;
    bool w=false;
    while(s[i]>0)
    {
        c = 10 * c + (s[i]-'0');
        int v = c / k;

        if( v != 0)
        {
            w = true;
        }
        if(w)
        {
            q[j] = v +'0';
            j++;
        }
        c = c % k;
        i++;
    }
    q[j] = 0;
    return c;
}

int main()
{
    char s[1000], q[1000];
    int k;

    cin >> s;
    for(int k=2; k<=2000; k++)
    {
        int r = mod(k, s, q);
        if (r == 0)
        {
            cout << k << " " << q << endl;
        }
    }
}


