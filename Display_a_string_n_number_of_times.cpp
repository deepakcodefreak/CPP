#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name;
    cout<<"Enter your name\n";
    cin>>name;
    cout<<"Enter value of n\n";
    int n;
    cin>>n;

    for(int i=0;i<=n-1;i++)
        cout<<name<<endl;

    return 0;
}
