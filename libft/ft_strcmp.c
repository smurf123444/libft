/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmannin <christopherdonaldmanning@gm      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 23:39:17 by chmannin          #+#    #+#             */
/*   Updated: 2018/07/16 23:41:39 by chmannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	while (s1 != '\0' && *s1 == *s2)
		{
			s1++;
			s2++;
		}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
