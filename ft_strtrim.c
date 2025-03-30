/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuster <jschuster@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 21:24:28 by jschuster         #+#    #+#             */
/*   Updated: 2025/03/25 23:21:16 by jschuster        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>         // Für malloc
#include "libft.h"          // Enthält die Deklarationen von ft_strchr und ft_strlen

char *ft_strtrim(char const *s1, char const *set)
{
    int st;                // st: Startindex für den ersten Charakter in s1, der nicht in set ist
    int en;                // en: Endindex (ein Platz nach dem letzten Zeichen, das nicht in set ist)
    size_t i;              // i: Einzige size_t-Variable, die für das Kopieren der Zeichen verwendet wird
    char *res;             // res: Zeiger auf den neu allokierten Speicher, der den getrimmten String enthalten wird

    if (!s1 || !set)       // Überprüft, ob s1 oder set NULL ist
        return (NULL);     // Bei falschen Parametern wird NULL zurückgegeben
    st = 0;                // Initialisiere st auf 0 (Beginn des Strings)
    while (s1[st] && ft_strchr(set, s1[st]))  
        // s1[st] wird geprüft: solange das Zeichen existiert und in set enthalten ist,
        // wird st erhöht, um den ersten gültigen (nicht zu trimmenden) Charakter zu finden
        st++;
    en = (int)ft_strlen(s1);    // Bestimme die Länge von s1 (als Endindex, ein Platz nach dem letzten Zeichen)
    while (en > st && ft_strchr(set, s1[en - 1]))
        // Solange en größer als st ist und das Zeichen vor en in set vorkommt,
        // wird en verringert, um das Ende des relevanten Bereichs zu finden
        en--;
    // Alloziere Speicher für den getrimmten String: (en - st) Zeichen + 1 für den Nullterminator
    res = malloc(sizeof(char) * ((en - st) + 1));
    if (!res)              // Prüfe, ob malloc fehlschlug
        return (NULL);     // Gibt NULL zurück, wenn keine Speicherallokation möglich ist
    i = 0;                 // Initialisiere den size_t-Kopierzähler i auf 0
    while (st < en)
    {
        // Kopiere jedes Zeichen zwischen st und en in den neuen String
        res[i] = s1[st];
        i++;             // Erhöhe den Zielindex
        st++;            // Erhöhe den Quellindex, um die nächsten Zeichen zu kopieren
    }
    res[i] = '\0';         // Setze das Nullterminierungszeichen am Ende des neuen Strings
    return (res);          // Gib den Zeiger auf den getrimmten String zurück
}

#include <stdio.h>
#include "libft.h"

int main(void)
{
    char *s1 = "   Hello, World!   ";
    char *set = " ";
    char *result;

    result = ft_strtrim(s1, set);
    printf("Getrimmte Zeichenkette: '%s'\n", result);
    free(result);

    s1 = "----Libft Project----";
    set = "-";
    result = ft_strtrim(s1, set);
    printf("Getrimmte Zeichenkette: '%s'\n", result);
    free(result);

    return 0;
}
