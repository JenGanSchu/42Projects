/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuster <jschuster@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 01:01:35 by jschuster         #+#    #+#             */
/*   Updated: 2025/03/21 01:10:53 by jschuster        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

char *ft_strdup(const char *s) {
    char *dup;
    size_t len = 0;

    // Länge der Zeichenkette bestimmen
    while (s[len]) {
        len++;
    }

    // Speicherplatz für die neue Zeichenkette reservieren
    dup = (char *)malloc((len + 1) * sizeof(char));
    if (!dup) {
        return NULL; // Rückgabe von NULL bei fehlgeschlagener Speicherzuweisung
    }

    // Zeichen kopieren
    size_t i = 0;
    while (i < len) {
        dup[i] = s[i];
        i++;
    }

    dup[len] = '\0'; // Nullterminator hinzufügen
    return dup;
}

#include <stdio.h>

int main(void) {
    const char *original = "Hey, Pookie!";
    char *kopie = ft_strdup(original);

    if (kopie) {
        printf("Original: %s\n", original);
        printf("Kopie: %s\n", kopie);
        free(kopie); // Speicher freigeben
    } else {
        printf("Speicherzuweisung fail.\n");
    }
    return 0;
}
