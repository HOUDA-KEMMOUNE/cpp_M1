NAME =  Moar_brainz
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = *.cpp 
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(OBJ): $(SRC)
	$(CPP) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CPP) $(OBJ) $(CPPFLAGS) -o $@

clean:
	rm $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all