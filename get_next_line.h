/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchallie <rchallie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 10:29:57 by rchallie          #+#    #+#             */
/*   Updated: 2019/10/31 13:26:24 by rchallie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

void				init_buffer(char *buffer);

int					get_next_line(int fd, char **line);

char				*sub_char_str(const char *s, int c, int start,
					size_t max_len);
char				*join_str(const char *s1, const char *s2);
char				*get_content(char *line_get, int fd);
char				*set_line(char **line, char *line_get);

size_t				len_str(const char *s);

#endif
