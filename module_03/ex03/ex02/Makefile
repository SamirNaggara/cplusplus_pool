NAME		= 	claptrap
FLAGS		= 	-std=c++98 -Wall -Wextra -Werror -Wno-shadow
RM			= 	rm -f
GREEN		= 	\033[0;32m
BIG			= 	\033[0;1m
RESET		= 	\033[0m
CC			=	g++
RM			=	rm -f



SOURCES	=	ClapTrap.cpp \
			DiamondTrap.cpp \
			FragTrap.cpp \
			main.cpp \
			ScavTrap.cpp \


OBJETS	=	$(SOURCES:.c=.o)			


all		: $(NAME)
	@echo "$(GREEN)\nCompilation $(NAME) terminé\nVous pouvez executer ./$(NAME)\n$(RESET)"

$(NAME): $(OBJETS)
	@echo "Création de l'executable $(NAME)"
	@$(CC) $(FLAGS) -o $@ $^

%.o: %.c
	@echo "Génération de $@"
	@$(CC) $(FLAGS) -o $@ -c $< 

clean	:


fclean	:	clean
	@echo "Suppression de $(NAME)"
	@$(RM) $(NAME)
	@echo "Suppression de a.out au cas ou"
	@$(RM) a.out
	@echo "\n$(GREEN)Tout les fichiers ont bien été effacés$(RESET)\n"

re		:	fclean all

.PHONY: all clean fclean re
