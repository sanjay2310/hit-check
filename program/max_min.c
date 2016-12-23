#include <stdio.h>
#include <math.h>
 int main()
  {
	     int  a, b, c, d;
             	
		scanf("%d%d",&a,&b);
           c = fmax(a,b);
	   d = fmin(a,b);
	    printf("maxx  = %d\n",c);
	    printf("min = %d\n",d);
	 
	return 0;
}

