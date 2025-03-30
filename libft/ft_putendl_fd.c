/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuster <jschuster@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 22:48:04 by jschuster         #+#    #+#             */
/*   Updated: 2025/03/29 23:01:18 by jschuster        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void    ft_putendl_fd(char *s, int fd)
{
    if (!s) // Überprüfung, ob der String NULL ist
        return;
    write(fd, s, ft_strlen(s)); // Schreibt den String in den Datei-Deskriptor
    write(fd, "\n", 1);        // Fügt einen Zeilenumbruch hinzu
}

int main(void)
{
    ft_putendl_fd("Hallo, Welt!", 1); // Gibt "Hallo, Welt!" aus, gefolgt von einem Zeilenumbruch
    ft_putendl_fd(NULL, 1);           // Test für NULL; sollte nichts tun
    return (0);
}
