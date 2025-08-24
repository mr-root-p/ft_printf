/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmismai <ahmismai@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 14:18:44 by ahmismai          #+#    #+#             */
/*   Updated: 2025/08/11 14:49:43 by ahmismai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	c1;
	unsigned char	c2;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		c1 = (unsigned char)s1[i];
		c2 = (unsigned char)s2[i];
		if (c1 != c2)
			return ((int)(c1 - c2));
		if (c1 == '\0')
			break ;
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("%d\n", ft_strncmp("abc", "abc", 3));
// 	printf("%d\n", ft_strncmp("abc", "abd", 3));
// 	printf("%d\n", ft_strncmp("abd", "abc", 3));
// }
