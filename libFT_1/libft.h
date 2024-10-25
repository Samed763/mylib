#ifndef LIBFT_H
#define LIBFT_H

#include    <stdlib.h>
#include    <unistd.h>
#include    <stdio.h>

int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);

size_t	ft_strlen(const char *str);

char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);

int	ft_atoi(const char *str);

int	ft_strncmp(const char *s1, const char *s2, size_t n);


void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

#endif