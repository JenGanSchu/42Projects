/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuster <jschuster@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 22:37:13 by jschuster         #+#    #+#             */
/*   Updated: 2025/03/29 22:41:11 by jschuster        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

// int main(void)
// {
//     ft_putchar_fd('H', 1); // Schreibt 'H' in die Standardausgabe
//     ft_putchar_fd('\n', 1); // Schreibt einen Zeilenumbruch in die Standardausgabe
//     return (0);
// }
