/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuste <jschuste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 17:07:49 by jschuste          #+#    #+#             */
/*   Updated: 2025/03/26 17:37:15 by jschuste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	vorzeichen;
	int	ergebnis;

	i = 0;
	vorzeichen = 1;
	ergebnis = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			vorzeichen = -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ergebnis = ergebnis * 10 + (str[i] - '0');
		i++;
	}
	return (ergebnis * vorzeichen);
}
// #include <stdio.h>

// int	ft_atoi(const char *str);

// int main(void)
// {
// 	printf("Test 1: %d (Erwartet: 123)\n", ft_atoi("123"));
// 	printf("Test 1: %d (Erwartet: -42)\n", ft_atoi("    -42"));
// 	printf("Test 1: %d (Erwartet: 56)\n", ft_atoi("56"));

// 	return (0);
// }