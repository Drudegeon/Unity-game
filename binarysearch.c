#include<stdio.h>
int bubblesort(int[],int);
int binsearchiter(int[],int,int);
int binsearchrec(int [],int,int,int);
int occurence(int [],int,int,int);
int main()
{
while(1)
{
int choice,a[20],i,key,j,n,result;
printf("Enter the no of elements\n");
scanf("%d",&n);
printf("Enter the list of elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the element to be searched\n");
scanf("%d",&key);
 bubblesort(a,n);
printf("Enter your choice 1.Recursive 2.Iterative\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
result = binsearchrec(a, i, j, key);

break;
case 2:
result = binsearchiter(a,key,n);
occurence ( a, key, n,result);
break;
default:printf("You've entered the wrong option,please enter the right one\n");
break;
}
}
}

int binsearchrec(int a[],int i,int j,int key )
{
int c;
if(i<=j)
{
c=(i+j)/2;
if(key==a[c])
return c;
if(key>a[c])

return(binsearchrec(a,c+1,j,key));
return(binsearchrec(a,i,c-1,key));
}
}
int binsearchiter(int a[],int n,int key)
{int i,j,c;
i=0;
j=n-1;
c=(i+j)/2;
while(a[c]!=key && i<=j)
{
if(key>a[c])

i=c+1;
else 
j=c-1;
c=(i+j)/2;
}
if(i<=j)
return (c);
}

int bubblesort(int a[],int n)
{
int temp,i,j;
for(i=1;i<n;i++)
{
for(j=0;j<n-i;j++)
{
if(a[j]>a[j+1])
temp = a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
int occurence (int a[],int key,int n,int result)
{int i,count;
for(i=0;i<n;i++)
{
if(result ==key)
printf("result is first found at %d",result);
count++;
}
for(i=n-1;i<n;i--)
{
if(result ==key)
printf("result is last found at %d",result);
}
}




