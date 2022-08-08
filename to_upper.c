int ft_toupper(char* input)
{
	int x= 0;
	int i = 0;
	while ( input[i] )
	{
		if (input[i] <= 'z' && input[i] >= 'a')
		{

			printf("%i\n", i);
			input[i] -= 32;
			x++;
		}
		i++;
	}
	return x;
	
}
