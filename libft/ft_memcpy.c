/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmannin <christopherdonaldmanning@gm      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 20:04:06 by chmannin          #+#    #+#             */
/*   Updated: 2018/07/24 18:08:11 by chmannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*s;
	char	*x;
	size_t	i;

	s = (char *)dst;
	x = (char *)src;
	i = -1;
	while (++i < n)
		s[i] = x[i];
	return (dst);
}
