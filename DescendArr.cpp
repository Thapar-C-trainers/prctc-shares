#include <iostream.h>

main()
{
	int *DecrOrderIN(int ssp[],const int length);
	int getMaxIN(int ssp[], int length);
	
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
	int getMaxIN(int ssp[] , int length);
	static int out[length];
	
	for (int count=0; count < length; ++count)
	{
		out[count] = getMaxIN(ssp , length);
	}
	//The output is supposed to be returned to a pointer.
	return out;
}

int getMaxIN(int ssp[], int length)
{
	int temp;
	temp = ssp[1];

	for (int count=0; count < length ; ++count)
	{
		if(temp < ssp[count]) {temp = ssp[count];}
	}
	
	return temp;
}
