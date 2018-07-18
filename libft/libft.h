/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmannin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 22:05:22 by chmannin          #+#    #+#             */
/*   Updated: 2018/07/19 12:39:45 by chmannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct 		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list *next;
}						t_list;

int					ft_isalpha(char c);
int					ft_atoi(const char *str);
int					ft_isblank(int c);
int					ft_isspace(int c);
void				ft_bzero(void *s, size_t n);
size_t			ft_strlen(const char *s);
int					ft_isprint(int c);
int					ft_max(int x, int y);
int					ft_isascii(int chr);
char					*ft_itoa(int n);
int					ft_isalnum(int chr);
int					ft_isdigit(int c);
char					*ft_strnew(size_t size);
void					*ft_memset(void *dst, int data, size_t len);
void					*ft_memchr(const void *src, int c, size_t len);
int					ft_memcmp(const void *s1, const void *s2, size_t len);
void					*ft_memset(void *b, int c, size_t len);
char					*ft_strcat(char *s1, const char *s2);
char					*ft_strchr(const char *s, int c);
int					ft_strcmp(const char *s1, const char *s2);
char					*ft_strdup(const char *s1);
char					*ft_strncat(char *s1, const char *s2, size_t len);
char				ft_strncmp(const char *s1, const char *s2, size_t len);
char					*ft_strnstr(const char *haystack, const char *needle, size_t len);
char					*ft_strrchr(const char *s, int c);
char					*ft_strstr(const char *s1, const char *s2);
int					ft_tolower(int c);
int					ft_toupper(int c);
void					ft_strrev(char *s);
char					*ft_strcpy(char *dst, const char *src);
void					*ft_memcpy(void *b, const void *c, size_t len);
void					*ft_memccpy(void *

#endif
