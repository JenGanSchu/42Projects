/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschuste <jschuste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 17:37:36 by jschuste          #+#    #+#             */
/*   Updated: 2025/06/11 23:14:40 by jschuste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
// includes
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
// prototypes
int		find_nl(char *s);
int		str_len(char *s);
char	*str_join(char *s1, char *s2);
char	*extract_line(char *buffer);
char	*clean_buffer(char *leftover);
char	*get_next_line(int fd);
char	*free_and_return_null(char **ptr);

#endif