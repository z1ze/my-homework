#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,m;
int count1=0;//死人数
int count2=0;//判定数
int count3=0;//循环数
int live = 0;
scanf("%d %d",&n,&m);
int *a = malloc(sizeof(int)*n);
for(int  i =0;i<n;i++)
{
    a[i]=1;
}
while(1)
{if(count1==n-1)
{
    break;
}
if(count3==n)
{
    count3=0;
}

if(a[count3]==1&&(count2+1)!=m)
{
    count3++;
    count2++;
}
else if(a[count3]==1&&(count2+1)==m)
{   a[count3]=0;
    count2=0;
    count3++;
    count1++;
}
else if(a[count3]==0)
{
    count3++;
}
for(int  i =0;i<n;i++)
{
    if(a[i]==1)
    {
        live = i+1;
        break;
    }
}
}
printf("%d",live);
free(a);
}
