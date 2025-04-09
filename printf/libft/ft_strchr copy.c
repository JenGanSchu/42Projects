/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuste <jschuste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 19:36:46 by jschuste          #+#    #+#             */
/*   Updated: 2025/03/31 19:35:14 by jschuste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			return ((char *)(s + i));
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)(s + i));
	return (0);
}

// #include <stdio.h>

// int main(void)
// {
//     const char test_string[] = "Hello Pookie!";
//     int test_char = 'P';

//     // ft_strchr aufrufen
//     char *result = ft_strchr(test_string, test_char);

//     // Ergebnis überprüfen und Adresse ausgeben
//     if (result)
//     {
//         printf("Zeichen '%c' gefunden in \"%s\" an Adresse: %p\n",
// test_char, test_string, (void *)result);
//     }
//     else
//     {
//         printf("Zeichen '%c' nicht gefunden in \"%s\"\n",
// test_char, test_string);
//     }

//     return (0);
// }
