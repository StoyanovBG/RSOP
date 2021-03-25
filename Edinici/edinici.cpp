#include<iostream>

using namespace std;
const int M = 1000000;
int arr[M];
int num;
void edinici ();

int main()
{
    int test;
    cin >> test;

    for(int i=1; i <= test; i++)
    {
        edinici();
    }
}

void edinici ()
{

    cin >> num;

    int k = 0;

    for(int i=1; i <= num; i++)
    {
        int v = i + k;
        arr[i] = v % 10;
        k = v / 10;
    }

    int numRev = num;

    for(int i = num + 1; i <= 2 * num - 1; i++)
    {
        numRev--;
        int v = numRev + k;
        arr[i]=v % 10;
        k = v / 10;
    }

    for(int i = 2 * num - 1; i >= 1; i--)
    {
        cout << arr[i];
    }
    cout << endl;
}
