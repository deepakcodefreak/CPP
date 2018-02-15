#include<iostream>
using namespace std;

int main()
{
    float p,r,n,v;
    /*cout<<"Enter value of principle amount\n";
    cin>>p;
    cout<<"Enter value of years\n";
    cin>>n;
    */
    for(int i=1;i<=10;i++)
    {
        p=i*1000;
        r=.10+i/100.00;
        n=i;
        v=p*(1+r);
        cout<<p<<" "<<r<<" "<<n<<" "<<v<<endl;
        p=v;
    }




    return 0;
}
