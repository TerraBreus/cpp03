NAME := CLAPTRAP.EXE
CPP := c++
FLAGS := -Wall -Wextra -Werror

SRC := \
	   ClapTrap.cpp \
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
