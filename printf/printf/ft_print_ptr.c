/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuste <jschuste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 03:35:21 by jschuste          #+#    #+#             */
/*   Updated: 2025/05/13 20:54:47 by jschuste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(void *ptr)
{
	unsigned long	addr;
	int				len;
	int				ret;

	addr = (unsigned long)ptr;
	len = write(1, "0x", 2);
	if (len == -1)
		return (-1);
	if (addr == 0)
	{
		ret = write(1, "0", 1);
		if (ret == -1)
			return (-1);
		return (len + ret);
	}
	ret = ft_print_hex(addr, 0);
	if (ret == -1)
		return (-1);
	return (len + ret);
}
