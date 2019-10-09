/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgunship <lgunship@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 21:54:01 by lgunship          #+#    #+#             */
/*   Updated: 2019/10/10 00:00:03 by lgunship         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Inc/get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	ssize_t read_bytes;
	char buffer[BUFF_SIZE + 1];
	static char **str;
	char *temp;

	if ((fd < 0) || (line == NULL))
		return (-1);
	while (((read_bytes = read(fd, buffer, BUFF_SIZE)) > 0))
	{
		buffer[read_bytes] = '\0';
		if (str[fd] == NULL)
			str[fd] = ft_strnew(1);
		temp = ft_strjoin(str[fd], buffer);
		free(str[fd]);
		str[fd] = temp;
		if (ft_strchr(buffer, '\n'))
			break;
	}
	if (read_bytes < 0)
		return (-1);
	else if (read_bytes == 0 && (str[fd] == NULL || str[fd][0] == '\0'))
		return (0);
}

int check_line(const int fd, char **line, char **str, ssize_t read_bytes)
{
	int length;

	length = 0;
	while((str[fd][length] != '\n') && (str[fd][length] != '\0'))
		length++;
	if(str[fd][length] == '\n')
	{

	}
	if (str[fd][length] == '\0')
}
