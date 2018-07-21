/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmannin <christopherdonaldmanning@gm      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 15:46:15 by chmannin          #+#    #+#             */
/*   Updated: 2018/07/20 15:48:10 by chmannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int		i;

	if (s == NULL || f == NULL)
		return ;
	i = -1;
	while (*s != '\0')
	{
		f((unsigned char)(++i), s);
		s++;
	}
