/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuster <jschuster@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 00:53:45 by jschuster         #+#    #+#             */
/*   Updated: 2025/03/26 01:40:34 by jschuster        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
 * word_dup:
 * Dupliziert einen Teilstring von s, von Index start bis end (end nicht mitkopiert).
 * Es wird ft_strncpy verwendet, um genau len Zeichen in den neuen Puffer zu kopieren.
 */
static char *word_dup(const char *s, int start, int end)
{
    int len = end - start;           // Bestimme die Länge des Wortabschnitts
    char *word = malloc(len + 1);      // Alloziere Speicher für len Zeichen + Nullterminator
    if (!word)
        return (NULL);
    ft_strncpy(word, s + start, len);  // Kopiere len Zeichen aus s beginnend bei start
    word[len] = '\0';                  // Setze den Nullterminator
    return (word);
}

/*
 * word_count:
 * Durchläuft s und zählt die Anzahl der Wörter, wobei Wörter als
 * zusammenhängende Zeichenfolgen verstanden werden, die nicht c sind.
 */
static int word_count(const char *s, char c)
{
    int count = 0;
    int in_word = 0;   // Flag: 0 = außerhalb eines Wortes, 1 = innerhalb eines Wortes
    while (*s)
    {
        if (*s != c && in_word == 0)
        {
            count++;     // Beginn eines neuen Wortes erkannt
            in_word = 1;
        }
        else if (*s == c)
            in_word = 0; // Trennzeichen: nicht in einem Wort
        s++;
    }
    return (count);
}

/*
 * ft_split:
 * Teilt den String s in ein Array von Wörtern (Teilstücken) auf, getrennt durch c.
 * Das zurückgegebene Array ist durch einen NULL-Pointer terminiert.
 */
char **ft_split(char const *s, char c)
{
    char **result;        // Array, das Zeiger zu den einzelnen, duplizierten Wörtern enthält
    int wc;               // Anzahl der Wörter im String s
    int i = 0;            // Index, um den Eingabestring s durchzulaufen
    int idx = 0;          // Index für das Ergebnisarray (welches Wort).
    int start;            // Startindex eines Wortes in s

    if (!s)
        return (NULL);
    wc = word_count(s, c);                                 // Zähle, wie viele Wörter vorhanden sind
    result = malloc((wc + 1) * sizeof(char *));            // Alloziere Speicher für alle Wortzeiger (+1 für NULL)
    if (!result)
        return (NULL);
    while (s[i])
    {
        while (s[i] && s[i] == c)                          // Überspringe alle Trennerzeichen
            i++;
        if (s[i])
        {
            start = i;                                   // Markiere den Beginn des aktuellen Wortes
            while (s[i] && s[i] != c)                      // Laufe bis zum Ende des Wortes (Trennzeichen oder '\0')
                i++;
            result[idx] = word_dup(s, start, i);           // Dupliziere den Wortabschnitt per ft_strncpy
            if (!result[idx])
            {
                while (idx > 0)
                {
                    idx--;
                    free(result[idx]);
                }
                free(result);
                return (NULL);
            }
            idx++;                                       // Gehe zum nächsten Wort im Ergebnisarray
        }
    }
    result[idx] = NULL;                                  // Terminiere das Array mit einem NULL-Zeiger
    return (result);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include "libft.h"

// int main(void)
// {
//     char **words = ft_split("Hello world, ft_split!", ' ');
//     int i = 0;
//     while (words[i])
//     {
//         printf("Word[%d]: '%s'\n", i, words[i]);
//         free(words[i]);
//         i++;
//     }
//     free(words);
//     return 0;
// }
