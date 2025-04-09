/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuste <jschuste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 00:39:42 by jschuste          #+#    #+#             */
/*   Updated: 2025/03/15 01:44:03 by jschuste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (dstsize > 0)
	{
		while (i < dstsize - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}
// #include <stdio.h>

// size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);

// int main() {
//     char src[] = "Hello, Pookie!";
//     char dst[10]; // Zielpuffer mit begrenztem Platz

//     size_t len = ft_strlcpy(dst, src, sizeof(dst));
//     printf("Quellstring: %s\n", src);
//     printf("Kopierter String: %s\n", dst);
//     printf("Länge des Quellstrings: %zu\n", len);

//     return 0;
// }
