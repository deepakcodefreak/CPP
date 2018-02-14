#include<iostream>

using namespace std;

int main()
{
    float t;
    cout<<"Enter Temperature in fahrenheit\n";
    cin>>t;
    float t2;
    t2=(t-32)*5/9;
    cout<<"Temperature in Degree C is "<<t2;
    return 0;
}
