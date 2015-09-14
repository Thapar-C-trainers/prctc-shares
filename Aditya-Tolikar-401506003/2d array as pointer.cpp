#include<iostream.h>
#include<stdlib.h>

void main()
{
	int D2[4][3],k=50,j;
	
	randomize();

	for(int i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			D2[i][j]=random(k);
		}
	}
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<D2[i][j]<<" ar[i] "<<D2[i]<<"\t**(ar+i) "<<**(D2+i)<<"\n*((ar+i)+j)"<<*((D2+i)+j)<<"\t *(*(ar+i)+j) "<<*(*(D2+i)+j)<<"\n\n";
			//D2[i][] or D2[][j] will simply give syntax error. **(D2+i) works fine though.
		}
		cout<<"\n\n";
	}
	
}
