// Kadane's Solution
// plz read README file before going deep into this code.


#include<stdio.h>

int MaxSumOfSubArray(int *a,int size,int *s)
{
int e,f;
int lmax=a[0];
int gmax=a[0];

for(e=1;e<size;e++)
{
f=lmax+a[e];
lmax=f;

if(a[e]>f)
{
lmax=a[e];
s[0]=e;
}

if(gmax<lmax)
{
gmax=lmax;
s[1]=e;
}

}

return gmax;
}



int main()
{

int size=0;
printf("Enter size of an array : ");
scanf("%d",&size);

int arr[size];

// data entry
for(int i=0;i<size;i++)
{
printf("Enter %d element : ",i+1);
scanf("%d",&arr[i]);
}

int subArray[2];

int sum=MaxSumOfSubArray(arr,size,subArray);

// Result
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