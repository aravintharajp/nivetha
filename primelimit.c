#include<stdio.h>
main()
{
int low,high,i,flg;
scanf("%d%d",&low,&high);
while(low<high)
{
flg=0;
for(i=2;i<=low/2;++i)
{
  if(low%i==0)
  {
    flg=1;
    break;
   }
}
if(flg==0)
printf("%d\t",low);
++low;
}
}
