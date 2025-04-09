/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuste <jschuste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 17:58:53 by jschuste          #+#    #+#             */
/*   Updated: 2025/03/31 18:52:09 by jschuste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;

	if (!s || !f)
		return (0);
	result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!result)
		return (0);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

// #include <stdio.h>
// #include "libft.h"

// char einfache_funktion(unsigned int index, char c)
// {
//     return (c + index); // Addiert den Index einfach zum Buchstaben
// }

// int main(void)
// {
//     char *original = "ABC";
//     char *ergebnis;

//     ergebnis = ft_strmapi(original, einfache_funktion);
//     if (ergebnis)
//     {
//         printf("Original: %s\n", original);
//         printf("Ergebnis: %s\n", ergebnis);
//         free(ergebnis); // Den Speicher freigeben
//     }
//     else
//     {
//         printf("Fehler: Konnte keinen Speicher allokieren.\n");
//     }

//     return (0);
// }