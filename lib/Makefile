##
## EPITECH PROJECT, 2020
## LibErty
## File description:
## Makefile
##

CC				=	gcc

AR 				= 	ar rc

IFLAGS 			=	-I./include

LFLAGS 			=	-L. -lErty

DEBUG_FLAGS 	= 	-g3 -ggdb

TEST_FLAGS 		= 	--coverage -lcriterion

CFLAGS 			=	-W -Wall -Wextra $(IFLAGS) $(DEBUG_FLAGS)

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
					./estdlib/num/eatoll.c 				\
					./estdlib/num/euatoi.c 				\
					./estdlib/num/euatol.c 				\
					./estdlib/num/euatoll.c 			\
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

SRC_STRING_CMP	=	./estring/cmp/estrlen.c 			\
					./estring/cmp/estrchr.c 			\
					./estring/cmp/estrcmp.c 			\
					./estring/cmp/estrncmp.c 			\
					./estring/cmp/estrstr.c 			\
					./estring/cmp/ecount_occurences.c 	\
					./estring/cmp/estartswith.c 		\
					./estring/cmp/eendswith.c 			\
					./estring/cmp/earray_len.c

SRC_STRING_CPY	=	./estring/cpy/estrcpy.c 			\
					./estring/cpy/estrncpy.c 			\
					./estring/cpy/estrdup.c 			\
					./estring/cpy/estrndup.c 			\
					./estring/cpy/estrcat.c 			\
					./estring/cpy/esplit.c 				\
					./estring/cpy/econcat.c 			\
					./estring/cpy/earrconcat.c 			\
					./estring/cpy/egetsubstr.c

SRC_STRING_IS	=	./estring/is/estr_isalpha.c 		\
					./estring/is/estr_isalphanum.c 		\
					./estring/is/estr_islower.c 		\
					./estring/is/estr_isnum.c 			\
					./estring/is/estr_isprintable.c 	\
					./estring/is/estr_isupper.c

SRC_STRING_MEM	=	./estring/mem/ememcpy.c 			\
					./estring/mem/ememset.c 			\
					./estring/mem/ememcmp.c 			\
					./estring/mem/ebzero.c 				\

SRC_STRING_NUM	=	./estring/num/enblen.c 				\
					./estring/num/enb_baselen.c 		\
					./estring/num/eunblen.c 			\
					./estring/num/eunb_baselen.c

SRC_STRING_MISC	=	./estring/misc/erevstr.c 			\
					./estring/misc/estr_capitalize.c

SRC_LINKED 		= 	./linked/linked_esplit.c

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

SRC_EPRINTF_MSC =	./eprintf/misc/check_eprintf_format.c

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
					$(SRC_LINKED)							\
					$(SRC_EBUFF)							\
					$(SRC_WSTRING)							\
					$(SRC_EPRINTF) 							\
					$(SRC_EFILE)							\
					$(SRC_STDIO)

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

$(NAME): build_lib copy	## Call build_lib

build_lib: $(OBJ) ## Build LibErty
	$(AR) $(NAME) $(OBJ)

main: ## Build main file for testing purposes
	$(CC) main.c $(LFLAGS) $(CFLAGS) -o erty

copy: 	## Copy includes
	mkdir -p ../include
	mkdir -p ../lib_files
	cp include/*.h ../include
	mv $(NAME) ../lib_files

clean: ## Clean every temporay well knowed files
	@find . -type f \( -name "\#*\#" -o -name "*.swp" \) -delete
	@find . -type f \( -name "*.gc*" -o -name "a.out" \) -delete
	@echo "Cleaned project !"

fclean:		clean ## Call clean rule and remove *.o and *.a files
	@find . -type f \( -name "*.o" -o -name "*~" -o -name "*.a" \) -delete

valgrind: build_lib main ## Build the lib the main.c and launch with valgrind
	valgrind --exit-on-first-error=yes ./erty

re:			fclean all ## Call fclean then all rule

usage: ## Print the usage
	@grep -h "##" Makefile | sed -e 's/\(\:.*\#\#\)/\:\ /' | grep -v grep | sed -e 's/\\$$//' | sed -e 's/##//'
	@echo "\nEnjoy the project ! :D"

.PHONY:		all build_lib copy clean fclean re
