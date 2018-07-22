/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmannin <christopherdonaldmanning@gm      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 10:48:50 by chmannin          #+#    #+#             */
/*   Updated: 2018/07/22 10:49:25 by chmannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	num[20];
	int		i;
	int		sign;

	if (n == 0)
		write(fd, "0", 1);
	else if (n < 0)
		write(fd, "-", 1);
	sign = (n > 0) ? 1 : -1;
	i = 0;
	while (n)
	{
		num[i++] = '0' + (n % 10) * sign;
		n /= 10;
	}
	while (--i >= 0)
		write(fd, &(num[i]), 1);
}
