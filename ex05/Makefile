NAME = Harl
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = Harl.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(OBJ): %(SRC)
	$(CPP) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $@

clean:
	rm -rf $(OBJ)

clean: fclean
	rm -rf $(NAME)

re: fclean all
