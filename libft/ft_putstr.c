/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmannin <christopherdonaldmanning@gm      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 10:15:43 by chmannin          #+#    #+#             */
/*   Updated: 2018/07/23 16:02:48 by chmannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putchar(char *c);

void	ft_putstr(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
	  ft_putchar(&str[i]);
	  i++;
	}
}
