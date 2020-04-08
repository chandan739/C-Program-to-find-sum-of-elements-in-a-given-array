
#include <stdio.h>

int main(void)
{
int N,i,sum=0;
scanf("%d", &N);

int ary[N];// Define an array of integers

// Get inputs for the array elements
for(i=0;i<N;i++)
{
  scanf("%d",&ary[i]);
  sum=sum+ary[i];
}

printf("%d\n",sum);
return 0;
}
