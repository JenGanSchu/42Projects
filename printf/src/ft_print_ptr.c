/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuste <jschuste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 03:35:21 by jschuste          #+#    #+#             */
/*   Updated: 2025/04/09 04:22:53 by jschuste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_hex_prefix(void)
{
	return (write(1, "0x", 2));
}

static int	ft_print_hex_digit(unsigned long n)
{
	char	*hex_digits;
	int		len;

	hex_digits = "0123456789abcdef";
	len = 0;
	if (n >= 16)
		len += ft_print_hex_digit(n / 16);
	len += write(1, &hex_digits[n % 16], 1);
	return (len);
}

// Handle NULL Pointer
int	ft_print_ptr(void *ptr)
{
	int	ret;
	int	len;

	if (!ptr)
		return (write(1, "0x0", 3));

}
