/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmannin <christopherdonaldmanning@gm      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 20:04:06 by chmannin          #+#    #+#             */
/*   Updated: 2018/07/12 20:08:03 by chmannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;

	i = 0;
	while (n > i)
	{
		((unsigned char *)src)[i] = ((unsigned char *)dst)[i];
		i++;
	}
	return (dst);
}
