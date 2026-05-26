#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#include "isprime.h"
int isPrime(int x)
{
	if (x == 2)
	{
		return 1;
	}
	if(x<2 || x % 2 ==0)
	{
		return 0;
	}
	double squareROOT = sqrt(x);
	int i; 
	for( i=3;i<=squareROOT;i+=2)
	{
		if(x % i == 0)
		{
			return 0;
		}	
	}
	return 1;
}


