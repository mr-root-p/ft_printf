/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmismai <ahmismai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 18:48:07 by ahmismai          #+#    #+#             */
/*   Updated: 2025/08/24 18:51:54 by ahmismai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	pf_strlen(const char *s)
{
	int	len;

	len = 0;
	while (s && s[len])
		len++;
	return (len);
}

int	pf_putchar(char c)
{
	return (write(1, &c, 1));
}

int	pf_putstr(char *s)
{
	int	len;

	if (!s)
		return (write(1, "(null)", 6));
	len = pf_strlen(s);
	return (write(1, s, len));
}
