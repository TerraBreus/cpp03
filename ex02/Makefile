NAME := CLAPCLAP
CPP := c++
FLAGS := -Wall -Wextra -Werror

SRC := \
	   ClapTrap.cpp \
	   FragTrap.cpp \
	   ScavTrap.cpp \
	   main.cpp

OBJ := $(SRC:%.cpp=%.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(FLAGS) $(OBJ) -o $@

%.o : %.cpp
	$(CPP) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all
