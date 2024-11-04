
//toutes les combinaisons possibles
void proba()
{
	int quatre[4] = {1, 2, 3, 4};

	int trois[6][4] = {
		{1, 2, 4, 3},
		{1, 3, 2, 4},
		{1, 3, 4, 2},
		{2, 3, 4, 1},
		{2, 3, 1, 4},
		{2, 1, 3, 4}
	};

	int deux[11][4] = {
		{1, 4, 2, 3},
		{1, 4, 3, 2},
		{2, 4, 3, 1},
		{2, 4, 1, 3},
		{2, 1, 4, 3},
		{3, 4, 1, 2},
		{3, 4, 2, 1},
		{3, 1, 2, 4},
		{3, 1, 4, 2},
		{3, 2, 1, 4},
		{3, 2, 4, 1}
	};

	int un[6][4] = {
		{4, 1, 2, 3},
		{4, 1, 3, 2},
		{4, 2, 1, 3},
		{4, 2, 3, 1},
		{4, 3, 1, 2},
		{4, 3, 2, 1}
	};
}

// teste si une ligne ou une colonne respecte le parametre entre
int visibilite(int a, int b, int c, int d)
{
        int i = 0;
        int j = 1;
        while(i < 3)
        {
                if(b > a)
                {
                        j++;
                }
                i++;
                if(c > a && c > b)
                {
                        j++;
                }
                i++;
                if(d > a && d > b && d > c)
                {
                        j++;
                }
                i++;
        }
        return j;
}


#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
        int tableau[4][4] = {{1, 1, 1, 1}, {2, 2, 2, 2}, {3, 3, 3, 3}, {4, 4, 4, 4}};
        int i = 0;
        int j = 0;
        /*while(i < 4)
        {
                while(j < 4)
                {
                        printf("%d", tableau[i][j]);
                        j++;
                }
                printf("\n");
                j = 0;
                i++;
        }*/
	// check si la ligne ou colonne respecte la condition de la valeur de l'argument
	if(visibilite(tableau[][], tableau[][], tableau[][], tableau[][]) != argv[1])
	while(i < 4)
	{
		if(argv[9] = 1)
		{
			tableau[i][0] = un[j][0];
			tableau[i][1] = un[j][1];
			tableau[i][2] = un[j][2];
			tableau[i][3] = un[j][3];
		}
		else if(argv[10] = 2)
		{
			tableau[i][0] = deux[j][0];
			tableau[i][1] = deux[j][1];
			tableau[i][2] = deux[j][2];
			tableau[i][3] = deux[j][3];
		}
		else if(argv[11] = 3)
                {
                        tableau[i][0] = trois[j][0];
                        tableau[i][1] = trois[j][1];
                        tableau[i][2] = trois[j][2];
                        tableau[i][3] = trois[j][3];
                }
		else if(argv[12] = 4)
                {
                        tableau[i][0] = quatre[j][0];
                        tableau[i][1] = quatre[j][1];
                        tableau[i][2] = quatre[j][2];
                        tableau[i][3] = quatre[j][3];
                }


		i++;
	}

	printf("\n");

	i = 0;
	j = 0;
	while(j < 4)
        {
                while(i < 4)
                {
                        printf("%d", tableau[i][j]);
                        i++;
                }
                printf("\n");
                i = 0;
                j++;
        }



}
