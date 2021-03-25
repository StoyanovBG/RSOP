#include<iostream>
#include<string>

using namespace std;

int main()
{
    long long num = 0;
    int T = 0;
    int N = 0;
    int i;
    int count = 0;

    do {
        cin >> T;
    } while (T < 1 || T > 20);

    for ( i = 0; i < T; i++)
    {
        do {
            cin >> N;
        } while (N < 1 || N > 100);

        for (int j = 0; j < N; j++)
        {
          cin>>num;
            if(((num/10)%10)%2==0){
                count++;
            }
            num = 0;

        }

        cout<<count<<endl;
        count = 0;
    }

    return 0;
}
