NAME	= harl_filter

SRC		= main.cpp Harl.cpp
OBJ		= $(SRC:.cpp=.o)

C		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -f

all:	$(NAME)

$(NAME):
		$(C) $(FLAGS) $(SRC) -o $(NAME)

clean: 
		$(RM) $(OBJ)

fclean:	clean
		$(RM) $(NAME)

re:		fclean $(NAME)

.PHONY:	all clean fclean re