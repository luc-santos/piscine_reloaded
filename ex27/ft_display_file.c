/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucsanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 17:45:23 by lucsanto          #+#    #+#             */
/*   Updated: 2026/05/12 17:45:26 by lucsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int		file;
	char	c;

	if (argc > 2)
	{
		write (2, "Too many arguments.\n", 20);
		return (1);
	}
	if (argc < 2)
	{
		write (2, "File name missing.\n", 19);
		return (1);
	}
	file = open(argv[1], O_RDONLY);
	while (read(file, &c, 1) > 0)
		write (1, &c, 1);
	close(file);
	return (0);
}
