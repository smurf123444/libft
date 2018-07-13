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

void		*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*cur;

	if (len == 0)
		return(b)
			cur = (unsigned char)c;
	while (len--)
	{
	*cur = (unsigned char)c;
	if (len)
		cur++;
	}
	return (b);
}
