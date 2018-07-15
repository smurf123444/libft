/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmannin <christopherdonaldmanning@gm      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 20:03:46 by chmannin          #+#    #+#             */
/*   Updated: 2018/07/12 20:03:49 by chmannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *in, int data, size_t len)
{
	unsigned char *ptr;
	
	ptr = (unsigned char *)in;
	while (len-- > 0)
	*ptr++ = (unsigned char)data;
	return (in);
} 