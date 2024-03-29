# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spuustin <spuustin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/18 12:03:16 by spuustin          #+#    #+#              #
#    Updated: 2022/04/14 12:00:01 by spuustin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
CFILES= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c \
ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c \
ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c \
ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_memalloc.c \
ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c \
ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c \
ft_strtrim.c ft_strsplit.c ft_itoa.c ft_putchar.c ft_putstr.c ft_putendl.c \
ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
ft_lstnew.c ft_lstadd.c ft_lstiter.c ft_lstdelone.c ft_lstdel.c ft_lstmap.c \
ft_num_length.c ft_free_array.c ft_islowercase.c ft_isuppercase.c ft_capitalize.c
PRINTF_C= $(addprefix printf/, ft_printf.c build.c ftoa.c get_value.c \
help_print.c length_parser.c precision_and_width.c print_chars.c \
print_floats.c print_numbers.c print_pointers.c print_strings.c \
printf_itoabase.c validation.c)
OFILES= $(CFILES:.c=.o)
PRINTF_O= ft_printf.o build.o ftoa.o get_value.o help_print.o length_parser.o \
precision_and_width.o print_chars.o print_floats.o print_numbers.o \
print_pointers.o print_strings.o printf_itoabase.o validation.o

all: $(NAME)
$(NAME):
	gcc -c -Wall -Wextra -Werror $(PRINTF_C) -I /printf/printf.h
	gcc -c -Wall -Wextra -Werror $(CFILES) -I . libft.h
	ar rc $(NAME) $(OFILES) $(PRINTF_O)
	ranlib $(NAME)

clean:
	rm -f $(OFILES) $(PRINTF_O)

fclean : clean
	rm -rf $(NAME)

re: fclean all