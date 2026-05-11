void	ft_putchar (int c);

void	ft_putstr(char *str)
{
	while(*str)
	{
		ft_putchar(*str);
		str++;
	}
}
// #include <stdio.h>
// int	main(void)
// {
// 	ft_putstr("alo");
// 	return (0);
// }