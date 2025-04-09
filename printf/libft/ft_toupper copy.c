/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuste <jschuste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 17:09:37 by jschuste          #+#    #+#             */
/*   Updated: 2025/03/17 19:31:01 by jschuste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

// #include <stdio.h>

// int main(void)
// {
// 	char c = 'a'; //Test mit Kleinbuchstaben
// 	printf("Original: %c, Cap: %c\n", c, ft_toupper(c));

// 	c = 'A'; //Test mit Grossbuchstaben
// 	printf("Original: %c, Cap: %c\n", c, ft_toupper(c));

// 	c = '2'; //Test mit Zahl
// 	printf("Original: %c, Cap: %c\n", c, ft_toupper(c));

// 	return 0;
// }