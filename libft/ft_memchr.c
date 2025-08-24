/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmismai <ahmismai@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 13:56:06 by ahmismai          #+#    #+#             */
/*   Updated: 2025/08/19 14:49:28 by ahmismai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		byte;
	size_t				i;

	ptr = (const unsigned char *)s;
	byte = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == byte)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}
