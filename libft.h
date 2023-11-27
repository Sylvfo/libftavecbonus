/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sforster <sforster@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:06:33 by sforster          #+#    #+#             */
/*   Updated: 2023/11/07 14:50:41 by sforster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_list
{
	void			*content;
	size_t			*content_size;
	struct s_list	*next;
}					t_list;
// check and manipulate characters

int				ft_isalnum(int c);
// verifie si (c) est un chiffre ou une lettre dans ascii
int				ft_isalpha(int c);
// verifie si (c) est une lettre dans ascii
int				ft_isascii(int c);
// verifie si (c) est dans ascii
int				ft_isdigit(int c);
// verifie si (c) est un chiffre dans ascii
int				ft_isprint(int c);
// verifie si (c) est imprimable dans ascii
int				ft_tolower(int c);
// met une majuscule en minuscule
int				ft_toupper(int c);
// met une minuscule en majuscule

// manipulate string
int				ft_strlen(const char *str);
// retourne la taille d une string
int				ft_strncmp(const char *s1, const char *s2, size_t n);
// compare 2 string jusqu a la taille n. ret 0, neg ou pos
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
// applique une fonction (f) a tous les char d'une string(s)
char			*ft_strchr(const char *s, int c);
// recherche 1ere occurence du charactere (c) dans une string (s)
char			*ft_strjoin(char const *s1, char const *s2);
// joint deux string (s1) et (s2) en gerant la memoire alloue
char			*ft_strtrim(char const *s1, char const *set);
// enleve tous  les characteres du set au debut et a la fin de string s1
char			**ft_split(char const *s, char c);
// retourne un tableau ou (s) est separe par (c)(nouvelle ligne)
char			*ft_substr(char const *s, unsigned int start, size_t len);
// retour une string prise des start dans string (s) de taille len
unsigned int	ft_strlcat(char *dst, const char *src, size_t dstsize);
// concatene deux string max dstsize. retourne taille operation
int				ft_strlcpy(char *dst, const char *src, size_t dstsize);
// copie source dans la destination et retourne taille source
char			*ft_strnstr(const char *hays, const char *needle, size_t l);
// cherche une aiguille string dans max l de botte de foin. 
char			*ft_strrchr(const char *s, int c);
// recherche la derniere occurence d une char dans une string.
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
// applique une fonction a tous char d une string et retourne nouvelle string

// manipulate memory
int				ft_memcmp(const void *s1, const void *s2, size_t n);
// compare 2 blocs de memoire jusqu a la taille n. ret 0, neg ou pos
void			*ft_memchr(const void *s, int c, size_t n);
// cherche 1er (c) dans la taille (n) d un bloque de memoire (s)
void			ft_bzero(void *s, size_t n);
// rempli la memoire de (s) avec 0 jusqu'a n 
void			*ft_memcpy(void *dst, const void *src, size_t n);
// Copie (src) dans (dest) jusqu a (n)
void			*ft_memmove(void *dst, const void *src, size_t len);
// Deplace (src) dans (dest) jusqu a (n)
void			*ft_memset(void *b, int c, size_t len);
// rempli la memoire de (s) avec char choisi (c) jusqu'a (len)  
void			*ft_calloc(size_t count, size_t size);
// alloue taille memoire remplie de zero (contrairement a malloc)
char			*ft_strdup(const char *s);
// attribue memoire a une string (s) avec malloc

// manipulate numbers
int				ft_atoi(const char *str);
// ascii to int. cherche 1er nombre dans un str. 
// ignore les espaces, accepte un + ou un -
// s arrete des que c'est autre chose qu un chiffre.

char			*ft_itoa(int n);
// integer to ascii. Converti un chiffre int (nb) en string de char.

// write to a file descriptor

void			ft_putchar_fd(char c, int fd);
// ecrit un caractere dans le (fd) file descriptor
void			ft_putstr_fd(char *s, int fd);
// ecrit une string (s) dans le (fd) file descriptor
void			ft_putendl_fd(char *s, int fd);
// comme putstr_fd, mais avec un aller a la ligne
void			ft_putnbr_fd(int n, int fd);
// ecrit un nombre int dans le (fd) file descriptor

#endif