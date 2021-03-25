#include<iostream>
#include <string>
#include <cstring>

using namespace std;

const int M = 21;

int main()
{
    char arr[M],arrNew[M];
    int i, j, k, n;
    int num = 520;
    cin>>n;

    for ( j=0; j<n; j++)
    {
        cin>>arr;
        int s=0;

        for (i=0; i<strlen(arr); i++)
        {
            k=arr[i] -'a';
            k=k+1;
            s=s+k;
        }

        if(s<num)
        {
            strcpy(arrNew,arr);
            num=s;
        }

    }
    cout<<arrNew<<" "<<num<<endl;
    return 0;
}