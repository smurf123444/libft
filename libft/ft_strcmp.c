/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmannin <christopherdonaldmanning@gm      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 23:39:17 by chmannin          #+#    #+#             */
/*   Updated: 2018/07/25 08:41:28 by chmannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *s1, const char *s2)
{
	char	*a;
	char	*b;

	a = (char *)s1;
	b = (char *)s2;
	while (*a != '\0' && *b != '\0')
	{
		if (*a != *b)
			return ((unsigned char)*a - (unsigned char)*b);
		a++;
		b++;
	}
	if (*a != *b)
		return ((unsigned char)*a - (unsigned char)*b);
	return (0);
}
