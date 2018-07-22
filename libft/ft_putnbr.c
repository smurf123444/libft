/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmannin <christopherdonaldmanning@gm      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 10:38:29 by chmannin          #+#    #+#             */
/*   Updated: 2018/07/22 10:43:45 by chmannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	char	num[20];
	int			i;
	int			sign;

	if (n == 0)
		write(1, "0", 1);
	else if (n < 0)
		write(1, "-", 1);
	sign = (n > 0) ? 1 : -1;
	i = 0;
	while (n)
	{
		num[i++] = '0' + (n % 10) * sign;
		n /= 10;
	}
	while (--i >= 0)
		write(1, &(num[i]), 1);
}
