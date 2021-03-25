#include<iostream>

using namespace std;

int main()
{
    int cases;
    cin>>cases;
    for (int k = 0; k < cases; k++)
    {
        char ch;
        cin.get(ch);
        string characters;
        while(cin.get(ch))
        {
            if (ch == '\n')
            {
                break;
            }
            characters += ch;

        }
        string strDecryptionKey;
        cin>>strDecryptionKey;
        cout<<k+1<<" ";
        for (unsigned long int i = 0; i < characters.length(); i++)
        {

            if(characters[i] != ' ')
            {

                cout<<strDecryptionKey[characters[i] - 'A'];
            }
            else
            {
                cout<<' ';
            }
        }
        cout<<endl;
    }
    return 0;
}