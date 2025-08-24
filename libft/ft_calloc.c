/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmismai <ahmismai@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 13:44:23 by ahmismai          #+#    #+#             */
/*   Updated: 2025/08/19 19:20:16 by ahmismai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*ptr;
	size_t			total_size;
	size_t			i;
	unsigned char	*p;

	total_size = count * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	p = (unsigned char *)ptr;
	i = 0;
	while (i < total_size)
	{
		p[i] = 0;
		i++;
	}
	return (ptr);
}
