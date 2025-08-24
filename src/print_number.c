/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmismai <ahmismai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 18:48:11 by ahmismai          #+#    #+#             */
/*   Updated: 2025/08/24 18:52:27 by ahmismai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	putnbr_rec(long n)
{
	int	count;

	count = 0;
	if (n > 9)
		count += putnbr_rec(n / 10);
	count += pf_putchar((char)('0' + (n % 10)));
	return (count);
}

int	pf_putnbr(int n)
{
	long	ln;
	int		count;

	ln = (long)n;
	count = 0;
	if (ln < 0)
	{
		count += pf_putchar('-');
		ln = -ln;
	}
	count += putnbr_rec(ln);
	return (count);
}

static int	putunbr_rec(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
		count += putunbr_rec(n / 10);
	count += pf_putchar((char)('0' + (n % 10)));
	return (count);
}

int	pf_putunbr(unsigned int n)
{
	return (putunbr_rec(n));
}
