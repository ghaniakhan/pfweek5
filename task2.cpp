#include<iostream>
using namespace std;
float divide(float num1,float num2);
main()
{
float num1;
float num2;
float answer;
cout<< "enter number 1 :";
cin>> num1;
cout<< "enter number 2 :"; 
cin>> num2;
answer= divide(num1,num2);
cout<< "division :"<< answer;
}
float divide(float num1,float num2)
{
float division;
division= num1/num2;
return division;
} 
