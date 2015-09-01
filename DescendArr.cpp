#include <iostream.h>

int *DecrOrderIN(int ssp[] , const int length);
int getMaxIN(int out[], int length, int count, int changed);
#define length 20
main()
{
	const int size=20;
	int inp[size] ;
	int *ordered;

	cout<<"Array nums\n";

	for (int n=0;n<size;++n)
	{
		//input loop...
		cout<<"\n"<<n<<"th number\t";
		cin>>inp[n];
	}

	*ordered = *DecrOrderIN(inp , size);

	for (n=0;n<size;++n)
	{
		//output loop...
		cout<<*ordered+n<<"\n";
	}

return 0;
}

int *DecrOrderIN(int ssp[],const int length)
{
	static int out[length];

	//Cloning the array to static one...
	for(int count=0; count < length; ++count) {out[count]=ssp[count];}

	int temp, changed;
	for (count=0; count < length; ++count)
	{
		temp = out[count];
		out[count] = getMaxIN(out, length,count,changed);
		out[changed] = temp;
	}
	//The output is supposed to be returned to a pointer.
	return out;
}

int getMaxIN(int ssp[], int length, int starter, int *tag)
{

	for (int temp = ssp[starter]; starter < (length-1) ; ++starter)
	{
		if(temp < ssp[starter+1]) {temp = ssp[starter+1]; *tag = (starter+1);}

		else continue ;
	}

	return temp;
}
