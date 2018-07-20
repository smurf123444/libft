/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmannin <christopherdonaldmanning@gm      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 23:54:04 by chmannin          #+#    #+#             */
/*   Updated: 2018/07/19 23:55:54 by chmannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (sr[i] != '\0' && i < len)
	{
		dst[i] = src[i]
			i++;
	}
	while (i < len)
		dst[i++] = '\0';
	return (dst);
}
