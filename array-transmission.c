#include <stdio.h>
#define len 5
void main()
{	
	int *fun1(int ar[]);
	int array[len],*arrptr1,*arrptr2;
	
	int i;
	for(i=0;i<len;++i)
	{
		scanf("%d",&array[i]);
	}

	arrptr1 = array;
	for(i=0;i<len;++i)
	{
		printf("X%d\n",*(arrptr1+i));
	}

	arrptr2 = fun1(array);

	for(i=0;i<len;++i)
	{
		printf("Y%d\n",*(arrptr2+i));
	}
}

#ifdef len
int *fun1(int ar[])
{
	static int ar2[len];
	int i;
	for(i=0;i<len;++i)
	{
		ar2[i]=ar[i];
	}

return ar2;
}
#endif
