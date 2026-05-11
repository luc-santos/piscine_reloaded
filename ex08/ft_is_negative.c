ft_putchar(int c);

void	ft_is_negative(int n)
{
	int	P;
	int	N;

	P = 80;
	N = 78;

	if (n < 0)
		ft_putchar(N);
	else
		ft_putchar(P);
}