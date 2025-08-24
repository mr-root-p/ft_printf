/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmismai <ahmismai@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 10:00:00 by ahmismai          #+#    #+#             */
/*   Updated: 2025/08/19 14:44:39 by ahmismai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	*free_all(char **array, size_t w_i)
{
	size_t	i;

	i = 0;
	while (i < w_i)
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

static size_t	word_counter(char const *s, char c)
{
	size_t	i;
	size_t	w_i;

	i = 0;
	w_i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			w_i++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (w_i);
}

static char	**word_filler(char **array, char const *s, char sep, size_t word)
{
	size_t	i;
	size_t	w_i;
	size_t	start;

	i = 0;
	w_i = 0;
	while (w_i < word)
	{
		while (s[i] == sep)
			i++;
		start = i;
		while (s[i] && s[i] != sep)
			i++;
		array[w_i] = ft_substr(s, start, i - start);
		if (!array[w_i])
			return (free_all(array, w_i));
		w_i++;
	}
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	word;

	if (!s)
		return (NULL);
	word = word_counter(s, c);
	array = (char **)malloc((word + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	array = word_filler(array, s, c, word);
	if (array)
		array[word] = NULL;
	return (array);
}
