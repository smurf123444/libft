/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmannin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 18:59:11 by chmannin          #+#    #+#             */
/*   Updated: 2018/07/25 18:59:14 by chmannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	if (s == NULL)
		return ;
	while (*s != '\0')
	{
		*s = '\0';
		s++;
	}
}
