# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rfukuda <rfukuda@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/24 03:54:34 by rfukuda           #+#    #+#              #
#    Updated: 2020/02/24 03:54:35 by rfukuda          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror
TARGET = ft_cat
SOURCES = main.c
OBJECTS = $(SOURCES:.c=.o)

%.o: %.c
	gcc $(CFLAGS) -c $<

all: $(TARGET)

$(TARGET): $(OBJECTS)
	gcc $(CFLAGS) -o $@ $^

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(TARGET)

re: fclean all
