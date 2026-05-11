int	ft_sqrt(int nb)
{
	int	x;
	
	x = 0;
	while (x++ <= (nb / 2))
	{
		if (x * x == nb)
			return (x);
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int x = 9;
// 	int raiz;

// 	raiz = ft_sqrt(x);
// 	printf ("%d", raiz);
// 	return (0);
// }