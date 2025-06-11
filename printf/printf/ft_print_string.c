/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuste <jschuste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 03:06:15 by jschuste          #+#    #+#             */
/*   Updated: 2025/05/13 20:36:28 by jschuste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(char *str)
{
	int	count;
	int	ret;

	if (str == NULL)
	{
		ret = write(1, "(null)", 6);
		return (ret);
	}
	count = 0;
	while (str[count])
	{
		ret = write(1, &str[count], 1);
		if (ret == -1)
			return (-1);
		count++;
	}
	return (count);
}
