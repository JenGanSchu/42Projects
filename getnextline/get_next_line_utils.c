/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuste <jschuste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 17:38:51 by jschuste          #+#    #+#             */
/*   Updated: 2025/06/11 23:10:20 by jschuste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	find_nl(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

int	str_len(char *s)
{
	int	i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

char	*str_join(char *s1, char *s2)
{
	int		i;
	int		l;
	char	*res;

	i = 0;
	l = 0;
	res = malloc(str_len(s1) + str_len(s2) + 1);
	if (!res)
		return (free_and_return_null(&s1));
	while (s1 && s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	while (s2 && s2[l])
		res[i++] = s2[l++];
	res[i] = '\0';
	free(s1);
	return (res);
}

char	*extract_line(char *buffer)
{
	int		i;
	char	*line;

	i = 0;
	if (!buffer || buffer[0] == '\0')
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (buffer[i] == '\n')
		i++;
	line = malloc(i + 1);
	if (!line)
		return (NULL);
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

char	*clean_buffer(char *leftover)
{
	int		i;
	int		j;
	char	*new_buffer;

	i = 0;
	j = 0;
	if (!leftover)
		return (NULL);
	while (leftover[i] && leftover[i] != '\n')
		i++;
	if (!leftover[i])
		return (free_and_return_null(&leftover));
	i++;
	new_buffer = malloc(str_len(leftover + i) + 1);
	if (!new_buffer)
		return (free_and_return_null(&leftover));
	while (leftover[i])
		new_buffer[j++] = leftover[i++];
	new_buffer[j] = '\0';
	free(leftover);
	return (new_buffer);
}
// char	*ft_strchr(const char *s, int c)
// {
// 	int	i;

// 	i = 0;
// 	if (s)
// 	{
// 		while (s[i] != '\0')
// 		{
// 			if (s[i] == (unsigned char)c)
// 				return ((char *)(s + i));
// 			i++;
// 		}
// 	}
// 	if ((unsigned char)c == '\0')
// 		return ((char *)(s + i));
// 	return (0);
// }

// static void	*ft_memcpy_local(void *dest, const void *src, size_t n)
// {
// 	size_t				i;
// 	unsigned char		*d;
// 	const unsigned char	*s;

// 	d = (unsigned char *)dest;
// 	s = (const unsigned char *)src;
// 	i = 0;
// 	while (i < n)
// 	{
// 		d[i] = s[i];
// 		i++;
// 	}
// 	return (dest);
// }

// char	*ft_strjoin(char *s1, char *s2)
// {
// 	char	*joinstr;
// 	size_t	len1;
// 	size_t	len2;

// 	if (!s1 && !s2)
// 		return ("");
// 	if (!s2)
// 		return (s1);
// 	if (!s1)
// 		return (s2);
// 	len1 = ft_strlen(s1);
// 	len2 = ft_strlen(s2);
// 	joinstr = (char *)malloc(len1 + len2 + 1);
// 	if (!joinstr)
// 		return (NULL);
// 	ft_memcpy_local(joinstr, s1, len1);
// 	ft_memcpy_local(joinstr + len1, s2, len2);
// 	joinstr[len1 + len2] = '\0';
// 	return (joinstr);
// }

// char	*ft_substr(const char *s, unsigned int start, size_t len)
// {
// 	char	*sub;
// 	size_t	s_len;
// 	size_t	i;

// 	if (!s)
// 		return (NULL);
// 	s_len = ft_strlen(s);
// 	if (start >= s_len)
// 	{
// 		sub = malloc(1);
// 		if (!sub)
// 			return (NULL);
// 		return (sub[0] = '\0', sub);
// 	}
// 	if (len > s_len - start)
// 		len = s_len - start;
// 	sub = malloc(len + 1);
// 	if (!sub)
// 		return (NULL);
// 	i = -1;
// 	while (++i < len)
// 		sub[i] = s[start + i];
// 	return (sub[i] = '\0', sub);
// }
