void	ft_putchar(int c);

void	ft_putstr(char *str)
{
	while(*str)
	{
		ft_putchar(*str);
		str++;
	}
}
int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 0)
		return (0);
	else
	{
		while(i < argc)
		{
			ft_putstr(argv[i]);
			ft_putchar(10);
			i++;
		}
	}
}