#include <stdio.h>

int main(void) {
	int t,n,x,y,z,count,i,j,a,b,c;
	scanf("%d",&t);
	while(t--)
	{
	  scanf("%d %d",&a,&b);
	  if(a>b)
      printf("%d\n",b);
    else if(a==b)
      printf("%d\n",a);
    else
      printf("%d\n",2*a-b);
	}
	return 0;
  }
