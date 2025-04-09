/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuste <jschuste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 20:25:17 by jschuste          #+#    #+#             */
/*   Updated: 2025/03/12 20:29:48 by jschuste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int d)
{
	if (d >= '0' && d <= '9')
		return (1);
	return (0);
}

// #include "libft.h"
// #include <stdio.h>

// int main(void)
// {
//     printf("Testing '5': %d\n", ft_isdigit('5'));  // Erwartet: 1
//     printf("Testing 'A': %d\n", ft_isdigit('A'));  // Erwartet: 0
//     printf("Testing '!': %d\n", ft_isdigit('!'));  // Erwartet: 0
//     printf("Testing '0': %d\n", ft_isdigit('0'));  // Erwartet: 1
//     return (0);
// }
