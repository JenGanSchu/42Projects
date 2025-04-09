/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuste <jschuste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 20:07:05 by jschuste          #+#    #+#             */
/*   Updated: 2025/03/31 19:36:52 by jschuste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last_address;

	i = 0;
	last_address = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
		{
			last_address = (char *)(s + i);
		}
		i++;
	}
	if ((unsigned char)c == '\0')
	{
		return ((char *)(s + i));
	}
	return (last_address);
}

// #include <stdio.h>

// int main(void)
// {
//     const char test_string[] = "Hello Pookie!";
//     int test_char = 'o';

//     // ft_strchr aufrufen
//     char *result = ft_strrchr(test_string, test_char);

//     // Ergebnis überprüfen und Adresse ausgeben
//     if (result)
//     {
//         printf("Zeichen '%c' gefunden in \"%s\" an Adresse: %p\n",
// 				test_char, test_string, (void *)result);
//     }
//     else
//     {
//         printf("Zeichen '%c' nicht gefunden in \"%s\"\n",
// 			test_char, test_string);
//     }

//     return (0);
// }
