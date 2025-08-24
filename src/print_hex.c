/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmismai <ahmismai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 18:48:09 by ahmismai          #+#    #+#             */
/*   Updated: 2025/08/24 18:52:11 by ahmismai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	puthex_rec(unsigned long n, const char *base)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += puthex_rec(n / 16, base);
	count += pf_putchar(base[n % 16]);
	return (count);
}

int	pf_puthex(unsigned int n, int uppercase)
{
	const char	*base;

	if (uppercase)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	return (puthex_rec((unsigned long)n, base));
}
