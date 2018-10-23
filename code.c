#include<stdio.h>

int power(int a, int b)
{ int x=1;
	while(b>=1)
	{	
		x=x*a;
		b--;
	}
	return x;
}
void main()
{ 
    int flag,i,rem,j,count;
    long int n,sum;
	printf("\n Enter the range to search for : ");
	scanf("%ld",&n);
	for(i=1;i<=n;i++)
	{ j=i,count=0;
	  flag=i;
	  sum=0;
	  while(j!=0)
	  { j=j/10;
	    count++;
	  }
	  while(flag!=0)
	  { rem=flag%10;
	    flag=flag/10;
		sum+=power(rem,count);
	  }	
	  if(sum==i)
		  printf("\n %d is an armstrong number.",sum);
		
	}	  
}	  


