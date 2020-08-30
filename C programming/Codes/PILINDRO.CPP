#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,n,ans;
char a[10];
clrscr();
scanf("%s",&a);
n=strlen(a)-1;
for(i=n;i>=0;i--){
if(a[n-i]!=a[i]){ans=1;}
}
if(ans==1){printf("not palindrome");}
else{printf("palindrome");}
getch();
}