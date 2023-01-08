#include<iostream>
#include<cmath>
using namespace std;
bool issymmetrical(int number);
main ()
{
int number;
int answer;
cout<< "enter three digit number :";
cin>> number;
answer= issymmetrical(number);
cout<< "answer:"<< answer;
}
bool issymmetrical(int number)
{
int rem1;
int div1;
int rem2;
int div2;
int rem3;
int div3;
rem1= number%10;
div1= number/10;
rem2= div1%10;
div2= div1/10;
rem3= div2%10;
div3= div2/10;
if (rem1==rem3){
return true;
}
if (rem1!=rem3){
return false;
}
return 0;
}
     


 