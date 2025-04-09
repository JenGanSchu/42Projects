/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuste <jschuste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 16:59:02 by jschuste          #+#    #+#             */
/*   Updated: 2025/03/31 19:18:05 by jschuste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*word_dup(const char *s, int start, int end)
{
	int		len;
	char	*word;

	len = end - start;
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	ft_strlcpy(word, s + start, len + 1);
	word[len] = '\0';
	return (word);
}

static int	word_count(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			count++;
			in_word = 1;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	**free_array(char **result, int idx)
{
	while (idx > 0)
	{
		idx = idx - 1;
		free(result[idx]);
	}
	free(result);
	return (NULL);
}

static char	**fill_split(const char *s, char c, char **result)
{
	int	i;
	int	idx;
	int	start;

	i = 0;
	idx = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			result[idx] = word_dup(s, start, i);
			if (!result[idx])
				return (free_array(result, idx));
			idx = idx + 1;
		}
	}
	result[idx] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		wc;

	if (!s)
		return (NULL);
	wc = word_count(s, c);
	result = malloc((wc + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	return (fill_split(s, c, result));
}

// #include <stdio.h>
// #include <stdlib.h>
// #include "libft.h"

// int main(void)
// {
//     char **words = ft_split("Hello world, ft_split!", ' ');
//     int i = 0;
//     while (words[i])
//     {
//         printf("Word[%d]: '%s'\n", i, words[i]);
//         free(words[i]);
//         i++;
//     }
//     free(words);
//     return (0);
// }