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

int main()
{
	return(visibilite(1, 3, 2, 4));
}
