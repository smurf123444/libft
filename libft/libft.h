/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmannin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 22:05:22 by chmannin          #+#    #+#             */
/*   Updated: 2018/07/10 22:13:52 by chmannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

typedef	struct		s_list
{
	void				*content;
	size_t				content_size;
	struct s_list	*next;
}					t_list;

int					ft_isalpha(char c);
int					ft_atoi(const char *str);
int					ft_isblank(int c);
int					ft_isspace(int c);
size_t			ft_strlen(const char *s);
int					ft_isprint(int c);
int					ft_max(int x, int y);
int					ft_isascii(int chr);
char					*ft_itoa(int n);
int					ft_isalnum(int chr);


#endif
