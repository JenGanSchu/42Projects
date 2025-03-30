/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuster <jschuster@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 23:09:50 by jschuster         #+#    #+#             */
/*   Updated: 2025/03/25 19:56:59 by jschuster        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *substr;
    size_t  i;

    if (!s)
        return (NULL); // Prüfen, ob `s` NULL ist

    i = 0; // Eine einzige `size_t` Variable wird verwendet, um die Länge zu berechnen
    while (s[i]) // Zeichenkettenlänge manuell berechnen
        i++;

    if (start >= i) // Wenn der Startindex außerhalb der Zeichenkette liegt
    {
        substr = (char *)malloc(1); // Speicher für leere Zeichenkette reservieren
        if (!substr)
            return (NULL);
        substr[0] = '\0'; // Nullterminierung setzen
        return (substr);
    }

    if (len > i - start) // Länge anpassen, falls nötig
        len = i - start;

    substr = (char *)malloc(sizeof(char) * (len + 1)); // Speicher allokieren
    if (!substr)
        return (NULL);

    i = 0; // Die gleiche Variable `i` für die Schleifensteuerung
    while (i < len && s[start + i]) // Zeichen manuell kopieren
    {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = '\0'; // Nullterminierung setzen

    return (substr);
}

#include <stdio.h>

int main()
{
    char *s = "Libft ist wahnsinn..";
    char *sub;

    sub = ft_substr(s, 6, 8); // Erwartetes Ergebnis: "ist sup"
    printf("Substring: '%s'\n", sub);

    free(sub); // Speicher freigeben
    return (0);
}
