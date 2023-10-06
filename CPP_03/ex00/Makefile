# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/19 14:56:04 by nsoares-          #+#    #+#              #
#    Updated: 2023/10/06 10:22:14 by nsoares-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = clapTrap

CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address
RM = rm -rf

# _________SOURCES____________

SOURCE_FILES = main.cpp \
				ClapTrap.cpp \
				

OBJS_FILES = $(SOURCE_FILES:.cpp=.o)

# __________COLORS____________

BOLD_PURPLE	=	\033[1;35m
BOLD_CYAN	=	\033[1;36m
BOLD_YELLOW	=	\033[1;33m
NO_COLOR	=	\033[0m

# _________MESSAGE_____________

COMPILATION_START	=	echo "\n$(BOLD_YELLOW)Make: $(NO_COLOR)Compilation start...\n"

CLAPTRAP_READY  =   echo "\n$(BOLD_YELLOW)ClapTrap ready! ✅ \n"

CLEANED		=	echo "\n$(BOLD_YELLOW)Clean: $(NO_COLOR)Removed all the \".o\" files \n"

FCLEANED	=	echo "\n$(BOLD_YELLOW)Fclean: $(NO_COLOR)Removed the executables \n"

RE          =   echo "\n$(BOLD_YELLOW)Re: $(NO_COLOR)Compilation restarted \n"

# __________RULES______________

all: compilation_start $(NAME)

$(NAME): $(OBJS_FILES)
		$(CXX) $(CFLAGS) $(SOURCE_FILES) -o $(NAME)
	@   $(FIXED_READY)

compilation_start:
	@ $(COMPILATION_START)

clean:
	@ $(RM) $(OBJS_FILES)
	@ $(CLEANED)
	
fclean: clean
	@ $(RM) $(NAME)
	@ $(FCLEANED)
		
re:	fclean all
	@ $(RE)
