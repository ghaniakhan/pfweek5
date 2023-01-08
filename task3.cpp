#include<iostream>
using namespace std;
int maximum (int number1,int number2);
main ()
{
int number1;
int number2;
int greater;
cout<< "enter number 1 :";
cin>> number1;
cout<< "enter number 2 :";
cin>>  number2;
greater= maximum (number1,number2);
cout<< "maximum :"<< greater<< endl;
}
int maximum (int number1,int number2)
{
if (number1>number2){
 return number1;
}
if (number1<number2){
 return number2;
}
 return 0;
}
  