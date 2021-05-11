#include <iostream>
#include<math.h>
#include<iomanip>
#include<stdlib.h>

using namespace std;

    double function(double x)
{
    double f = (1/(1-(x*x)));
    return f;
}

int main()
{
    double a,b,n,i,N,t,delx,integral,a1,sum,actualvalue,error;
    actualvalue = -0.3810700260234484;
    cout<<"Enter the value of first boundary:";
    cin>>a;
    cout<<"Enter the value of second boundary:";
    cin>>b;
    cout<<"Enter the minimum number of intervals:";
    cin>>n;
    cout<<"Enter the maximum number of intervals:";
    cin>>N;
    cout<<"Number of intervals \t Integral Value \t Error"<<endl;
    delx = (b-a)/n;
    for(;n<=N;n++)
    {
        a1 = 0;
        delx = (b-a)/n;
        t = a+delx;
        integral = 0;
            for(i=1;i<=n-1;i++)
            {
            a1 = t;
            integral = integral+2*function(a1);
            t = t+delx;
            }
            sum = delx*(integral + function(a)+function(b));
            error = fabs(sum-actualvalue);
            cout <<n<< "\t \t \t" <<sum<<"\t \t \t"<<error<<endl;
        }

    return 0;

}
