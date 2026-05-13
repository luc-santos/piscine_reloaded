/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 13:49:33 by lucsanto          #+#    #+#             */
/*   Updated: 2026/05/12 13:49:35 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 || *s2) && (*s1++ == *s2++))
		;
	return (*--s1 - *--s2);
}

void	ft_print_params(char *param)
{
	while (*param)
		ft_putchar(*param++);
	ft_putchar('\n');
}

void	ft_sort_params(char *params[], int index)
{
	char	*temp;
	int		i;
	int		j;

	i = 0;
	while (i < index - 1)
	{
		j = 0;
		while (j < index - 1)
		{
			if (ft_strcmp(*(params + j), *(params + j + 1)) > 0)
			{
				temp = *(params + j);
				*(params + j) = *(params + j + 1);
				*(params + j + 1) = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc >= 2)
		ft_sort_params(argv + 1, argc - 1);
	while (argc-- > 1)
		ft_print_params(*++argv);
	return (0);
}
