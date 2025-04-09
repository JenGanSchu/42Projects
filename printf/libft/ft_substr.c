/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuste <jschuste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 18:08:45 by jschuste          #+#    #+#             */
/*   Updated: 2025/03/31 18:11:50 by jschuste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_substr_length(char const *s, unsigned int start, size_t len)
{
	size_t	str_len;

	str_len = 0;
	while (s[str_len])
		str_len++;
	if (start >= str_len)
		return (0);
	if (len > str_len - start)
		return (str_len - start);
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	substr_len;
	size_t	i;

	if (!s)
		return (NULL);
	substr_len = get_substr_length(s, start, len);
	substr = (char *)malloc(sizeof(char) * (substr_len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < substr_len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char *s = "Libft ist wahnsinn..";
// 	char *sub;

// 	sub = ft_substr(s, 6, 8); // Erwartetes Ergebnis: "ist sup"
// 	printf("Substring: '%s'\n", sub);

// 	free(sub); // Speicher freigeben
// 	return (0);
// }