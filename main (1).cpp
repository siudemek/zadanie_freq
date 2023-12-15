#include <iostream>
#include <cmath>

using namespace std;


namespace b
{
    double freq(double l=0.0175, double h=0.00043, double e=1.25e11, double ro=8.4e3)
        {
            return ((1/(2*M_PI))*sqrt((e*pow(h,2))/(4*ro*pow(l,4))));
        }
}
namespace a
{
    double freq(double e=1.25e11, double ro=8.4e3, double h=0.00043, double l=0.0175)
        {
            return ((1/(2*M_PI))*sqrt((e*pow(h,2))/(4*ro*pow(l,4))));
        }
}
int main()
{
    double e=1.25e11, ro=8.4e3, h, l;
    cout<<"Podaj wartosc h potem l: "<<endl;
    cin>>h>>l;
    cout<<"h="<<h<<endl<<"l="<<l<<endl<<"e="<<e<<endl<<"ro="<<ro<<endl;
    
    cout<<a::freq(e,ro,h,l)<<endl;
    cout<<a::freq(e,ro,h)<<endl;
    cout<<a::freq(e,ro)<<endl;
    cout<<b::freq(l);
    return 0;
}
