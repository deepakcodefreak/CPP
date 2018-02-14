#include<iostream>

using namespace std;

class temp
{
private:
    float t,t2;
public:
    float setdata(float a)
    {
        t=a;
        return setTemp();
    }
    void showdata()
    {
        cout<<t2;
    }

    float setTemp()
    {
        t2=t*9/5+32;
        return t2;
    }
};

int main()
{
    temp obj;
    cout<<"Enter temp in celcius\n";
    float w;
    cin>>w;
    obj.setdata(w);
    //obj.setTemp();
    obj.showdata();

    return 0;
}
