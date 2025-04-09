/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuste <jschuste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 18:00:59 by jschuste          #+#    #+#             */
/*   Updated: 2025/03/31 19:14:55 by jschuste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		st;
	int		en;
	size_t	i;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	st = 0;
	while (s1[st] && ft_strchr(set, s1[st]))
		st++;
	en = ft_strlen(s1);
	while (en > st && ft_strchr(set, s1[en - 1]))
		en--;
	res = malloc(sizeof(char) * ((en - st) + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (st < en)
	{
		res[i] = s1[st];
		i++;
		st++;
	}
	res[i] = '\0';
	return (res);
}

// #include <stdio.h>

// int main(void)
// {
//     char *s1 = "   Hello, World!   ";
//     char *set = " ";
//     char *result;

//     result = ft_strtrim(s1, set);
//     printf("Getrimmte Zeichenkette: '%s'\n", result);
//     free(result);

//     s1 = "----Libft Project----";
//     set = "-";
//     result = ft_strtrim(s1, set);
//     printf("Getrimmte Zeichenkette: '%s'\n", result);
//     free(result);

//     return (0);
// }