/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmismai <ahmismai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 18:59:42 by ahmismai          #+#    #+#             */
/*   Updated: 2025/08/24 19:14:50 by ahmismai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"

int		ft_printf(const char *format, ...);
int		pf_putchar(char c);
int		pf_putstr(char *s);
int		pf_putnbr(int n);
int		pf_putunbr(unsigned int n);
int		pf_puthex(unsigned int n, int uppercase);
int		pf_putptr(void *ptr);

#endif
