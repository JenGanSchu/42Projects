/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft__strlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuster <jschuster@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 23:47:37 by jschuster         #+#    #+#             */
/*   Updated: 2025/03/21 23:50:07 by jschuster        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *str) 
{
    size_t len = 0; // Zähler für die Länge

    while (str[len] != '\0') { // Schleife durch den String, bis Nullterminator erreicht ist
        len++;
    }

    return len; // Rückgabe der berechneten Länge
}
