/*
** EPITECH PROJECT, 2020
** LibErty
** File description:
** eendian
*/

#ifndef EENDIAN_H_
    #define EENDIAN_H_
    #include <ectypes.h>

    static inline u16_t u16_swap_endian(u16_t val)
    {
        return (
            ((val >> 8) & 0x00FF) |
            ((val << 8) & 0xFF00)
        );
    }

    static inline u32_t u32_swap_endian(u32_t val)
    {
        return (
            ((val >> 24) & 0x000000FF) |
            ((val >> 8) & 0x0000FF00) |
            ((val << 8) & 0x00FF0000) |
            ((val << 24) & 0xFF000000)
        );
    }

    static inline u64_t u64_swap_endian(u64_t val)
    {
        return (
            ((val >> 56) & 0x00000000000000FF) |
            ((val >> 40) & 0x000000000000FF00) |
            ((val >> 24) & 0x0000000000FF0000) |
            ((val >> 8) & 0x00000000FF000000) |
            ((val << 8) & 0x000000FF00000000) |
            ((val << 24) & 0x0000FF0000000000) |
            ((val << 40) & 0x00FF000000000000) |
            ((val << 56) & 0xFF00000000000000)
        );
    }

#endif /* !EENDIAN_H_ */
