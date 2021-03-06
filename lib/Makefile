##
## EPITECH PROJECT, 2020
## LibErty
## File description:
## Makefile
##

GREEN 			=	\x1b[32;01m
RED 			=	\x1b[31;01m
YELLOW 			=	\x1b[33;01m
WHITE 			=	\x1b[00;00m
CYAN 			=	\x1b[34;01m
DEFAULT 		= 	\x1b[36;01m

SHELL 			=	bash

CC				=	gcc

AR 				= 	ar rc

IFLAGS 			=	-I./include

DEBUG_FLAGS 	= 	-g3 -ggdb -O0 -O2

TEST_FLAGS 		= 	--coverage -lcriterion

WFLAGS 			=	-W -Wall -Wextra -Werror

POSIX_FLAGS 	=	-D_POSIX_C_SOURCE=200809L -D_GNU_SOURCE

STANDARD_FLAGS 	=	-std=c99

CFLAGS 			?=	 $(WFLAGS) $(POSIX_FLAGS) $(STANDARD_FLAGS) $(IFLAGS)

DEBUG 			?=	0

ifeq ($(DEBUG),1)
	CFLAGS 		+=	$(DEBUG_FLAGS)
endif

SRC_CTYPE_IS	=	./ectypes/is/eis_alpha.c 			\
					./ectypes/is/eis_lower.c 			\
					./ectypes/is/eis_upper.c 			\
					./ectypes/is/eis_num.c 				\
					./ectypes/is/eis_alphanum.c		 	\
					./ectypes/is/eis_space.c 			\
					./ectypes/is/eis_punct.c 			\
					./ectypes/is/eis_printable.c

SRC_CTYPE_TO	=	./ectypes/to/eto_lower.c 			\
					./ectypes/to/eto_upper.c


SRC_FD_BASIC	=	./efd/basic/edputchar.c 			\
					./efd/basic/edputs.c

SRC_FD_NUM 		= 	./efd/num/edputnbr.c 				\
					./efd/num/eduputnbr.c 				\
					./efd/num/edputfloat.c

SRC_EFILE_BASIC	=	./efile/basic/efputchar.c 			\
					./efile/basic/efputs.c

SRC_EFILE_NUM 	= 	./efile/num/efputnbr.c 				\
					./efile/num/efuputnbr.c 			\
					./efile/num/efputfloat.c

SRC_STDOUT 		=	./estdio/stdout/eputchar.c 			\
					./estdio/stdout/eputs.c

SRC_STDERR  	=	./estdio/stderr/e_errputchar.c 		\
					./estdio/stderr/e_errputs.c

SRC_STDLIB_MEM	=	./estdlib/mem/emalloc.c 			\
					./estdlib/mem/efree.c 				\
					./estdlib/mem/ecalloc.c 			\
					./estdlib/mem/erealloc.c

SRC_STDLIB_NUM	=	./estdlib/num/eatoi.c 				\
					./estdlib/num/eatol.c 				\
					./estdlib/num/euatoi.c 				\
					./estdlib/num/euatol.c 				\
					./estdlib/num/eitoa.c 				\
					./estdlib/num/eaitoa.c 				\
					./estdlib/num/euitoa.c 				\
					./estdlib/num/eauitoa.c 			\
					./estdlib/num/estrtol.c 			\
					./estdlib/num/estrtoll.c 			\
					./estdlib/num/eftoa.c 				\
					./estdlib/num/eaftoa.c


SRC_STDLIB_PTR	=	./estdlib/ptr/eswap.c 				\
					./estdlib/ptr/eptrswap.c 			\
					./estdlib/ptr/eshowptr.c

SRC_STDLIB_MISC	=	./estdlib/misc/eget_start_sign.c 	\
					./estdlib/misc/eis_valid_strtoll.c 	\
					./estdlib/misc/eget_float_decimals.c

SRC_CSTRING_CMP	=	./ecstring/cmp/estrlen.c 			\
					./ecstring/cmp/estrchr.c 			\
					./ecstring/cmp/estrcmp.c 			\
					./ecstring/cmp/estrncmp.c 			\
					./ecstring/cmp/estrstr.c 			\
					./ecstring/cmp/ecount_occurences.c 	\
					./ecstring/cmp/estartswith.c 		\
					./ecstring/cmp/eendswith.c 			\
					./ecstring/cmp/earray_len.c 		\
					./ecstring/cmp/ecount_tab.c

SRC_CSTRING_CPY	=	./ecstring/cpy/estrcpy.c 			\
					./ecstring/cpy/estrncpy.c 			\
					./ecstring/cpy/estrdup.c 			\
					./ecstring/cpy/estrndup.c 			\
					./ecstring/cpy/estrcat.c 			\
					./ecstring/cpy/esplit.c 			\
					./ecstring/cpy/eappend_tab.c 		\
					./ecstring/cpy/ecopy_tab.c 			\
					./ecstring/cpy/econcat.c 			\
					./ecstring/cpy/earrconcat.c 		\
					./ecstring/cpy/egetsubstr.c

SRC_CSTRING_IS	=	./ecstring/is/estr_isalpha.c 		\
					./ecstring/is/estr_isalphanum.c 		\
					./ecstring/is/estr_islower.c 		\
					./ecstring/is/estr_isnum.c 			\
					./ecstring/is/estr_isprintable.c 	\
					./ecstring/is/estr_isupper.c

SRC_CSTRING_MEM	=	./ecstring/mem/ememcpy.c 			\
					./ecstring/mem/ememset.c 			\
					./ecstring/mem/ememcmp.c 			\
					./ecstring/mem/ebzero.c 				\

SRC_CSTRING_NUM	=	./ecstring/num/enblen.c 				\
					./ecstring/num/enb_baselen.c 		\
					./ecstring/num/eunblen.c 			\
					./ecstring/num/eunb_baselen.c

SRC_CSTRING_MISC	=	./ecstring/misc/erevstr.c 			\
						./ecstring/misc/estr_capitalize.c

SRC_WSTRING		=	./wstring/ewcslen.c 				\
					./wstring/ewcsputs.c 				\
					./wstring/convert_ewcslen.c 		\
					./wstring/convert_wchr_to_chr.c 	\
					./wstring/ewcstombs.c

SRC_EBUFF 		=	./ebuff/ecreate_buff.c				\
					./ebuff/eappend_buff.c 				\
					./ebuff/ebuff_flush.c				\
					./ebuff/efree_buff.c 				\
					./ebuff/eget_buff.c 				\
					./ebuff/erealloc_buff.c 			\
					./ebuff/ereset_buff.c

SRC_EPRINTF_STD	=	./eprintf/standard/eprintf.c 		\
					./eprintf/standard/easprintf.c 		\
					./eprintf/standard/edprintf.c 		\
					./eprintf/standard/efprintf.c

SRC_EPRINTF_VAR =	./eprintf/variadic/evprintf.c 		\
					./eprintf/variadic/evasprintf.c 	\
					./eprintf/variadic/evdprintf.c 		\
					./eprintf/variadic/evfprintf.c

EPRINTF_GBL_ARG		= ./eprintf/parser/get_arg/

SRC_EPRINTF_ARG	=	$(EPRINTF_GBL_ARG)/eprintf_get_arg.c 	\
					$(EPRINTF_GBL_ARG)/get_eprintf_ptr.c

EPRINTF_MOD 	= 	./eprintf/parser/modif

SRC_EPRINTF_MOD	=	$(EPRINTF_MOD)/get_eprintf_flag_modifiers.c		\
					$(EPRINTF_MOD)/get_eprintf_len_flag.c 			\
					$(EPRINTF_MOD)/get_eprintf_modifications.c

EPRINTF_LCL		=	./eprintf/parser/local

SRC_EPRINTF_LCL	=	$(EPRINTF_LCL)/eprintf_append_padding.c 		\
					$(EPRINTF_LCL)/eprintf_local_char.c	 			\
					$(EPRINTF_LCL)/eprintf_local_getsize.c 			\
					$(EPRINTF_LCL)/eprintf_local_int.c 				\
					$(EPRINTF_LCL)/eprintf_local_str.c 				\
					$(EPRINTF_LCL)/eprintf_local_uint.c 			\
					$(EPRINTF_LCL)/eprintf_local_oct.c 				\
					$(EPRINTF_LCL)/eprintf_local_hex.c 				\
					$(EPRINTF_LCL)/eprintf_local_ptr.c 				\
					$(EPRINTF_LCL)/eprintf_local_double.c 			\
					$(EPRINTF_LCL)/get_conversion_padding.c

SRC_EPRINTF_MSC =	./eprintf/misc/check_eprintf_format.c 		\
					./eprintf/misc/eprintf_failure.c

SRC_EPRINTF_PRS	=	$(SRC_EPRINTF_LCL) 						\
					$(SRC_EPRINTF_MOD)						\
					$(SRC_EPRINTF_ARG) 						\
					./eprintf/parser/eprintf_parser.c

SRC_EPRINTF_BUF =	./eprintf/buffer/eprintf_global_buff.c 		\
					./eprintf/buffer/eprintf_buffer_reset.c 	\
					./eprintf/buffer/eprintf_free_buff.c 		\
					./eprintf/buffer/eformat.c

SRC_EWRITE		=	./ewrite/ewrite.c 					\
					./ewrite/efwrite.c

SRC_SSTR		=	./esstring/init.c 				\
					./esstring/append.c 			\
					./esstring/assign.c 			\
					./esstring/assign_n.c			\
					./esstring/at.c 				\
					./esstring/compare.c 			\
					./esstring/ncompare.c 			\
					./esstring/print.c 				\
					./esstring/to_buf.c 			\
					./esstring/free.c

SRC_EHASHMAP 	=	./ehashmap/free_ehashmap.c 		\
					./ehashmap/get_ehashmap.c 		\
					./ehashmap/insert_ehashmap.c

SRC_ESTDIO		=	$(SRC_ESTDOUT) 							\
					$(SRC_ESTDERR)

SRC_CTYPE		= 	$(SRC_CTYPE_IS)							\
					$(SRC_CTYPE_TO)

SRC_FD 			= 	$(SRC_FD_BASIC)							\
					$(SRC_FD_NUM) 							\

SRC_STDLIB 		= 	$(SRC_STDLIB_MEM)						\
					$(SRC_STDLIB_NUM) 						\
					$(SRC_STDLIB_PTR)						\
					$(SRC_STDLIB_MISC)

SRC_CSTRING		=	$(SRC_CSTRING_CMP)						\
					$(SRC_CSTRING_CPY) 						\
					$(SRC_CSTRING_IS)						\
					$(SRC_CSTRING_MISC) 						\
					$(SRC_CSTRING_NUM)						\
					$(SRC_CSTRING_MEM)

SRC_EPRINTF	 	=	$(SRC_EPRINTF_STD) 						\
					$(SRC_EPRINTF_VAR)						\
					$(SRC_EPRINTF_PRS)						\
					$(SRC_EPRINTF_BUF)						\
					$(SRC_EPRINTF_MSC)

SRC_EFILE 		=	$(SRC_EFILE_BASIC)						\
					$(SRC_EFILE_NUM)

SRC_STDIO 		= 	$(SRC_STDOUT) 							\
					$(SRC_STDERR)

SRC				=	$(SRC_EWRITE) 							\
					$(SRC_CTYPE) 							\
					$(SRC_FD)								\
					$(SRC_STRING)							\
					$(SRC_STDLIB)							\
					$(SRC_EBUFF)							\
					$(SRC_WSTRING)							\
					$(SRC_EPRINTF) 							\
					$(SRC_EFILE)							\
					$(SRC_STDIO) 							\
					$(SRC_CSTRING) 							\
					$(SRC_SSTR) 							\
					$(SRC_EHASHMAP)

TEST_ECTYPE_IS 	=	./tests/ectypes/is/test_eis_alpha.c 	\
					./tests/ectypes/is/test_eis_lower.c 	\
					./tests/ectypes/is/test_eis_upper.c 	\
					./tests/ectypes/is/test_eis_num.c 		\
					./tests/ectypes/is/test_eis_alphanum.c	\
					./tests/ectypes/is/test_eis_space.c 	\
					./tests/ectypes/is/test_eis_punct.c 	\
					./tests/ectypes/is/test_eis_printable.c

TEST_ECTYPE_TO	=	./tests/ectypes/to/test_eto_lower.c		\
					./tests/ectypes/to/test_eto_upper.c

TEST_EFD_BASIC 	=	./tests/efd/basic/test_edputchar.c \
					./tests/efd/basic/test_edputs.c \

TEST_EFD_NUM 	=	./tests/efd/num/test_edputnbr.c \
					./tests/efd/num/test_eduputnbr.c \
					./tests/efd/num/test_edputfloat.c

TEST_EFILE_BASIC =	./tests/efile/basic/test_efputchar.c \
					./tests/efile/basic/test_efputs.c \

TEST_EFILE_NUM 	=	./tests/efile/num/test_efputnbr.c \
					./tests/efile/num/test_efuputnbr.c \
					./tests/efile/num/test_efputfloat.c

TEST_ESTDOUT 	= 	./tests/estdio/stdout/test_eputchar.c \
					./tests/estdio/stdout/test_eputs.c

TEST_ESTDERR 	= 	./tests/estdio/stderr/test_e_errputchar.c \
					./tests/estdio/stderr/test_e_errputs.c

TEST_CTYPES 	= 	$(TEST_ECTYPE_IS) \
					$(TEST_ECTYPE_TO)

TEST_EFD 		=	$(TEST_EFD_BASIC) \
					$(TEST_EFD_NUM)

TEST_EFILE 		=	$(TEST_EFILE_BASIC) \
					$(TEST_EFILE_NUM)

TEST_ESTDIO 	= 	$(TEST_ESTDOUT) \
					$(TEST_ESTDERR)

TEST_EWRITE 	= 	./tests/ewrite/test_efwrite.c \
					./tests/ewrite/test_ewrite.c

SRC_TEST 	= $(TEST_CTYPES) \
			  $(TEST_EFD) \
			  $(TEST_EFILE) \
			  $(TEST_EWRITE)

OBJ 		=	$(SRC:.c=.o)

NAME 		=	liberty.a

all:		$(NAME)	## Put whatever you want here (default : Call build_lib)

$(NAME): info ## Call build_lib
	@make -j -C . build_lib --silent
	@make -j -C . copy --silent

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf "$(GREEN)[$(YELLOW)Linked$(GREEN)]$(WHITE) % 43s\n$(DEFAULT)" $@ | tr ' ' '.'

build_lib: $(OBJ) ## Build LibErty
	$(AR) $(NAME) $(OBJ)
	@printf "$(GREEN)[$(YELLOW)Linked$(GREEN)]$(WHITE) % 43s$(DEFAULT)\n" $(NAME) | tr ' ' '.'
	@printf "$(GREEN)[$(CYAN)Linked all Liberty files$(GREEN)]\n$(WHITE)"

copy: 	## Copy includes
	@mkdir -p ../include
	@ln -rsf ./include/erty ../include/

clean: ## Clean every temporay well knowed files
	@rm -f $(OBJ) $(NAME)
	@printf "\e[1;32mFinished removing objects\e[0m\n"
	@find . -type f \( -name "\#*\#" -o -name "*.swp" \) -delete

fclean:		clean ## Call clean rule and remove *.o and *.a files
	@find . -type f \( -name "*~" -o -name "*.a" \) -delete

valgrind: build_lib main ## Build the lib the main.c and launch with valgrind
	valgrind --exit-on-first-error=yes ./erty

re: ## Call fclean then all
	make -j -C . fclean --silent
	make -j -C . all --silent

info:
	@printf "██╗     ██╗██████╗ ███████╗██████╗ ████████╗██╗   ██╗\n"
	@printf "██║     ██║██╔══██╗██╔════╝██╔══██╗╚══██╔══╝╚██╗ ██╔╝\n"
	@printf "██║     ██║██████╔╝█████╗  ██████╔╝   ██║    ╚████╔╝\n"
	@printf "██║     ██║██╔══██╗██╔══╝  ██╔══██╗   ██║     ╚██╔╝\n"
	@printf "███████╗██║██████╔╝███████╗██║  ██║   ██║      ██║\n"
	@printf "╚══════╝╚═╝╚═════╝ ╚══════╝╚═╝  ╚═╝   ╚═╝      ╚═╝\n"
	@printf "%50s\n" " " | tr ' ' '-'
	@printf "$(GREEN)[$(YELLOW)Info$(GREEN)] $(WHITE)Linking objects with:"
	@printf "\n\t$(CYAN)CC        $(WHITE)= $(GREEN)$(CC)"
	@printf "\n\t$(CYAN)CFLAGS    $(WHITE)= $(GREEN)$(CFLAGS)$(DEFAULT)"
	@printf "\n\t$(CYAN)AR        $(WHITE)= $(GREEN)$(AR)$(DEFAULT)"
	@printf "\n\t$(CYAN)SHELL     $(WHITE)= $(GREEN)$(SHELL)$(DEFAULT)\n"

.PHONY:		all build_lib copy clean fclean re
