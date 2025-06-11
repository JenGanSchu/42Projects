/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuste <jschuste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 06:02:25 by jschuste          #+#    #+#             */
/*   Updated: 2025/05/21 16:43:23 by jschuste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Prints numbers recursively (base 10)
static int	ft_print_num(long n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len += write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		len += ft_print_num(n / 10);
	len += write(1, &"0123456789"[n % 10], 1);
	return (len);
}

int	ft_print_int(int n)
{
	if (n == -2147483648)
	{
		return (write(1, "-2147483648", 11));
	}
	return (ft_print_num((long)n));
}
