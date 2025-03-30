/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuster <jschuster@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 22:26:46 by jschuster         #+#    #+#             */
/*   Updated: 2025/03/29 22:29:31 by jschuster        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char            *result;
    unsigned int    i;

    /* Überprüfen, ob die Eingabe gültig ist */
    if (!s || !f)
        return (0);

    /* Speicherplatz für die neue Zeichenkette allokieren */
    result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (!result)
        return (0);

    /* Zeichenweise die Funktion anwenden */
    i = 0;
    while (s[i])
    {
        result[i] = f(i, s[i]);
        i++;
    }

    /* Null-terminierte Zeichenkette abschließen */
    result[i] = '\0';
    return (result);
}

// #include <stdio.h>
// #include "libft.h"

// char einfache_funktion(unsigned int index, char c)
// {
//     return c + index; // Addiert den Index einfach zum Buchstaben
// }

// int main(void)
// {
//     char *original = "ABC";
//     char *ergebnis;

//     ergebnis = ft_strmapi(original, einfache_funktion);
//     if (ergebnis)
//     {
//         printf("Original: %s\n", original);
//         printf("Ergebnis: %s\n", ergebnis);
//         free(ergebnis); // Den Speicher freigeben
//     }
//     else
//     {
//         printf("Fehler: Konnte keinen Speicher allokieren.\n");
//     }

//     return (0);
// }
