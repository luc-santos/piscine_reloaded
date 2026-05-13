/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 13:51:00 by lucsanto          #+#    #+#             */
/*   Updated: 2026/05/12 13:51:02 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	diff;
	int	*range;

	i = 0;
	diff = max - min;
	if (min >= max)
		return (NULL);
	range = (int *)malloc(sizeof(int) * diff);
	while (i < diff)
		range[i++] = min++;
	return (range);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int *list;
// 	int size;
// 	int i;

// 	list = ft_range(5, 15);
// 	size = 15 - 5;
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%d, ", list[i]);
// 		i++;
// 	}
// }
