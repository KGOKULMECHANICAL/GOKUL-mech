#include<stdio.h>
void main()
{
int g,j,s;
printf("Enter the values");
scanf("%d %d",&j,&s);
for(g=j;g<s;g++)
{
if(g%2==0)
printf("\n %d",g);
}
}
