NAME = Unnecessary_violence
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(OBJ): $(SRC)
	$(CPP) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $@

clean:
	rm $(OBJ)

fclean: clean
	rm $(NAME)
