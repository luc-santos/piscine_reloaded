/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 13:48:17 by lucsanto          #+#    #+#             */
/*   Updated: 2026/05/12 13:48:19 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 || *s2) && (*s1++ == *s2++))
		return (*s1 - *s2);
	return (*--s1 - *--s2);
}

// #include <string.h>
// #include <stdio.h>
// int    main(void)
// {
//     printf("%d", strcmp("a", "c"));
//     printf("\n");
//     printf("%d", ft_strcmp("a", "c"));
//     return (0);
// }
