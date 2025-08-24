/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmismai <ahmismai@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 18:25:26 by ahmismai          #+#    #+#             */
/*   Updated: 2025/08/19 18:33:45 by ahmismai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <ctype.h>

/* Checks if character is alphabetic (A-Z or a-z) */
int		ft_isalpha(int c);

/* Checks if character is a digit (0-9) */
int		ft_isdigit(int c);

/* Checks if character is alphanumeric (A-Z, a-z, 0-9) */
int		ft_isalnum(int c);

/* Checks if value is an ASCII character (0-127) */
int		ft_isascii(int c);

/* Checks if character is printable (space to ~) */
int		ft_isprint(int c);

/* Returns the length of a string (without '\0') */
size_t	ft_strlen(const char *s);

/* Fills memory with a byte value (len bytes) */
void	*ft_memset(void *b, int c, size_t len);

/* Sets n bytes of memory to 0 */
void	ft_bzero(void *s, size_t n);

/* Copies n bytes from src to dst (no overlap) */
void	*ft_memcpy(void *dst, const void *src, size_t n);

/* Copies len bytes from src to dst (handles overlap) */
void	*ft_memmove(void *dst, const void *src, size_t len);

/* Copies string from src to dst with size limit (adds '\0') */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

/* Appends src to dst with size limit (adds '\0') */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

/* Converts lowercase letter to uppercase */
int		ft_toupper(int c);

/* Converts uppercase letter to lowercase */
int		ft_tolower(int c);

/* Finds first occurrence of char c in string */
char	*ft_strchr(const char *s, int c);

/* Finds last occurrence of char c in string */
char	*ft_strrchr(const char *s, int c);

/* Compares first n chars of two strings */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/* Finds first occurrence of byte c in first n bytes of memory */
void	*ft_memchr(const void *s, int c, size_t n);

/* Compares first n bytes of two memory blocks */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/* Finds first occurrence of substring needle in haystack (within len) */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

/* Converts string to integer */
int		ft_atoi(const char *str);

/* Returns substring from s starting at start, length len */
char	*ft_substr(char const *s, unsigned int start, size_t len);

/* Joins two strings into a new one */
char	*ft_strjoin(char const *s1, char const *s2);

/* Trims set chars from start and end of s1 */
char	*ft_strtrim(char const *s1, char const *set);

/* Splits string s by delimiter c into array of strings */
char	**ft_split(char const *s, char c);

/* Converts int to string */
char	*ft_itoa(int n);

/* Applies function f to each char of s (creates new string) */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/* Applies function f to each char of s (in-place) */
void	ft_striteri(char *s, void (*f)(unsigned int, char *));

/* Writes a char to file descriptor fd */
void	ft_putchar_fd(char c, int fd);

/* Writes string to file descriptor fd */
void	ft_putstr_fd(char *s, int fd);

/* Writes string + newline to file descriptor fd */
void	ft_putendl_fd(char *s, int fd);

/* Writes integer to file descriptor fd */
void	ft_putnbr_fd(int n, int fd);

/* Allocates memory for an array and initializes bytes to 0 */
void	*ft_calloc(size_t count, size_t size);

/* Creates a new copy of a string in separate memory */
char	*ft_strdup(const char *src);

#endif
