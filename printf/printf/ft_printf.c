/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuste <jschuste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 19:09:25 by jschuste          #+#    #+#             */
/*   Updated: 2025/05/23 20:53:23 by jschuste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_handle_format(va_list args, const char format)
{
	if (format == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (format == 's')
		return (ft_print_string(va_arg(args, char *)));
	else if (format == 'p')
		return (ft_print_ptr(va_arg(args, void *)));
	else if (format == 'd' || format == 'i')
		return (ft_print_int(va_arg(args, int)));
	else if (format == 'u')
		return (ft_print_unsigned(va_arg(args, unsigned int)));
	else if (format == 'x' || format == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), format == 'X'));
	else if (format == '%')
		return (write(1, "%", 1));
	return (0);
}

static int	ft_process_format(const char **format, va_list args, int *len)
{
	int	ret;

	if (*(*format) == '%')
	{
		ret = ft_handle_format(args, *(++(*format)));
		if (ret == -1)
			return (-1);
		*len += ret;
	}
	else
	{
		ret = write(1, *format, 1);
		if (ret == -1)
			return (-1);
		*len += ret;
	}
	(*format)++;
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;
	int		status;

	va_start(args, format);
	len = 0;
	while (*format)
	{
		status = ft_process_format(&format, args, &len);
		if (status == -1)
		{
			va_end(args);
			return (-1);
		}
	}
	va_end(args);
	return (len);
}

// #include "ft_printf.h"
// #include <stdio.h>

// int	main(void)
// {
// 	int	ft_len;
// 	int	real_len;

// 	ft_len = ft_printf("FT: %c %s %p %d\n", 'A', "test", &ft_len, -42);
// 	real_len = printf("REAL: %c %s %p %d\n", 'A', "test", &ft_len, -42);
// 	printf("Lengths: FT=%d, REAL=%d\n", ft_len, real_len);
// 	return (0);
// }
