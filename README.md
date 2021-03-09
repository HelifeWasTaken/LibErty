# LibErty

## Welcome

Here is the "Libmy" that I used at Epitech

## Documentation

A documentation is aviable if you have Doxygen : `doxygen Doxyfile` in order to
generate the documentation

## Disclaimer

I noticed that buffer handling for asprintf won't work
As I moved recently on Github totally I will implement asap Github Actions for compilation security
More unit tests with criterion (actually 37% of the library is tested with 19% of the library which is untestable because of malloc verification)
Fix of the buffer handling

## Coding style

The code follows a particular coding style enforced by my school. The most
important aspects are:
- No more than 5 functions in a `*.c` file.
- No more than 3 levels of branching.
- No more than 1 `else if` in a branching chain.
- No `typedef`s in `*.c` files.
- No structure arguments passed by value (always use a pointer).
- Functions must not exceed 20 lines.
- Variable declarations must always be done at the top of the function scope.
- The only empty line in functions is the one separating variable declarations
  with the rest of the function's body.
- Source files must start with some header containing the project name and file
  description.

Here are some shorts example of what can be done with LibErty:

```c
#include <erty/eprintf.h>

int main(void)
{
     efprintf(stdout, "This a an accurate printf"
                     " and it can write to a file stream !"
                     "And Look at this precision : %10.3f!", 987.2f);
     eprintf_free_buff();
     return (0);
}
```

```c
#include <erty/ebuffer.h>

int main(void)
{
    ebuff_t *buffer = ecreate_buff(NULL, true);

    eappend_buff_str(&buffer, "hello");
    efflush_buff(&buffer, stdout);
    efree_buff(&buffer);
    return (0);
}
```

```c
#include <erty/string/ecstring.h>

int main(void)
{
    cstr_t buffer = ECONCAT("hello", "world", "wow");
    cstr_t buffer2 = EJOIN(" -> ", "hello", "wow");

    eprintf("%s | %s\n", buffer, buffer2);
    efree(buffer);
    efree(buffer2);
    eprintf_free_buff();
    return (0);
}
```

```c
#include <erty/linked_split.h>

int main(void)
{
    linked_esplit_t *list = linked_esplit("Hello.World.Wow", ".");
    linked_esplit_t *ptr = list;

    for (; ptr; ptr = ptr->next)
        eprintf("%s\n", ptr->str);
    free_linked_esplit(list);
    eprintf_free_buff();
    return (0);
}
```

```c
#include <erty/eassert.h>

int main(void)
{
    ASSERT("ls", "wrong argument");
    DEBUG_ASSERT("ls", "wrong argument");
    DEBUG_PRINTF("ls: wrong argument");
    eprintf_free_buff();
    return (0);
}
```

```c
#include <erty/estdio.h>

int main(void)
{
   i32_t a = INT_MAX;
   i32_t b = 4;

   if (ADD_OVERFLOW_CHECK(a, b)) {
        ASSERT("overflow checker", "a and b overflowed");
        return (84);
   }
   return (0);
}
```
