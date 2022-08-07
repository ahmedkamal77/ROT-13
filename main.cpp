#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    unsigned int x;
    cout<<"Enter encrypted string:";
    getline(cin,s);
    cout<<endl;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]!=' ')
        {
            x=s[i];
            if(x>=65 && x<=90)
            {
                if( (x+13)>90 )
                {
                    x=64+(13-(90-x));
                    s[i]=x;
                }
                else
                {
                    x+=13;
                    s[i]=x;
                }
            }
            if(x>=97 && x<=122)
            {
                if( (x+13)>122)
                {
                    x=96+(13-(122-x));
                    s[i]=x;
                }
                else
                {
                    x+=13;
                    s[i]=x;
                }
            }

        }
    }
    cout<<s<<endl;

    return 0;
}
