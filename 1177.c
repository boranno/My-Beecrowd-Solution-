#include<stdio.h>
int main()
{
  int i,j,k,l,m,n=1000,v=0,a;
  scanf("%d",&a);
  int arr1[1000];
  for(i=0;i<n;i++)
  {
      if(v>=a)
      {
          v=0;
      }
      arr1[i]=v;
      v++;
  }
  for(j=0;j<n;j++)
  {
      printf("N[%d] = %d\n",j,arr1[j]);
  }
  return 0;
}
