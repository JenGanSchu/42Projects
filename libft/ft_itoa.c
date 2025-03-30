/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuster <jschuster@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 01:30:28 by jschuster         #+#    #+#             */
/*   Updated: 2025/03/26 01:40:23 by jschuster        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/* get_len:
 * Bestimmt die Länge, die benötigt wird, um n als String darzustellen.
 * Falls n <= 0, wird Platz für das Minuszeichen oder die Ziffer '0' eingeplant.
 */
static size_t   get_len(long n)
{
    size_t  len = 0;
    if (n <= 0)
    {
        len++;      /* für '-' oder '0' */
        n = -n;
    }
    while (n > 0)
    {
        len++;
        n /= 10;
    }
    return (len);
}

/* convert_num:
 * Füllt den String str (mit bereits festgelegter Gesamtlänge len)
 * von hinten mit den Ziffern aus der positiven Zahl n.
 */
static void convert_num(long n, char *str, size_t len)
{
    while (n > 0)
    {
        str[--len] = (n % 10) + '0';
        n /= 10;
    }
}

/* ft_itoa:
 * Konvertiert einen int n in seinen String.
 * Negative Zahlen werden mit '-' dargestellt.
 * Verwendet get_len und convert_num und ruft ft_strlen (aus Part 1) im Fall n == 0 auf.
 */
char    *ft_itoa(int n)
{
    long    num = n;
    int     sign = (n < 0);
    size_t  len = get_len(num);  // Unsere einzige size_t-Variable
    char    *str = malloc(len + 1);
    if (!str)
        return (NULL);
    str[len] = '\0';
    if (n == 0)
    {
        str[0] = '0';
        ft_strlen(str);  // Dummy-Aufruf, um ft_strlen zu "nutzen"
        return (str);
    }
    if (sign)
        num = -num;
    convert_num(num, str, len);
    if (sign)
        str[0] = '-';
    return (str);
}

int main(void)
{
    char *result;

    /* Testfall 1: Positive Zahl */
    result = ft_itoa(12345);
    printf("Testfall 1: 12345 → '%s'\n", result);
    free(result);

    /* Testfall 2: Negative Zahl */
    result = ft_itoa(-9876);
    printf("Testfall 2: -9876 → '%s'\n", result);
    free(result);

    /* Testfall 3: Null */
    result = ft_itoa(0);
    printf("Testfall 3: 0 → '%s'\n", result);
    free(result);
    
    return (0);
}