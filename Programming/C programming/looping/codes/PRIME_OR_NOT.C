#include<stdio.h>
#include<conio.h>
void main(){
int i,n,ans;
clrscr();
scanf("%d",&n);
for(i=2;i<n/2;i++){
 if(n%i==0)
 {
  ans=1;
  break;
 }
}
if(ans==1){printf("Not prime");}
else{printf("Prime");}
getch();
}
