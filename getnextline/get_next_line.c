/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuste <jschuste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 17:37:25 by jschuste          #+#    #+#             */
/*   Updated: 2025/06/11 22:58:15 by jschuste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*leftover;
	char		buffer[BUFFER_SIZE + 1];
	char		*line;
	int			read_bytes;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	read_bytes = 1;
	while (!find_nl(leftover) && read_bytes > 0)
	{
		read_bytes = read(fd, buffer, BUFFER_SIZE);
		if (read_bytes < 0)
			return (free_and_return_null(&leftover));
		buffer[read_bytes] = '\0';
		leftover = str_join(leftover, buffer);
		if (!leftover)
			return (NULL);
	}
	line = extract_line(leftover);
	leftover = clean_buffer(leftover);
	if (!line)
		return (free_and_return_null(&leftover));
	return (line);
}

char	*free_and_return_null(char **ptr)
{
	free(*ptr);
	*ptr = NULL;
	return (NULL);
}

// #include <fcntl.h>

// int	main(void)
// {
// 	int fd = open("hi.txt", O_RDONLY);
// 	printf("%d\n", fd);
// 	char *line = get_next_line(fd);
// 	printf("%s\n", line);
// }