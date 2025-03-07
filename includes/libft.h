/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmetee-b <cmetee-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:11:23 by cmetee-b          #+#    #+#             */
/*   Updated: 2025/02/03 15:53:49 by cmetee-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdint.h>
# include <limits.h>
# include <stddef.h>
# include <stdarg.h>

/* fonction get_next_line */
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE  42

# endif

char	*get_next_line(int fd);
int		ft_strlengnl(char *s);
char	*find_chargnl(const char *s, int c);
char	*ft_strjoingnl(char *str1, char *str2);

/* fonctions de la LIBC*/
char	*ft_strnstr(const char *big, const char *little, size_t len);
size_t	ft_strlcpy(char *dest, const char *src, size_t dsize);
size_t	ft_strlcat(char *dest, const char *src, size_t dsize);
void	*ft_memmove(void *d, const void *s, size_t n);
void	*ft_memcpy(void *dest, const void *scr, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strdup(const char *s);
char	*ft_strrchr(const char *s, int c);
void	*ft_calloc(size_t n, size_t size);
char	*ft_strchr(const char *s, int c);
void	ft_bzero(void *s, size_t n);
size_t	ft_strlen(const char *s);
int		ft_atoi(const char *nptr);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

/* fonctions supplementaires */
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putstr_fd(const char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

/* Fonctions Bonus : struct listes chainees */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);

/* la fonction My_printf */
int		ft_printf(const char *format, ...);
int		ft_conv_base(char spec, long n, int base);
int		ft_put_adress_ptr(void *ptr);
int		ft_putstr(char *str);
int		ft_putchar(char c);
int		ft_putnbr(int nbr);

#endif
