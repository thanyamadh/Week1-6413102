#include <stdio.h>
#include <stdlib.h>

int findprime(int);

int main(int argc,char*argv[])
{
  int i,N,x=0,j=0,min,max,k=0;
  int *a,*prime;
    
  N=argc-1;
  a=(int*) malloc (sizeof(int)*N);
  prime=(int*) malloc (sizeof(int)*N);

  for(i= 1;i<argc ;i++)
  {  
    a[i-1]=atoi(argv[i]);
    x = findprime(a[i-1]);
    if(x==5)
    {
      prime[0+j]=a[i-1];
      j++;
      x=0;
      k=1;
    }
  }
  if(k==0)
    printf("---No prime---\n");
  else
  {
      min=prime[0];
      for(i=1; i<j; i++)
      {
        if(prime[i]<min)
        min = prime[i];
      }
      printf("The smallest prime is %d \n",min);
      
      max=prime[0];
      for(i=1; i<j; i++)
      {
        if(prime[i]>max)
        max = prime[i];
      }
      printf("The biggest prime is %d \n",max);
  }

}



int findprime(int n)
{
  int i,k;
  k=1;
    if(n==1||n==0)
    {
      return 0;
    }
   else
    {
      for(i=2; i<n; i++)
      {
        if(n%i==0)
       {
          return 0;
         k=2;
         break;
        }
      }
      if(k==1)
      {
       return 5;
      }
    }
}