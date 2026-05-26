#include <stdio.h>
#include "isprime.h"

int main()
{
	int num;
	printf("请输入一个整数进行判断："); 
	scanf("%d",&num);
	
	if(isPrime(num)){
		printf("%d是一个质数\n",num);
	}
	else{
		printf("%d不是一个质数。\n",num);
	}
	
	return 0;
}


