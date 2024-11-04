#include <unistd.h>
#include <stdio.h>

int main()
{
	int tableau[4][4] = {{1, 2, 3, 4}, {2, 2, 2, 2}, {3, 3, 3, 3}, {4, 4, 4, 4}};
	int i = 0;
	int j = 0;
	while(i < 4)
	{
		while(j < 4)
		{
			printf("%d", tableau[i][j]);
			j++;
		}
		printf("\n");
		j = 0;
		i++;
	}
}
