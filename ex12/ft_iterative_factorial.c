/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 13:46:22 by lucsanto          #+#    #+#             */
/*   Updated: 2026/05/12 13:46:25 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	total;

	if (nb < 0)
		return (0);
	total = 1;
	while (nb > 1)
	{
		total = total * nb;
		nb--;
	}
	return (total);
}
// #include <stdio.h>

// int	main(void)
// {
// 	int x;

// 	x = ft_iterative_factorial(5);

// 	printf("%d", x);
// }
