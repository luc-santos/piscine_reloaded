#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char *dest;

	dest = (char *)malloc(ft_strlen(src) + 1);
	if (!dest)
		return NULL;
	dest = ft_strcpy(dest, src);

	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char src[] = "teste";
// 	char *dest;

// 	dest = ft_strdup(src);

// 	printf("%s", dest);
// 	return (0);
// }
