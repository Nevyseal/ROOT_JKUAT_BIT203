/*This program computes the sum
of all numbers between 1 and 100*/
#include<stdio.h>
int main()
{
	int k, sum = 0;

	k = 1;

	do
	{
		sum += k;
		k++;
	}while(k <= 100);

	printf("The sum of all numbers between 1 and 100 is %d\n\n",sum);
	return 0;
}
