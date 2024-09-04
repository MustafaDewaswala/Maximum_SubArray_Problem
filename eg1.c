// brute force
// plz read README file before going deep into this code.


#include<stdio.h>

int MaxSumOfSubArray(int *a,int size,int *s)
{

int e,f,max,sum;
max=0;

for(e=0;e<size;e++)
{

if(max<a[e])
{
max=a[e];
s[0]=e;
s[1]=e;
}

for(sum=a[e],f=e+1;f<size;f++)
{
sum+=a[f];

if(max<sum)
{
max=sum;
s[0]=e;
s[1]=f;
}

}

}

return max;
}

int main()
{
int size=0;

printf("Enter size of an array : ");
scanf("%d",&size);

int arr[size];
for(int i=0;i<size;i++)
{
printf("Enter %d element : ",i+1);
scanf("%d",&arr[i]);
}

int subArray[2];
int sum=MaxSumOfSubArray(arr,size,subArray);

printf("\nMaximum sum of sub-array = %d\n",sum);
printf("\nsub-array : ");

for(int i=subArray[0];i<=subArray[1];i++)
{
printf("%d",i);
if(i+1<=subArray[1]) printf("->");
}
printf("\n");

return 0;
}