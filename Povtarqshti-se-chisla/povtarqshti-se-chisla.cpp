#include <iostream>

using namespace std;

const int MAX = 100000;

int main()
{
    int arr[MAX];
    int t, i, j, k;
    cin >> t;
    for ( i = 0; i < t; i++)
    {
        for ( j = MAX - 1; j >= 0; --j)
        {
            arr[j] = 0;
        }

        int numbers;
        cin >> numbers;
        for ( k = 0; k < numbers; k++)
        {
            int num;
            cin >> num;
            arr[num]++;
        }
        
        int rep = 0;
        int wanted = 0;
        
        for ( j = MAX - 1; j >= 0; --j)
            if (arr[j] >= rep)
            {
                rep = arr[j];
                wanted = j;
            }
        cout<< wanted<<endl;
    }
    return 0;
}