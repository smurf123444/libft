/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmannin <christopherdonaldmanning@gm      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 11:34:13 by chmannin          #+#    #+#             */
/*   Updated: 2018/07/15 11:41:28 by chmannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t hlen)
{
	size_t nlen;
	int	lastresult;

	if (*needle == '\0')
		return ((char*)haystack);
	nlen = ft_strlen(needle);
	lastresult = -1;
	while (nlen <= hlen && *haystack != '\0'
			&& (lastresult = ft_strncmp(haystack, needle, nlen)))
	{
		hlen--;
		haystack++;
	}
	if (lastresult != 0)
		return (NULL);
	else
		return ((char *)haystack);
}
