/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuster <jschuster@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 18:52:36 by jschuster         #+#    #+#             */
/*   Updated: 2025/03/20 23:53:43 by jschuster        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *ptr1 = (unsigned char *)s1;
    unsigned char *ptr2 = (unsigned char *)s2;

    size_t i = 0;
    while (i < n) {
        if (ptr1[i] != ptr2[i]) {
            return ptr1[i] - ptr2[i];
        }
        i++;
    }
    return 0;
}

/*
 * Vergleicht zwei Speicherblöcke byteweise über die gegebene Länge.
 * Rückgabewerte:
 *   < 0 : block1 ist kleiner als block2
 *     0 : Beide Speicherblöcke sind gleich
 *   > 0 : block1 ist größer als block2
 */

#include <stdio.h>

int main() 
{
    char str1[] = "Pookie";
    char str2[] = "Pooki";

    int result = ft_memcmp(str1, str2, 10);

    if (result == 0)
        printf("Die Speicherbereiche sind gleich.\n");
    else if (result > 0)
        printf("str1 ist größer als str2.\n");
    else
        printf("str1 ist kleiner als str2.\n");

    return 0;
}

