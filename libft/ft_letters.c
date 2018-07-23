/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_letters.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmannin <christopherdonaldmanning@gm      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 15:10:57 by chmannin          #+#    #+#             */
/*   Updated: 2018/07/23 15:12:37 by chmannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_letters(char const *s, int p, char c)
{
	int		k;

	k = 0;
	while (s[p] != c && s[p] != '\0')
	{
		k++;
		p++;
	}
	return (k);
}
