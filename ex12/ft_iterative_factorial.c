int	ft_iterative_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb == 1)
		return (1);

	int	aux;

	aux = nb;
	nb--;
	while (nb > 0)
	{
		aux = aux * nb;
		nb--;
	}
	return (aux);
}
// #include <stdio.h>

// int	main(void)
// {
// 	int x;

// 	x = ft_iterative_factorial(5);

// 	printf("%d", x);
// }