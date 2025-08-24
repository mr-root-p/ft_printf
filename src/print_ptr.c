/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmismai <ahmismai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 18:48:13 by ahmismai          #+#    #+#             */
/*   Updated: 2025/08/24 18:52:45 by ahmismai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	pf_putptr(void *ptr)
{
	unsigned long	addr;
	int				count;
	char			buf[sizeof(unsigned long) * 2];
	const char		*base = "0123456789abcdef";
	int				i;

	if (!ptr)
		return ((int)write(1, "(nil)", 5));
	addr = (unsigned long)ptr;
	count = 0;
	count += (int)write(1, "0x", 2);
	i = 0;
	while (addr)
	{
		buf[i++] = base[addr % 16];
		addr /= 16;
	}
	while (i--)
		count += pf_putchar(buf[i]);
	return (count);
}
