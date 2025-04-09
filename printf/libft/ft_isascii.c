/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuste <jschuste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 16:27:01 by jschuste          #+#    #+#             */
/*   Updated: 2025/03/14 18:54:11 by jschuste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int a)
{
	if (a >= 0 && a <= 127)
		return (1);
	return (0);
}

// #include <stdio.h>

// // Deklaration der ft_isascii-Funktion
// int ft_isascii(int a);

// int main(void)
// {
//     printf("ft_isascii(0) = %d\n", ft_isascii(0));     // Erwartet: 1
//     printf("ft_isascii(127) = %d\n", ft_isascii(127)); // Erwartet: 1
//     printf("ft_isascii(128) = %d\n", ft_isascii(128)); // Erwartet: 0
//     printf("ft_isascii(-1) = %d\n", ft_isascii(-1));   // Erwartet: 0
//     return (0);
// }