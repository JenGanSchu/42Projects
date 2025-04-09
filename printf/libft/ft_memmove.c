/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuste <jschuste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 23:02:30 by jschuste          #+#    #+#             */
/*   Updated: 2025/03/31 19:31:30 by jschuste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dst;
	s = src;
	if (d < s)
	{
		while (len--)
			*d++ = *s++;
	}
	else if (d > s)
	{
		d += len;
		s += len;
		while (len--)
			*(--d) = *(--s);
	}
	return (dst);
}

// #include <stdio.h>
// #include <string.h>

// 	int main()
// 	{
// 		// Test 1: Normales Kopieren
// 		char src1[] = "Hello, Pookie!";
// 		char dest1[20];
// 		ft_memmove(dest1, src1, 10); // Kopiert "Hello, Pookie!"
// 		printf("Test 1 - Erwartet: Hello, Pookie!\n");
// 		printf("Test 1 - Ergebnis: %s\n\n", dest1);

// 		// Test 2: Rückwärtskopieren mit Überlappung
// 		char buffer2[20] = "123456789";
// 		ft_memmove(buffer2, buffer2 + 4, 5); // Kopiert "56789" rückwärts
// 		printf("Test 2 - Erwartet: 567896789\n");
// 		printf("Test 2 - Ergebnis: %s\n\n", buffer2);

// 		char buffer3[20] = "123456789";
// 		ft_memmove(buffer3 + 4, buffer3, 5); // Kopiere "12345"
// 		buffer3[9] = '9';
// 		buffer3[10] = '\0';
// 		printf("Test 3 - Erwartet: 1234123459\n");
// 		printf("Test 3 - Ergebnis: %s\n\n", buffer3);

// 		return (0);
// 	}