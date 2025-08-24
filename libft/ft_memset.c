/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmismai <ahmismai@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 10:39:03 by ahmismai          #+#    #+#             */
/*   Updated: 2025/08/19 14:43:12 by ahmismai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t num)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (num > 0)
	{
		*ptr = (unsigned char)c;
		ptr++;
		num--;
	}
	return (s);
}
