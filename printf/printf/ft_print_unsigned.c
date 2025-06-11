/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuste <jschuste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 19:46:53 by jschuste          #+#    #+#             */
/*   Updated: 2025/05/06 19:51:32 by jschuste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_putunbr(unsigned int n)
{
	int	len;

	len = 0;
	if (n >= 10)
		len += ft_putunbr(n / 10);
	len += write(1, &"0123456789"[n % 10], 1);
	return (len);
}

int	ft_print_unsigned(unsigned int n)
{
	return (ft_putunbr(n));
}
