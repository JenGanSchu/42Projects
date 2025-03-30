/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuster <jschuster@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 16:57:42 by jschuster         #+#    #+#             */
/*   Updated: 2025/03/17 19:30:43 by jschuster        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}

// #include <stdio.h>
// #include "libft.h"

// int main(void)
// {
//     char c = 'a'; // Test mit Kleinbuchstaben
//     printf("Original: %c, Großbuchstabe: %c\n", c, ft_toupper(c));

//     c = 'A'; // Test mit Großbuchstaben
//     printf("Original: %c, Großbuchstabe: %c\n", c, ft_toupper(c));

//     c = '1'; // Test mit einer Zahl
//     printf("Original: %c, Großbuchstabe: %c\n", c, ft_toupper(c));

//      return 0;
// }

