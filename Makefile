NAME 				=	target
CC					=	gcc
PUSH_SWAP_NAME 		=	push_swap
CHECKER_NAME 		=
SRC_DIR 			=	./src
MAIN_SRC_DIR 		=	$(SRC_DIR)/main
LIST_SRC_DIR 		=	$(SRC_DIR)/list_handle
ERR_SRC_DIR 		=	$(SRC_DIR)/error_handle
OPE_SRC_DIR 		=	$(SRC_DIR)/stack_operator
ALGO_SRC_DIR 		=	$(SRC_DIR)/algo_utils
CHECKER_SRC_DIR 	=	$(SRC_DIR)/my_checker
CHECKER_UTILS_SRC_DIR 	=	$(SRC_DIR)/my_checker_utils
OBJ_DIR 			=	./obj
MAIN_OBJ_DIR 		=	$(OBJ_DIR)/main
LIST_OBJ_DIR 		=	$(OBJ_DIR)/list_handle
ERR_OBJ_DIR 		=	$(OBJ_DIR)/error_handle
OPE_OBJ_DIR 		=	$(OBJ_DIR)/stack_operator
ALGO_OBJ_DIR 		=	$(OBJ_DIR)/algo_utils
CHECKER_OBJ_DIR 	=	$(OBJ_DIR)/my_checker
CHECKER_UTILS_OBJ_DIR 	=	$(OBJ_DIR)/my_checker_utils
INC_DIR 			=	./include
LIBFT_DIR 			=	./libft
LIBFT_OBJ_DIR 		=	$(OBJ_DIR)/libft
LIBFT_NAME 			=	$(LIBFT_DIR)/libft.a
PRINTF_DIR 			=	./printf
PRINTF_OBJ_DIR 		=	$(OBJ_DIR)/printf
MAIN_SRC 			=	ft_refactor.c \
						ft_sort.c \
						ft_start_up_task.c \
						push_swap.c
LIST_SRC			=	ft_add_node_to_list_end.c \
						ft_add_node_to_list_head.c \
						ft_count_node.c \
						ft_create_new_dammy.c \
						ft_create_new_node.c \
						ft_delete_head_node.c \
						ft_delete_last_node.c \
						ft_delete_node.c \
						ft_delete_node_link.c \
						ft_get_head_node.c \
						ft_get_last_node.c \
						ft_is_empty_list.c \
						ft_is_only_one_node.c \
						ft_print_operation.c \
						ft_record_operation.c \
						ft_print_list_from_head.c \
						ft_print_list_from_end.c \
						ft_push_arg_to_list.c \
						ft_terminate_list.c \
						ft_terminate_node.c \
						ft_terminate_lsthndl.c \
						ft_swap_node.c \
						ft_set_index.c
ERR_SRC 			=	ft_check_not_number.c \
						ft_check_duplicate_number.c \
						ft_check_bigger_than_int.c \
						ft_check_sorted.c \
						ft_myexit.c
OPE_SRC				=	ft_push.c \
						ft_reverse_rotate.c \
						ft_rotate.c \
						ft_swap.c
ALGO_SRC			=	ft_move_a_to_b.c \
						ft_move_b_to_a.c \
						ft_move_smallest_node_to_a_bottom.c \
						ft_refactor_operation_result.c \
						ft_search_node.c \
						ft_get_index.c \
						ft_get_pivot.c \
						ft_sort_stacka_six_or_less_node.c \
						ft_sort_stackb_six_or_less_node.c
PRINTF_SRC			=	ft_fmt_csper.c \
						ft_fmt_diuxXp.c \
						ft_printf_utils.c \
						ft_printf.c
CHECKER_SRC			=	ft_print_check_result_bonus.c \
						ft_read_load_stdin_operation_bonus.c \
						ft_start_up_task_checker_bonus.c \
						ft_symulate_operation_bonus.c \
						get_next_line_bonus.c \
						checker_bonus.c
CHECKER_UTILS_SRC	:=	$(patsubst %.c, %_bonus.c,$(LIST_SRC))
CHECKER_UTILS_SRC	+=	$(patsubst %.c, %_bonus.c,$(ERR_SRC))
CHECKER_UTILS_SRC	+=	$(patsubst %.c, %_bonus.c,$(OPE_SRC))
MAIN_OBJ 			=	$(MAIN_SRC:.c=.o)
MAIN_DEP 			=	$(MAIN_SRC:.c=.d)
PRINTF_OBJ 			=	$(PRINTF_SRC:.c=.o)
LIST_OBJ			=	$(LIST_SRC:.c=.o)
LIST_DEP			=	$(LIST_SRC:.c=.d)
ERR_OBJ				=	$(ERR_SRC:.c=.o)
ERR_DEP				=	$(ERR_SRC:.c=.d)
OPE_OBJ				=	$(OPE_SRC:.c=.o)
OPE_DEP				=	$(OPE_SRC:.c=.d)
ALGO_OBJ 			=	$(ALGO_SRC:.c=.o)
ALGO_DEP 			=	$(ALGO_SRC:.c=.d)
CHECKER_OBJ			=	$(CHECKER_SRC:.c=.o)
CHECKER_DEP			=	$(CHECKER_SRC:.c=.d)
CHECKER_UTILS_OBJ	=	$(CHECKER_UTILS_SRC:.c=.o)
CHECKER_UTILS_DEP	=	$(CHECKER_UTILS_SRC:.c=.d)
MAIN_OBJ_FULLNAME 	=	$(addprefix ./obj/main/, $(MAIN_OBJ))
MAIN_DEP_FULLNAME 	=	$(addprefix ./obj/main/, $(MAIN_DEP))
LIST_OBJ_FULLNAME 	=	$(addprefix ./obj/list_handle/, $(LIST_OBJ))
LIST_DEP_FULLNAME 	=	$(addprefix ./obj/list_handle/, $(LIST_DEP))
ERR_OBJ_FULLNAME 	=	$(addprefix ./obj/error_handle/, $(ERR_OBJ))
ERR_DEP_FULLNAME 	=	$(addprefix ./obj/error_handle/, $(ERR_DEP))
OPE_OBJ_FULLNAME 	=	$(addprefix ./obj/stack_operator/, $(OPE_OBJ))
OPE_DEP_FULLNAME 	=	$(addprefix ./obj/stack_operator/, $(OPE_DEP))
PRINTF_OBJ_FULLNAME =	$(addprefix ./obj/printf/, $(PRINTF_OBJ))
ALGO_OBJ_FULLNAME 	=	$(addprefix ./obj/algo_utils/, $(ALGO_OBJ))
ALGO_DEP_FULLNAME 	=	$(addprefix ./obj/algo_utils/, $(ALGO_DEP))
CHECKER_OBJ_FULLNAME =	$(addprefix ./obj/my_checker/, $(CHECKER_OBJ))
CHECKER_DEP_FULLNAME =	$(addprefix ./obj/my_checker/, $(CHECKER_DEP))
CHECKER_UTILS_OBJ_FULLNAME =	$(addprefix ./obj/my_checker_utils/, $(CHECKER_UTILS_OBJ))
CHECKER_UTILS_DEP_FULLNAME =	$(addprefix ./obj/my_checker_utils/, $(CHECKER_UTILS_DEP))
CMP_FLAGS			=	-Wall -Wextra -Werror $(DEBUG_FLAG)
DEBUG_FLAG 			=
INC_FLAGS			=	-I$(INC_DIR) -I$(LIBFT_DIR) -I$(PRINTF_DIR)
DEP_FLAGS			=	-MMD -MP
ARG					=	0

ifdef BONUS_FLG
	CHECKER_NAME = checker
endif

all : make-libft make-printf $(NAME)

$(NAME):$(PUSH_SWAP_NAME) $(CHECKER_NAME)

$(PUSH_SWAP_NAME):$(MAIN_OBJ_FULLNAME) $(LIST_OBJ_FULLNAME) $(ERR_OBJ_FULLNAME) $(OPE_OBJ_FULLNAME) $(ALGO_OBJ_FULLNAME) $(PRINTF_OBJ_FULLNAME) $(LIBFT_NAME)
	$(CC) $(CMP_FLAGS) $(INC_FLAGS) $(MAIN_OBJ_FULLNAME) $(LIST_OBJ_FULLNAME) $(ERR_OBJ_FULLNAME) $(OPE_OBJ_FULLNAME) $(ALGO_OBJ_FULLNAME) $(PRINTF_OBJ_FULLNAME) $(LIBFT_NAME) -o $(PUSH_SWAP_NAME)

$(CHECKER_NAME): $(CHECKER_OBJ_FULLNAME) $(CHECKER_UTILS_OBJ_FULLNAME) $(PRINTF_OBJ_FULLNAME) $(LIBFT_NAME)
	$(CC) $(CMP_FLAGS) $(INC_FLAGS) $(CHECKER_OBJ_FULLNAME) $(CHECKER_UTILS_OBJ_FULLNAME) $(PRINTF_OBJ_FULLNAME) $(LIBFT_NAME) -o $(CHECKER_NAME)

$(MAIN_OBJ_DIR)/%.o:$(MAIN_SRC_DIR)/%.c
	mkdir -p $(MAIN_OBJ_DIR)
	$(CC) $(CMP_FLAGS) $(INC_FLAGS) $(DEP_FLAGS) -o $@ -c $<

$(LIST_OBJ_DIR)/%.o:$(LIST_SRC_DIR)/%.c
	mkdir -p $(LIST_OBJ_DIR)
	$(CC) $(CMP_FLAGS) $(INC_FLAGS) $(DEP_FLAGS) -o $@ -c $<

$(ERR_OBJ_DIR)/%.o:$(ERR_SRC_DIR)/%.c
	mkdir -p $(ERR_OBJ_DIR)
	$(CC) $(CMP_FLAGS) $(INC_FLAGS) $(DEP_FLAGS) -o $@ -c $<

$(OPE_OBJ_DIR)/%.o:$(OPE_SRC_DIR)/%.c
	mkdir -p $(OPE_OBJ_DIR)
	$(CC) $(CMP_FLAGS) $(INC_FLAGS) $(DEP_FLAGS) -o $@ -c $<

$(ALGO_OBJ_DIR)/%.o:$(ALGO_SRC_DIR)/%.c
	mkdir -p $(ALGO_OBJ_DIR)
	$(CC) $(CMP_FLAGS) $(INC_FLAGS) $(DEP_FLAGS) -o $@ -c $<

$(CHECKER_OBJ_DIR)/%.o:$(CHECKER_SRC_DIR)/%.c
	mkdir -p $(CHECKER_OBJ_DIR)
	$(CC) $(CMP_FLAGS) $(INC_FLAGS) $(DEP_FLAGS) -o $@ -c $<

$(CHECKER_UTILS_OBJ_DIR)/%.o:$(CHECKER_UTILS_SRC_DIR)/%.c
	mkdir -p $(CHECKER_UTILS_OBJ_DIR)
	$(CC) $(CMP_FLAGS) $(INC_FLAGS) $(DEP_FLAGS) -o $@ -c $<

make-libft:
	$(MAKE) -C $(LIBFT_DIR)
make-printf:
	$(MAKE) -C $(PRINTF_DIR)

clean:
	rm -rf $(MAIN_OBJ_FULLNAME)
	rm -rf $(MAIN_DEP_FULLNAME)
	rm -rf $(LIST_OBJ_FULLNAME)
	rm -rf $(LIST_DEP_FULLNAME)
	rm -rf $(ERR_OBJ_FULLNAME)
	rm -rf $(ERR_DEP_FULLNAME)
	rm -rf $(OPE_OBJ_FULLNAME)
	rm -rf $(OPE_DEP_FULLNAME)
	rm -rf $(ALGO_OBJ_FULLNAME)
	rm -rf $(ALGO_DEP_FULLNAME)
	rm -rf $(CHECKER_OBJ_FULLNAME)
	rm -rf $(CHECKER_DEP_FULLNAME)
	rm -rf $(CHECKER_UTILS_OBJ_FULLNAME)
	rm -rf $(CHECKER_UTILS_DEP_FULLNAME)
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(MAKE) -C $(PRINTF_DIR) clean

fclean:clean
	rm -rf push_swap
	rm -rf checker

re:fclean all

bonus:
	make BONUS_FLG="lets_create_checker"

asan:
	make DEBUG_FLAG="-g -fsanitize=address -fsanitize=undefined -fsanitize=integer"
asan-checker:
	make BONUS_FLG="lets_create_checker" DEBUG_FLAG="-g -fsanitize=address -fsanitize=undefined -fsanitize=integer"

norm:
	norminette src include libft printf | grep "Error" || true

#The following is test scripts. usege: prese delete "#". set counts of parametor you want to add ex.Make command ARG=5

#RANDOM_NUMBERS		:=	$(shell [ $(ARG) -ge 1 ] && yes 'if [ $$((RANDOM%+2)) -eq 1 ]; then echo $$((RANDOM)) ; else echo $$(($$((RANDOM))*-1)) ; fi' \
						| zsh | head -1000 | sort | uniq -u | sort -R | head -$(ARG) | xargs)
count-instruction:
	./push_swap $(RANDOM_NUMBERS) | ./checker $(RANDOM_NUMBERS); \
	./push_swap $(RANDOM_NUMBERS) | wc -l | sed 's/^ *//g';

show-instruction:
	./push_swap $(RANDOM_NUMBERS) | ./checker $(RANDOM_NUMBERS); \
	./push_swap $(RANDOM_NUMBERS);

valgrind:
	make DEBUG_FLAG="-g"; \
	valgrind --leak-check=full --track-origins=yes ./push_swap $(RANDOM_NUMBERS)

valgrind-checker:
	make bonus DEBUG_FLAG="-g"; \
	./push_swap $(RANDOM_NUMBERS) | valgrind --leak-check=full --track-origins=yes ./checker $(RANDOM_NUMBERS)

.PHONY: all make-objdir make-libft make-printf clean fclean re asan norm comp-debug exec-debug count-instruction show-instruction valgrind valgrind-checker

-include $(MAIN_DEP_FULLNAME) $(LIST_DEP_FULLNAME) $(ERR_DEP_FULLNAME) $(OPE_DEP_FULLNAME) $(ALG_DEP_FULLNAME) $(CHECKER_DEP_FULLNAME)
