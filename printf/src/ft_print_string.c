/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuste <jschuste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 03:06:15 by jschuste          #+#    #+#             */
/*   Updated: 2025/04/09 03:17:49 by jschuste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(char	*str)
{
	int	len;
	int	ret;

	if (!str)
		str = "0";
	len = ft_strlen(str);
	ret = write(1, str, len);
	if (ret == -1)
		return (-1);
	else
		return (len);
}