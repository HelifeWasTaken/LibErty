/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** doc
*/

#ifndef DOC_H_
    #define DOC_H_

    ////////////////////////////////////////////////////////////
    /// \mainpage
    ///
    /// \section welcome Welcome
    /// Welcome to the official LibErty documentation.
    /// Here you will find a detailed view of all the LibErty functions
    ///
    /// This library has been created to prepare the stumpers at Epitech
    ///
    /// Here are some shorts examples that can be done with LibErty
    /// \code
    ///
    ///
    /// #include <eprintf.h>
    ///
    /// int main(void)
    /// {
    ///     efprintf(stdout, "This a an accurate printf"
    ///                     " and it can write to a file stream !"
    ///                     "And Look at this precision : %10.3f!", 987.2f);
    ///     efree_buff();
    ///     return (0);
    /// }
    ///
    /// \endcode
    ///
    /// \code
    ///
    ///
    /// #include <ebuffer.h>
    ///
    /// int main(void)
    /// {
    ///     ecreate_buff(NULL, true);
    ///
    ///     eappend_buff_str("hello");
    ///     efflush_buff(stdout);
    ///     efree_buff();
    ///     return (0);
    /// }
    ///
    /// \endcode
    ///
    /// \code
    ///
    /// #include <estring.h>
    ///
    /// int main(void)
    /// {
    ///     char *buffer = ECONCAT("hello", "world", "wow");
    ///     char *buffer2 = EJOIN(" -> ", "hello", "wow");
    ///
    ///     eprintf("%s | %s\n", buffer, buffer2);
    ///     efree(buffer);
    ///     efree(buffer2);
    ///     efree_buff();
    ///     return (0);
    /// }
    ///
    /// \endcode
    ///
    /// \code
    ///
    /// #include <linked_split.h>
    ///
    /// int main(void)
    /// {
    ///     linked_esplit_t *list = linked_esplit("Hello.World.Wow", ".");
    ///     linked_esplit_t *ptr = list;
    ///
    ///     for (; ptr; ptr = ptr->next)
    ///         eprintf("%s\n", ptr->str);
    ///     free_linked_esplit(list);
    ///     efree_buff();
    ///     return (0);
    /// }
    /// \endcode
    ///
    /// \code
    ///
    /// #include <eassert.h>
    ///
    /// int main(void)
    /// {
    ///     ASSERT("ls", "wrong argument");
    ///     DEBUG_ASSERT("ls", "wrong argument");
    ///     DEBUG_PRINTF("ls: wrong argument");
    ///     efree_buff();
    ///     return (0);
    /// }
    /// \endcode
    ///
    /// \code
    ///
    /// #include <estdio.h>
    ///
    /// int main(void)
    /// {
    ///    int a = INT_MAX;
    ///    int b = 4;
    ///
    ///    if (ADD_OVERFLOW_CHECK(a, b)) {
    ///         ASSERT("overflow checker", "a and b overflowed");
    ///         return (84);
    ///    }
    ///    return (0);
    /// }
    /// \endcode
    ////////////////////////////////////////////////////////////

#endif /* !DOC_H_ */
