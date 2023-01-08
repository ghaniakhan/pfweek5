#include<iostream>
#include<cmath>
using namespace std;
float quadratic (float a,float b,float c);
main ()
{
int a;
int b;
int c;
float formulae;
cout<< "enter first side :";
cin>> a;
cout<< "enter second side :";
cin>>  b;
cout<< "enter third side :";
cin>> c;
formulae= quadratic (a, b,c);  
cout<< "x is :"<<formulae;
cout<< "y is :"<<formulae;
}
float quadratic (float a,float b,float c)
{
float g;
float h;
float n;
float i;
float j;
float k;
float l;
float x;
float y;
g= -b;
h= b*b;
n= 4*(a*c);
i= 2*a;
j= h-n;
k= sqrt(j);
l= g+k;
x= l/i;
return x;}






