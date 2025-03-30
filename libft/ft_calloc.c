/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuster <jschuster@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 01:00:43 by jschuster         #+#    #+#             */
/*   Updated: 2025/03/21 01:01:12 by jschuster        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

void *ft_calloc(size_t nmemb, size_t size) {
    void *ptr;

    // Berechnung der Gesamtgröße
    if (nmemb == 0 || size == 0) {
        nmemb = 1;
        size = 1;
    }

    ptr = malloc(nmemb * size);
    if (!ptr) {
        return NULL;
    }

    // Speicher mit Nullen initialisieren
    for (size_t i = 0; i < nmemb * size; i++) {
        ((unsigned char *)ptr)[i] = 0;
    }

    return ptr;
}

