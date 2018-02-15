#include<iostream>
using namespace std;

int main()
{
    int k=0;
    for(int i=0;i<=4;i++)
    {   k++;
        for(int j=0;j<=4;j++)
        {
            if(j<=i)
                cout<<k;
                else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
