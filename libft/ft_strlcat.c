/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmismai <ahmismai@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 11:52:19 by ahmismai          #+#    #+#             */
/*   Updated: 2025/08/19 15:23:04 by ahmismai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize <= dst_len)
		dst_len = dstsize;
	if (dst_len < dstsize)
	{
		i = dst_len;
		while (i + 1 < dstsize && *src)
		{
			dst[i] = *src;
			i++;
			src++;
		}
		dst[i] = '\0';
	}
	return (dst_len + src_len);
}
