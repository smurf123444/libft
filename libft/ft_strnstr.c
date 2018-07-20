/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmannin <christopherdonaldmanning@gm      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 23:45:34 by chmannin          #+#    #+#             */
/*   Updated: 2018/07/19 23:50:59 by chmannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*s1;
	char	*s2;
	size_t	i;

	s1 = (char *)haystack;
	s2 = (char *)needle;
	if (*s2 == '\0')
		return (s1);
	while (*s1 != '\0' && len)
	{
		if (*s1 == *s2)
		{
			i = 0;
				while (*(s1 + i) == *(s2 + i) && len - i)
				{
					i++;
					if (*(s2 + i) == '\0')
						return (s1);
				}
		}
		len--;
		s1++;
	}
	return (NULL);
}
