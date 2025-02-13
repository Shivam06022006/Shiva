#include<iostream>
using namespace std;
class CIRCLE
{
    public:
    const  float pi=3.14;
    float r, area;
    void input()
    {
        cout<<"ENTER THE RADIUS "<<endl;
        cin>>r;
    }
    void logic()
    {
         area = pi*r*r;
    }
    void output()
    {
        cout<<"AREA OF CIRCLE IS "<<area<<endl;
    }
};
class TRIANGLE
{
    public:
    double b,h,area;
    void input()
    {
        cout<<"ENTER THE VALUE OF BASE AND HEIGHT OF TRIANGLE "<<endl;
        cin>>b>>h;
    }
    void logic()
    {
        area=0.5*b*h;
    }
    void output()
    {
        cout<<"AREA OF TRIANGLE IS "<<area<<endl;
    }
    void area1()
    {
        cout<<" AREA OF TRIANGLE "<<b*h*area<<endl;
    }
};

int main()
{
    CIRCLE r;
   
    r.input();
    r.logic();
    r.output();
    TRIANGLE t;
    t.input();
    t.logic();
    t.output();
    t.area1();
    return 0;
}
