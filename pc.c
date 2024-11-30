#include<iostream>
#include<stdio.h>

int chopstick[5]={1,1,1,1,1};
int i;

wait(int i)
{
	printf("%d",i);
	while(chopstick[i]<0)
	{
		printf("chopstick not available");
	}
	chopstick[i]--;
}

signal(int i)
{
	chopstick[i]++;
}

void dining(int i)
{
	wait(i);
	wait((i+1)%5);

	printf("\nprocess %d is eating\n",i);

	//dining(i+1);

	signal(i);
	signal((i+1)%5);

	printf("\nprocess %d is thinking\n",i);
}

int main()
{
	for(i=0;i<5;i++)
	{
		dining(i);
	}
	return 0;
}
