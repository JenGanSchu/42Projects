/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuste <jschuste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 19:52:30 by jschuste          #+#    #+#             */
/*   Updated: 2025/05/13 21:00:34 by jschuste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_hex_digit(unsigned long n, const char *digits)
{
	int	len;

	len = 0;
	if (n >= 16)
		len += ft_print_hex_digit(n / 16, digits);
	len += write(1, &digits[n % 16], 1);
	return (len);
}

int	ft_print_hex(unsigned long num, int uppercase)
{
	const char	*digits;

	if (uppercase)
		digits = "0123456789ABCDEF";
	else
		digits = "0123456789abcdef";
	if (num == 0)
		return (write(1, "0", 1));
	return (ft_print_hex_digit(num, digits));
}
