/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuste <jschuste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 16:47:48 by jschuste          #+#    #+#             */
/*   Updated: 2025/03/31 16:50:49 by jschuste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_len(long n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static void	convert_num(long n, char *str, size_t len)
{
	while (n > 0)
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	long	num;
	int		sign;
	char	*str;
	size_t	len;

	num = n;
	sign = (n < 0);
	len = get_len(num);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		ft_strlen(str);
		return (str);
	}
	if (sign)
		num = -num;
	convert_num(num, str, len);
	if (sign)
		str[0] = '-';
	return (str);
}

// int main(void)
// {
//     char *result;

//     /* Testfall 1: Positive Zahl */
//     result = ft_itoa(12345);
//     printf("Testfall 1: 12345 → '%s'\n", result);
//     free(result);

//     /* Testfall 2: Negative Zahl */
//     result = ft_itoa(-9876);
//     printf("Testfall 2: -9876 → '%s'\n", result);
//     free(result);

//     /* Testfall 3: Null */
//     result = ft_itoa(0);
//     printf("Testfall 3: 0 → '%s'\n", result);
//     free(result);

//     return (0);
// }