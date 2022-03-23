#	A Tutorial for using libraries inside your projects


NAME 	=	use_lib

#####################################################
#					DIRECTORIES						#
#####################################################
BLDDIR	=	./build
HDRDIR	=	./headers
LIBDIR	=	./libraries
OBJDIR	=	./objects
SRCDIR	=	./sources

TEMPDIR =	$(OBJDIR) $(BLDDIR)

#####################################################
#					FILES							#
#####################################################
SOURCES	:=	$(shell find $(SRCDIR) -name '*.c')

#	Dont forget to include the libraries' header file too!
#	e.g:
# 		./headers/
#			lib42.h
# 			...
# 			current_project.h

HEADERS	:=	$(shell find $(HDRDIR) -name '*.h')
OBJECTS	:=	$(SOURCES:$(SRCDIR)/%.c=$(OBJDIR)/%.o)
RM		=	rm -rf
MKDIR	=	mkdir -p

#The library is called "lib42.a"
#	This library needs be included on the command line in the format like so:
# 		Tell the linker where the library is located
#			-L ./libraries/
# 		Tell the linker what the library is called - strip the lib part away like so:
#			-l 42		<--- lib42.a becomes 42
INC_LIB	=	-L $(LIBDIR)
LFT		=	-l 42

#####################################################
#					COMPILER/FLAGS					#
#####################################################
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror -std=c99 -g -I $(HDRDIR)

#The linker needs to know where the library is stored and how to use it
#	We include the above variables (making it easier for other libraries to be imported)
#	The full line below now should be:	-L ./libraries -l 42
LFLAGS	=	-Wall -Wextra -Werror -I $(HDRDIR) $(INC_LIB) $(LFT)

#####################################################
#					COMMANDS						#
#####################################################
all: dirs $(BLDDIR)/$(NAME)

dirs:
	@$(MKDIR) $(TEMPDIR)
	@clear
	@printf "Made directories: %s\n" $(TEMPDIR)

$(BLDDIR)/$(NAME): $(OBJECTS)
	@$(CC) $(OBJECTS) $(LFLAGS) -o $@
	@clear
	@printf "Compiled %s successfully\n" $@

$(OBJECTS): $(OBJDIR)/%.o : $(SRCDIR)/%.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@clear
	@printf "Linked %s to %s\n" $< $@

clean:
	@$(RM) $(BLDDIR)
	@clear
	@printf "Cleaned: %s\n" $(BLDDIR)

fclean: clean
	@$(RM) $(OBJDIR)
	@clear
	@printf "Cleaned: %s\n" $(OBJDIR)

re: fclean all
	@clear
	@printf "Cleaned and remade all files!\n"
