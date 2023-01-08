#include<iostream>
using namespace std;
main ()
{
int number;
string s,st1,st2,st3,st4,st5,st6,st7,st8,st9,st10,st11,st12,st13,st14,st15,st16,st17;
cout<< "enter number :";
cin>> number;
if(number/10==2){
st1= "twennty";
}
if(number/10==3){
st2= "thirty";
}
if(number/10==4){
st3= "fourty";
}
if(number/10==5){
st4= "fifty";
}
if(number/10==6){
st5= "sixty";
}
if(number/10==7){
st6= "seventy";
}
if(number/10==8){
st7= "eighty";
}
if(number/10==9){
st8= "ninety";
}
if(number%10==1){
st9= "one";
}
if(number%10==2){
st10= "two";
}
if(number%10==3){
st11= "three"; 
}
if(number%10==4){
st12= "four";
}
if(number%10==5){
st13= "five";
}
if(number%10==6){
st14= "six";
}
if(number%10==7){
st15= "seven";
}
if(number%10==8){
st16= "eight";
}
if(number%10==9){
st17= "nine";}
s= st1+st2+st3+st4+st5+st6+st7+st8+st9+st10+st11+st12+st13+st14+st15+st16+st17;
cout<< s;
}
