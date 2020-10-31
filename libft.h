#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct	s_list
{
	void	*list;
	size_t	list_size;
	struct s_list	*next;
}	t_list;

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *b, ssize_t len);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t dsize);
char	*ft_strchr(const char *str, int sym);
char	*ft_strrchr(const char *str, int sym);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
char	*ft_substr(char const  *s, unsigned int start, size_t n);
char	*ft_strjoin(char const *s1, char const *s2);
#endif
