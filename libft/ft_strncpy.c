/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuster <jschuster@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 01:19:51 by jschuster         #+#    #+#             */
/*   Updated: 2025/03/26 01:19:55 by jschuster        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
 * ft_strncpy kopiert höchstens n Zeichen aus dem String src in dst.
 * Wenn src kürzer als n Zeichen ist, wird dst mit '\0' aufgefüllt,
 * sodass insgesamt n Zeichen geschrieben werden.
 * Der Zielstring dst wird nicht garantiert nullterminiert,
 * falls src länger als oder gleich n Zeichen ist.
 */
char    *ft_strncpy(char *dst, const char *src, size_t n)
{
    size_t i;  // Schleifenindex

    i = 0;
    // Kopiere Zeichen, solange wir nicht an n sind und src nicht endet.
    while (i < n && src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    // Fülle den Rest mit Nullzeichen, falls src kürzer als n war.
    while (i < n)
    {
        dst[i] = '\0';
        i++;
    }
    return (dst);  // Gib den Zielzeiger zurück
}
