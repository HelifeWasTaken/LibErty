/*
** EPITECH PROJECT, 2021
** LibErty
** File description:
** opt
*/

#ifndef __LIBERTY__OPT__H__
    #define __LIBERTY__OPT__H__

    #include <erty/ectypes.h>

    #define OPT(name) \
        struct my_opt_##name

    #define INIT_OPT(T, name) \
        OPT(name) { \
            T value; \
            bool is_ok; \
        };

    #define OK(name, val) \
        (OPT(name)){.value=val, .is_ok=true}

    #define ERR(name, ...) \
        (OPT(name)){.value=(0, ##__VA_ARGS__), .is_ok=false}

    INIT_OPT(int8_t, i8)
    INIT_OPT(u_int8_t, u8)
    INIT_OPT(int16_t, i16)
    INIT_OPT(u_int16_t, u16)
    INIT_OPT(int32_t, i32)
    INIT_OPT(u_int32_t, u32)
    INIT_OPT(int64_t, i64)
    INIT_OPT(u_int64_t, u64)

#endif /* !__LIBERTY__OPT__H__ */