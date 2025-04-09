/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuste <jschuste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 21:00:39 by jschuste          #+#    #+#             */
/*   Updated: 2025/03/31 19:54:59 by jschuste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d == NULL && s == NULL && n > 0)
		return (NULL);
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dst);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     // Test 1: String-Kopie
//     char src1[] = "Pookie!";
//     char dest1[8];
//     ft_memcpy(dest1, src1, 7); // Kopiere inkl. Nullterminator
//     printf("Test 1 - Erwartet: Pookie!\n");
//     printf("Test 1 - Ergebnis: %s\n\n", dest1);

//     // Test 2: Array-Kopie
//     int src2[] = {1, 2, 3};
//     int dest2[3];
//     ft_memcpy(dest2, src2, sizeof(src2)); // Kopiere Integer-Array
//     printf("T2 - Erwartet: 1, 2, 3\n");
//     printf("T2 - Ergebnis: %d, %d, %d\n\n", dest2[0], dest2[1], dest2[2]);

//     // Test 3: Kein Kopieren (n = 0)
//     char src3[] = "Source";
//     char dest3[] = "Unverändert";
//     ft_memcpy(dest3, src3, 0); // n = 0, keine Bytes werden kopiert
//     printf("Test 3 - Erwartet: Unverändert\n");
//     printf("Test 3 - Ergebnis: %s\n\n", dest3);

//     return (0);
// }