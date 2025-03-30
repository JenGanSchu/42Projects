/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuster <jschuster@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 22:32:05 by jschuster         #+#    #+#             */
/*   Updated: 2025/03/29 22:34:50 by jschuster        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int    i;

    /* Überprüfen, ob die Eingabe gültig ist */
    if (!s || !f)
        return;

    /* Funktion auf jeden Buchstaben anwenden */
    i = 0;
    while (s[i])
    {
        f(i, &s[i]); // Die Funktion erhält den Index und die Adresse des Zeichens
        i++;
    }
}

#include <stdio.h>
#include "libft.h"

/* Beispiel-Testfunktion für ft_striteri */
void einfache_funktion(unsigned int index, char *c)
{
    *c = *c + index; // Addiert den Index des Buchstabens zum aktuellen Buchstaben
}

int main(void)
{
    char str[] = "ABC";

    ft_striteri(str, einfache_funktion);
    printf("Veränderte Zeichenkette: %s\n", str);

    return (0);
}
