/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmannin <christopherdonaldmanning@gm      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 15:34:41 by chmannin          #+#    #+#             */
/*   Updated: 2018/07/20 15:38:12 by chmannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int		i;

	if (s1 == NULL || s2 == NULL)
			return (0);
			if (s1[0] == '\0' && s2 [0] == '\0')
			return (1);
		i = 0;
		while (s1[0] && s2[i] && s1[i] == s2[i])
		{
			if (s1[i + 1] == '\0' && s2[i + 1] == '\0')
				return (1);
			i++;
		}
		return (0);
}
