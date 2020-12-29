##
## EPITECH PROJECT, 2020
## LibErty
## File description:
## Makefile
##

CC				=	gcc

AR 				= 	ar rc

IFLAGS 			=	-I./include

DEBUG_FLAGS 	= 	-O1 -g3 -ggdb

CFLAGS 			=	-W -Wall -Wextra -Werror $(IFLAGS)

SRC_CTYPE_IS	=	./lib/ectypes/is/eis_alpha.c 			\
					./lib/ectypes/is/eis_lower.c 			\
					./lib/ectypes/is/eis_upper.c 			\
					./lib/ectypes/is/eis_num.c 				\
					./lib/ectypes/is/eis_alphanum.c		 	\
					./lib/ectypes/is/eis_space.c 			\
					./lib/ectypes/is/eis_punct.c 			\
					./lib/ectypes/is/eis_printable.c

SRC_CTYPE_TO	=	./lib/ectypes/to/eto_lower.c 			\
					./lib/ectypes/to/eto_upper.c


SRC_FD_BASIC	=	./lib/efd/basic/edputchar.c 			\
					./lib/efd/basic/edputs.c

SRC_FD_NUM 		= 	./lib/efd/num/edputnbr.c 				\
					./lib/efd/num/eduputnbr.c 				\
					./lib/efd/num/edputfloat.c

SRC_EFILE_BASIC	=	./lib/efile/basic/efputchar.c 			\
					./lib/efile/basic/efputs.c

SRC_EFILE_NUM 	= 	./lib/efile/num/efputnbr.c 				\
					./lib/efile/num/efuputnbr.c 			\
					./lib/efile/num/efputfloat.c

SRC_STDOUT 		=	./lib/estdio/stdout/eputchar.c 			\
					./lib/estdio/stdout/eputs.c

SRC_STDERR  	=	./lib/estdio/stderr/e_errputchar.c 		\
					./lib/estdio/stderr/e_errputs.c

SRC_STDLIB_MEM	=	./lib/estdlib/mem/emalloc.c 			\
					./lib/estdlib/mem/efree.c 				\
					./lib/estdlib/mem/ecalloc.c 			\
					./lib/estdlib/mem/erealloc.c

SRC_STDLIB_NUM	=	./lib/estdlib/num/eatoi.c 				\
					./lib/estdlib/num/eatol.c 				\
					./lib/estdlib/num/eatoll.c 				\
					./lib/estdlib/num/euatoi.c 				\
					./lib/estdlib/num/euatol.c 				\
					./lib/estdlib/num/euatoll.c 			\
					./lib/estdlib/num/eitoa.c 				\
					./lib/estdlib/num/eaitoa.c 				\
					./lib/estdlib/num/euitoa.c 				\
					./lib/estdlib/num/eauitoa.c 			\
					./lib/estdlib/num/estrtol.c 			\
					./lib/estdlib/num/estrtoll.c 			\
					./lib/estdlib/num/eftoa.c 				\
					./lib/estdlib/num/eaftoa.c


SRC_STDLIB_PTR	=	./lib/estdlib/ptr/eswap.c 				\
					./lib/estdlib/ptr/eptrswap.c 			\
					./lib/estdlib/ptr/eshowptr.c

SRC_STDLIB_MISC	=	./lib/estdlib/misc/eget_start_sign.c 	\
					./lib/estdlib/misc/eis_valid_strtoll.c 	\
					./lib/estdlib/misc/eget_float_decimals.c

SRC_STRING_CMP	=	./lib/estring/cmp/estrlen.c 			\
					./lib/estring/cmp/estrchr.c 			\
					./lib/estring/cmp/estrcmp.c 			\
					./lib/estring/cmp/estrncmp.c 			\
					./lib/estring/cmp/estrstr.c 			\
					./lib/estring/cmp/ecount_occurences.c 	\
					./lib/estring/cmp/estartswith.c 		\
					./lib/estring/cmp/eendswith.c

SRC_STRING_CPY	=	./lib/estring/cpy/estrcpy.c 			\
					./lib/estring/cpy/estrncpy.c 			\
					./lib/estring/cpy/estrdup.c 			\
					./lib/estring/cpy/estrndup.c 			\
					./lib/estring/cpy/estrcat.c 			\
					./lib/estring/cpy/esplit.c 				\
					./lib/estring/cpy/econcat.c 			\
					./lib/estring/cpy/earrconcat.c 			\
					./lib/estring/cpy/egetsubstr.c

SRC_STRING_IS	=	./lib/estring/is/estr_isalpha.c 		\
					./lib/estring/is/estr_isalphanum.c 		\
					./lib/estring/is/estr_islower.c 		\
					./lib/estring/is/estr_isnum.c 			\
					./lib/estring/is/estr_isprintable.c 	\
					./lib/estring/is/estr_isupper.c

SRC_STRING_MEM	=	./lib/estring/mem/ememcpy.c 			\
					./lib/estring/mem/ememset.c 			\
					./lib/estring/mem/ememcmp.c 			\
					./lib/estring/mem/ebzero.c 				\

SRC_STRING_NUM	=	./lib/estring/num/enblen.c 				\
					./lib/estring/num/eunblen.c

SRC_STRING_MISC	=	./lib/estring/misc/erevstr.c 			\
					./lib/estring/misc/estr_capitalize.c

SRC_LINKED 		= 	./lib/linked/linked_esplit.c

SRC_WSTRING		=	./lib/wstring/ewcslen.c 				\
					./lib/wstring/ewcsputs.c 				\
					./lib/wstring/convert_ewcslen.c 		\
					./lib/wstring/convert_wchr_to_chr.c 	\
					./lib/wstring/ewcstombs.c

SRC_EBUFF 		=	./lib/ebuff/ecreate_buff.c				\
					./lib/ebuff/eappend_buff.c 				\
					./lib/ebuff/ebuff_flush.c				\
					./lib/ebuff/efree_buff.c 				\
					./lib/ebuff/eget_buff.c 				\
					./lib/ebuff/erealloc_buff.c 			\
					./lib/ebuff/ereset_buff.c


SRC_EPRINTF_STD	=	./lib/eprintf/standard/eprintf.c 		\
					./lib/eprintf/standard/easprintf.c 		\
					./lib/eprintf/standard/edprintf.c 		\
					./lib/eprintf/standard/efprintf.c

SRC_EPRINTF_VAR =	./lib/eprintf/variadic/evprintf.c 		\
					./lib/eprintf/variadic/evasprintf.c 	\
					./lib/eprintf/variadic/evdprintf.c 		\
					./lib/eprintf/variadic/evfprintf.c

EPRINTF_GBL_ARG		= ./lib/eprintf/parser/get_arg/

SRC_EPRINTF_ARG	=	$(EPRINTF_GBL_ARG)/eprintf_get_arg.c 	\
					$(EPRINTF_GBL_ARG)/get_eprintf_ptr.c

EPRINTF_MOD 	= 	./lib/eprintf/parser/modif

SRC_EPRINTF_MOD	=	$(EPRINTF_MOD)/get_eprintf_flag_modifiers.c		\
					$(EPRINTF_MOD)/get_eprintf_len_flag.c 			\
					$(EPRINTF_MOD)/get_eprintf_modifications.c

EPRINTF_LCL		=	./lib/eprintf/parser/local

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

SRC_EPRINTF_MSC =	./lib/eprintf/misc/check_eprintf_format.c

SRC_EPRINTF_PRS	=	$(SRC_EPRINTF_LCL) 						\
					$(SRC_EPRINTF_MOD)						\
					$(SRC_EPRINTF_ARG) 						\
					./lib/eprintf/parser/eprintf_parser.c

SRC_EWRITE		=	./lib/ewrite/ewrite.c 					\
					./lib/ewrite/efwrite.c

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

SRC_STRING		=	$(SRC_STRING_CMP)						\
					$(SRC_STRING_CPY) 						\
					$(SRC_STRING_IS)						\
					$(SRC_STRING_MISC) 						\
					$(SRC_STRING_NUM)						\
					$(SRC_STRING_MEM)

SRC_EPRINTF	 	=	$(SRC_EPRINTF_STD) 						\
					$(SRC_EPRINTF_VAR)						\
					$(SRC_EPRINTF_PRS)						\
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
					$(SRC_LINKED)							\
					$(SRC_EBUFF)							\
					$(SRC_WSTRING)							\
					$(SRC_EPRINTF) 							\
					$(SRC_EFILE)							\
					$(SRC_STDIO)

OBJ 		=	$(SRC:.c=.o)

NAME 		=	libErty.a

all:		$(NAME)	## Put whatever you want here (default : Call build_lib)

$(NAME): build_lib	## Call build_lib

build_lib: 	$(OBJ) ## Build LibErty
	$(AR) $(NAME) $(OBJ)

main:	## Build main file for testing purposes
	$(CC) main.c -L. -lErty $(CFLAGS) -o erty

copy: 	## Copy includes
	mkdir -p ../../include
	cp include/*.h ../../include

clean: ## Clean every temporay well knowed files
	@find . -type f \( -name "\#*\#" -o -name "*.swp" \) -delete
	@find . -type f \( -name "*.gc*" -o -name "a.out" \) -delete
	@echo "Cleaned project !"

fclean:		clean ## Call clean rule and remove *.o and *.a files
	@find . -type f \( -name "*.o" -o -name "*~" -o -name "*.a" \) -delete

valgrind: build_lib main ## Build the lib the main.c and launch with valgrind
	valgrind --exit-on-first-error=yes ./erty

re:			fclean all ## Call fclean then all rule

#test: tests_run ## An alias to tests_run (Not aviable yet)

#tests_run: clean ## Cleans the project and run the unit tests (Not aviable yet)
#	$(CC) $(SRC_TEST) $(CFLAGS) $(TEST_FLAGS) -o $(UNIT_TEST_EXEC)
#	./$(UNIT_TEST_EXEC)

usage: ## Print the usage
	@grep -h "##" Makefile | sed -e 's/\(\:.*\#\#\)/\:\ /' | grep -v grep | sed -e 's/\\$$//' | sed -e 's/##//'
	@echo "\nEnjoy the project ! :D"

.PHONY:		all build_lib copy clean fclean re
