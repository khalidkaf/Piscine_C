#include <unistd.h>

void print(char c)
{
	write(1, &c, 1);
}

void recursive(int nbr)
{
	long n = nbr;

	if(n<0)
	{
		print('-');
	}
	if(n>9)
	{
		recursive(n/10);
		recursive(n%10);
	}
	else
	{
		print(n+48);
	}
}

int main()
{
	recursive(2453);
}
