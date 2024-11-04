#include <unistd.h>

void rush(int x, int y)
{
	int i = 1;
	int j =	1;

	while(j <= y)
	{
		while(i <= x)
		{
			if((i==1 && j==1)||(i==1 && j==y)&& x != 1)
				write(1, "A", 1);
			else if(((i==1 && j==y)) && x == 1)
			{
				write(1, "A", 1);
			}
			else if((i==x && j==y) || (i==x && j==1))
				write(1, "C",1);
			else if((i==1 && (j>1 && j<y))||((i>1 && i<x) && (j ==1 || j ==y)))
				write(1, "B", 1);
			else if(((i>1 && i<x) && (j>1 && j<y)))
				write(1, " ", 1);
			else if(i==x && (j>1 && j<y))
				write(1, "B", 1);
			i++;	
		
		}
		i=1;
		j++;
		write(1, "\n", 1);
	}
}

int main()
{
	rush(-5, -5);

}
