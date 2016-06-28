#include<stdio.h>
#include<conio.h>
void main()
{
char str[100];
printf("enter the string");
scanf("%s",str);
strrev(str);
printf("reverse string is %s",str);
getch();
}
