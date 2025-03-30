/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuster <jschuster@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 17:13:33 by jschuster         #+#    #+#             */
/*   Updated: 2025/03/17 17:41:25 by jschuster        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + 32);
    return (c);
}

#include <stdio.h>
#include "libft.h"

int main(void)
{
    char c = 'a'; // Test mit Kleinbuchstaben
    printf("Original: %c, Großbuchstabe: %c\n", c, ft_tolower(c));

    c = 'A'; // Test mit Großbuchstaben
    printf("Original: %c, Großbuchstabe: %c\n", c, ft_tolower(c));

    c = '1'; // Test mit einer Zahl
    printf("Original: %c, Großbuchstabe: %c\n", c, ft_tolower(c));

    return 0;
}