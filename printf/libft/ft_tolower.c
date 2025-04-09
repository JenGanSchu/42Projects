/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuste <jschuste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 19:31:47 by jschuste          #+#    #+#             */
/*   Updated: 2025/03/17 19:34:53 by jschuste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

// #include <stdio.h>

// int main(void)
// {
// 	char c = 'a'; //Test mit Kleinbuchstaben
// 	printf("Original: %c, Cap: %c\n", c, ft_tolower(c));

// 	c = 'A'; //Test mit Grossbuchstaben
// 	printf("Original: %c, Cap: %c\n", c, ft_tolower(c));

// 	c = '2'; //Test mit Zahl
// 	printf("Original: %c, Cap: %c\n", c, ft_tolower(c));

// 	return 0;
// }
