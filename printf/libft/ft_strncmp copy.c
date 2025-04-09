/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuste <jschuste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 20:29:35 by jschuste          #+#    #+#             */
/*   Updated: 2025/03/17 20:54:53 by jschuste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	if (i < n)
	{
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}

// #include <stdio.h>

// int main(void)
// {
//     // Test 1: Strings sind gleich
//     const char *str1 = "Hello, Pookie!";
//     const char *str2 = "Hello, Pookie!";
//     size_t n1 = 5;
//     int result1 = ft_strncmp(str1, str2, n1);
//     printf("Test 1: %d\n", result1); // Erwartet: 0

//     // Test 2: Unterschied in den Strings
//     const char *str3 = "Hello, Pookie!";
//     const char *str4 = "Hello, Universe!";
//     size_t n2 = 9;
//     int result2 = ft_strncmp(str3, str4, n2);
//     printf("Test 2: %d\n", result2); // Erwartet: Unterschied ASCII-Werte

//     // Test 3: Ein String ist leer
//     const char *str5 = "";
//     const char *str6 = "Hello";
//     size_t n3 = 3;
//     int result3 = ft_strncmp(str5, str6, n3);
//     printf("Test 3: %d\n", result3);
// Erwartet: Negativer Wert (da str5 '\0' ist)

//     // Test 4: Vergleich mit n = 0
//     const char *str7 = "Hello";
//     const char *str8 = "Pookie";
//     size_t n4 = 0;
//     int result4 = ft_strncmp(str7, str8, n4);
//     printf("Test 4: %d\n", result4);
// Erwartet: 0 (n = 0, keine Zeichen verglichen)

//     // Test 5: Ein String ist kürzer
//     const char *str9 = "Hi";
//     const char *str10 = "Hi there";
//     size_t n5 = 7;
//     int result5 = ft_strncmp(str9, str10, n5);
//     printf("Test 5: %d\n", result5);
// Erwartet: Negativer Wert (str9 erreicht '\0')

//     return 0;
// }
