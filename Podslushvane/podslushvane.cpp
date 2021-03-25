#include<iostream>

using namespace std;

const int M = 1000000;

int main()
{
    int firstArr[M], secondArr[M];
    int size, i, j, temp, count;

    cin>>size;

    for(i=0; i<size; i++)
    {
        cin>>firstArr[i];
        secondArr[i] = -1;
    }
    
    for (i = 0; i < size; ++i)
    {
        for (j = i + 1; j < size; ++j)
        {
            if (firstArr[i] > firstArr[j])
            {
                temp =  firstArr[i];
                firstArr[i] = firstArr[j];
                firstArr[j] = temp;
            }
        }
    }

    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            if(firstArr[i] == firstArr[j])
            {
                count++;
                secondArr[j] = 0;
            }
        }

        if(secondArr[i] != 0)
        {
            secondArr[i] = count;
        }
    }
    
    for(i=0; i<size; ++i)
    {
        if(secondArr[i] == 1)
        {
            cout<<firstArr[i]<<" ";
        }
    }

    return 0;
}