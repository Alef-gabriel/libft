#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;

	i = 0;
	if (!dest || !src)
		return (NULL);
	if (dest > src)
	{
		i = n - 1;
		while (i >= 0)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i--;
		}
	}
	else
	{
		while (n - i)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i++;
		}
	}
	return ((void *) dest);
}
