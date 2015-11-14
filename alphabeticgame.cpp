#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
   int i;
   char c,h;
   cin>>c>>h;
   if(c==h)
{
printf("NA");
return 0;}
if(c>h)
{
printf("NA");
return 0;}
	if(c<h){
   for(i=c+1;i<h;i++)
   {
   	if(i<h-2&&i!='A'&&i!='E'&&i!='I'&&i!='O'&&i!='U')
   	printf("%c,",i);
   	else if(i!='A'&&i!='E'&&i!='I'&&i!='O'&&i!='U')
   	printf("%c",i);
   }}
   
   return 0;
}
