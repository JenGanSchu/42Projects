/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuste <jschuste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 01:46:46 by jschuste          #+#    #+#             */
/*   Updated: 2025/03/15 02:22:29 by jschuste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	i = 0;
	dst_len = 0;
	src_len = 0;
	while (dst_len < dstsize && dst[dst_len] != '\0')
		dst_len++;
	while (src[src_len])
		src_len++;
	if (dstsize <= dst_len)
		return (dst_len + src_len);
	while (dst_len + i + 1 < dstsize && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (dst_len + i < dstsize)
	{
		dst[dst_len + i] = '\0';
	}
	return (dst_len + src_len);
}

// #include <stdio.h>

// int main() {
//     char dst[15] = "Hello";
//     char src[] = ", Pookie!";

//     // Test: Anfügen an Zielstring
//     size_t result = ft_strlcat(dst, src, sizeof(dst));

//     // Ausgabe
//     printf("Zielstring: %s\n", dst);
//     printf("Theoretische Gesamtlänge: %zu\n", result);

//     return 0;
// }