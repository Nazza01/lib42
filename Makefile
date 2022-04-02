# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/25 23:45:33 by Nathanael         #+#    #+#              #
#    Updated: 2022/04/02 12:34:22 by Nathanael        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	=	lib42.a

#####################################################
#					DIRECTORIES						#
#####################################################
BLDDIR	=	./build
HDRDIR	=	./headers
LIBDIR	=	./libraries
OBJDIR	=	./objects
SRCDIR	=	./sources

TEMPDIR	=	$(BLDDIR) $(OBJDIR)

#####################################################
#					FILES							#
#####################################################
SOURCES	:=	$(shell find $(SRCDIR) -name '*.c')
HEADERS	:=	$(shell find $(HDRDIR) -name '*.h')
OBJECTS	:=	$(SOURCES:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

#####################################################
#					COMPILER/FLAGS					#
#####################################################
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror -std=c99 -I $(HDRDIR)

RM		=	rm -rf
MKDIR	=	mkdir -p
MAKELIB	=	ar -rcs

#####################################################
#					COMMANDS						#
#####################################################
all: dirs $(BLDDIR)/$(NAME)

dirs:
	@$(MKDIR) $(TEMPDIR)
	@clear
	@printf "Made directories: %s\n" $(TEMPDIR)

$(BLDDIR)/$(NAME): $(OBJECTS)
	@$(MAKELIB) $@ $^
	@clear
	@printf "Library %s built successfully\n" $@

$(OBJECTS): $(OBJDIR)/%.o : $(SRCDIR)/%.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@clear
	@printf "Linked %s to %s\n" $< $@

clean:
	@$(RM) $(BLDDIR)
	@clear
	@printf "Cleaned: %s\n" $(BLDDIR)

fclean:
	@$(RM) $(OBJDIR)
	@clear
	@printf "Cleaned: %s\n" $(OBJDIR)

re: clean all
	@clear
	@printf "Cleaned and remade all files!\n"
