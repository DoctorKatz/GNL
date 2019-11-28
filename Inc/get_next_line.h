/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line..h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgunship <lgunship@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 21:54:11 by lgunship          #+#    #+#             */
/*   Updated: 2019/11/28 20:43:15 by lgunship         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL_GET_NEXT_LINE_H
#define GNL_GET_NEXT_LINE_H

#include <fcntl.h>
#include "libft.h"
#include <unistd.h>

#define BUFF_SIZE	64
int		check_line(const int fd, char **line, char **str, ssize_t read_bytes);

#endif // GNL_GET_NEXT_LINE_H
