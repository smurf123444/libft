# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strncmp                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chmannin <christopherdonaldmanning@gm      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/16 23:42:03 by chmannin          #+#    #+#              #
#    Updated: 2018/07/16 23:46:50 by chmannin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t len)
{
	while (len > 0 && *s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
		len--;
	}
	if (len == 0)
		return (0);
	else
		return (*(unsigned char*)s1 - *(unsigned char*)s2);
}

