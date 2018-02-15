#include<iostream>
using namespace std;
void swaping(int & ,int &);
int main()
{
    int a,b;
    cout<<"Enter value of a\n";
    cin>>a;
    cout<<"\nEnter value of b\n";
    cin>>b;
    swaping(a,b);
    cout<<"a= "<<a;
    cout<<"\nb= "<<b;
    return 0;
}

void swaping(int &x,int &y)
{
    int z;
    z=x;
    x=y;
    y=z;

    }
