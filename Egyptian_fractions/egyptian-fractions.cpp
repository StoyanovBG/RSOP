#include <iostream>

using namespace std;


int main()
{
    int t;
   cin>>t;
    while(t--)
    {
        int z;
      cin>>z;

        int x = z + 1;
        int y = 1000000;

        while(x < y)
        {
            int num = z * x;
            int second = (x-z);
            if(num % second == 0)
            {
                y = num/second;
                if(x!=y)
                {
                   cout<<x<<" "<<y<<endl;
                }
            }
            x++;
        }
    }

    return 0;
}