#include<iostream>
using namespace std;
void pyramid(int length,int width,int height);
void pyramids(string outputunit);
main ()
{
int length;
int width;
int height;
string outputunit; 
int pyramidvolume;
cout<< "enter length :";
cin>> length;
cout<< "enter width :";
cin>> width;
cout<< "enter height :";
cin>> height;
cout<< enter output unit :";
cin>> outputunit;  
pyramid(length,width,height);
pyramids(outputunit);
}
void pyramid(int length,int width,int height)
void pyramids(string outputunit)
{
int volume;
int pyramidvolume;
volume= length*width*height;
pyramidvolume= volume/3;
if(outputunit==centimeter){
pyramidvolume= pyramidvolume*100;}
cout<< "pyramidvolume"<< pyramidvolume;
}
    
 
