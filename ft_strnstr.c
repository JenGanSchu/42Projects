/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuster <jschuster@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 23:55:35 by jschuster         #+#    #+#             */
/*   Updated: 2025/03/21 00:31:25 by jschuster        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*little == '\0')
		return (char *)big;
	while (i < n && big[i] != '\0')
	{
		if(big[i] == little[0])
		{
			while (i + j < n && big[i + j] == little[j] &&
			little[j] != '\0')
			{
				j++;
			}
			if (little[j] == '\0')
				return ((char *)big + i);
		}
		i++;
	}
	return (0);
}

#include <stdio.h>

int main() {
    const char *haystack = "Hello, World!";
    const char *needle1 = "World";
    const char *needle2 = "world";
    const char *needle3 = "";
    const char *needle4 = "lo, W";

    printf("Test 1: %s\n", ft_strnstr(haystack, needle1, 12)); // Erwartet: "World!"
    printf("Test 2: %s\n", ft_strnstr(haystack, needle2, 12)); // Erwartet: (null)
    printf("Test 3: %s\n", ft_strnstr(haystack, needle3, 12)); // Erwartet: "Hello, World!"
    printf("Test 4: %s\n", ft_strnstr(haystack, needle4, 5));  // Erwartet: (null)

    return 0;
}
