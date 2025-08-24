/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmismai <ahmismai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 18:59:52 by ahmismai          #+#    #+#             */
/*   Updated: 2025/08/24 19:24:32 by ahmismai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	dispatch_int(va_list ap, char sp)
{
	int	count;

	count = 0;
	if (sp == 'd' || sp == 'i')
		count += pf_putnbr(va_arg(ap, int));
	else if (sp == 'u')
		count += pf_putunbr(va_arg(ap, unsigned int));
	else if (sp == 'x')
		count += pf_puthex(va_arg(ap, unsigned int), 0);
	else if (sp == 'X')
		count += pf_puthex(va_arg(ap, unsigned int), 1);
	return (count);
}

static int	dispatch_other(va_list ap, char sp)
{
	int	count;

	count = 0;
	if (sp == 'c')
		count += pf_putchar((char)va_arg(ap, int));
	else if (sp == 's')
		count += pf_putstr(va_arg(ap, char *));
	else if (sp == 'p')
		count += pf_putptr(va_arg(ap, void *));
	else if (sp == '%')
		count += pf_putchar('%');
	else
		count += dispatch_int(ap, sp);
	return (count);
}

static int	handle_format(const char *fmt, va_list ap)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (fmt[i])
	{
		if (fmt[i] == '%' && fmt[i + 1])
		{
			count += dispatch_other(ap, fmt[i + 1]);
			i += 2;
			continue ;
		}
		count += pf_putchar(fmt[i]);
		i++;
	}
	return (count);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	int		count;

	if (!fmt)
		return (0);
	va_start(ap, fmt);
	count = handle_format(fmt, ap);
	va_end(ap);
	return (count);
}
