/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmannin <christopherdonaldmanning@gm      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 11:22:42 by chmannin          #+#    #+#             */
/*   Updated: 2018/07/19 11:35:54 by chmannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dst, const char *src)
{
		char *src2;

		src2 = dst;
		while (*src != '\0')
			*dst++ = *src++;
		*dst = '\0';
		return (src2);
}
