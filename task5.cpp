#include<iostream>
#include<cmath>
using namespace std;
bool remainder(int number);
main ()
{
int number;
int rem1;
int rem2;
int rem3;
int rem4;
int sum;
cout<< "enter number :";
cin>> number; 
rem1= number/100;
rem2= rem1/10;
rem3= rem2%10;
rem4= rem3%10;
sum= rem2+rem3+rem4;
cout<< "sum :"<< sum;
}  