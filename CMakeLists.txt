cmake_minimum_required(VERSION 3.15)
project(GNL C)

set(CMAKE_C_STANDARD 99)

add_executable(GNL main.c Src/get_next_line.c Inc/get_next_line.h libft/ft_strchr.c libft/ft_strdel.c libft/ft_strdup.c libft/ft_strjoin.c libft/ft_strnew.c libft/ft_strsub.c libft/ft_memalloc.c libft/ft_strlen.c libft/ft_bzero.c libft/ft_putchar.c libft/ft_putstr.c
        libft/ft_putchar_fd.c libft/ft_putstr_fd.c)
include_directories (Inc, libft)