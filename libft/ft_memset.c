#include "libft.h"

void	*ft_memset(void *in, int data, size_t len)
{
	unsigned char *ptr;
	
	ptr = (unsigned char *)in;
	while (len-- > 0)
	*ptr++ = (unsigned char)data;
	return (in);
} 
