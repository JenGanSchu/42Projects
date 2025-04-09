/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuste <jschuste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 17:51:44 by jschuste          #+#    #+#             */
/*   Updated: 2025/03/31 17:52:45 by jschuste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>

// /* Beispiel-Testfunktion für ft_striteri */
// void	einfache_funktion(unsigned int index, char *c)
// {
// 	*c = *c + index;
// 		// Addiert den Index des Buchstabens zum aktuellen Buchstaben
// }

// int	main(void)
// {
// 	char str[] = "ABC";

// 	ft_striteri(str, einfache_funktion);
// 	printf("Veränderte Zeichenkette: %s\n", str);

// 	return (0);
// }