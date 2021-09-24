/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krisocam <krisocam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 12:26:07 by krisocam          #+#    #+#             */
/*   Updated: 2021/09/21 18:19:23 by krisocam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32
# endif

# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdarg.h>
# include <stdlib.h>
# define SYMBOL "csdiupxX%"
# define MAX_FD 4096

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

typedef struct s_param
{
	int	minus;
	int	zero;
	int	width;
	int	size;
}				t_param;

int				ft_isspace(char c);
int				ft_isalnum(int ch);
int				ft_isalpha(int ch);
int				ft_isascii(int ch);
int				ft_isprint(int ch);
int				ft_toupper(int ch);
int				ft_tolower(int ch);
int				ft_isdigit(int ch);
int				ft_atoi(const char *str);
int				ft_countw(char *str);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
int				ft_strncmp(const char *s1, const char *s2, size_t n);

void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t len);
void			*ft_memchr(const void *str, int c, size_t n);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			*ft_calloc(size_t count, size_t size);
void			ft_putnbr_fd(int n, int fd);

char			ft_putstr(char *str);
char			*ft_strcpy(char *dest, const char *src);
char			*ft_strdup(const char *src);
char			*ft_strncpy(char *dest, const char *src, unsigned int n);
char			*ft_strnstr(const char *str, const char *to_find, size_t len);
char			*ft_strrchr(const char *str, int c);
char			*ft_strrev(char *str);
char			*ft_itoa(int n);
char			**ft_split(char const *str, char ch);
char			*ft_strchr(const char *str, int c);
char			*ft_substr(char const *str, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strmapi(char const *s1, char (*f)(unsigned int, char));
char			*ft_strtrim(char const *s1, char const *set);

size_t			ft_strlen(const char *str);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);
size_t			ft_strlcat(char *dest, const char *src, size_t size);

int				ft_lstsize(t_list *lst);
t_list			*ft_lstnew(void *content);
t_list			*ft_lstlast(t_list *list);
void			ft_lstadd_front(t_list **list, t_list *new);
void			ft_lstadd_back(t_list **alst, t_list *new);
void			ft_lstdelone(t_list *list, void (*del) (void*));
void			ft_lstclear(t_list **list, void (*del) (void*));
void			ft_lstiter(t_list *list, void (*f) (void*));
int				get_next_line(int fd, char **line);
void			ft_putnbr(int nb);
void			ft_putchar(char c);

#endif
