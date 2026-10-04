#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double a,b,c,d,r1,r2,rp,ip;

    cout<<"Enter a,b,c values : ";
    cin>>a>>b>>c;

    d=b*b-4*a*c;

    if(d>0)
    {
        cout<<"Roots are real and different"<<endl;
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        cout<<"Root1 "<<r1<<"\nRoot2 "<<r2;
    }
    else if(d==0)
    {
        cout<<"Roots are equal"<<endl;
        r1=(-b+sqrt(d))/(2*a);
        r2=r1;
        cout<<r1<<" "<<r2<<endl;
    }
    else
    {
        cout<<"Roots are complex and imaginary"<<endl;
        rp=-b/(2*a);
        ip=sqrt(-d)/(2*a);
        cout<<rp<<"+"<<ip<<"i"<<endl;
        cout<<rp<<"-"<<ip<<"i";
    }

    return 0;
}
