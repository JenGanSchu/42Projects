/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuster <jschuster@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 22:42:11 by jschuster         #+#    #+#             */
/*   Updated: 2025/03/29 22:43:16 by jschuster        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void    ft_putstr_fd(char *s, int fd)
{
    if (!s) // Überprüfung, ob der String NULL ist
        return;
    write(fd, s, ft_strlen(s)); // Schreibt den String in den angegebenen Dateideskriptor
}

int main(void)
{
    ft_putstr_fd("Hallo Welt!\n", 1); // Schreibt "Hallo Welt!" in die Standardausgabe
    ft_putstr_fd(NULL, 1);            // Testet den Fall, wenn der String NULL ist
    return (0);
}
