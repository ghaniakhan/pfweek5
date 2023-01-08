#include<iostream>
using namespace std;
float taxcalculator(char type,float price);
main ()
{
char  type;
float price,amountoftax,finalprice;
cout<< "enter vehicle code :";
cin>>  type  ;
cout<<" enter item price :";
cin>> price;
amountoftax= taxcalculator(type, price);
finalprice= price+amountoftax;
cout<< "final price of vehicle"<< type << "is"<< finalprice;
}
float taxcalculator(char type,float price)
{
float code;
if(type== 'M'){
code= (price*6)/100;
return  code;}
if(type== 'E'){
code= (price*8)/100;
return code;}
if(type== 'S'){
code= (price*10)/100;
return code;}
if(type== 'V'){
code= (price*12)/100;
return code;}
if(type== 'T'){
code=  (price*15)/100;
return code;
} 
}
