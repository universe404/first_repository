#ifndef VARDEFS_H
#define VARDEFS_H
#include <immintrin.h>
#include <QDebug>
typedef unsigned long long U64;
typedef unsigned U32;
typedef unsigned char U8;
typedef union {
    struct {
        U8 characters[16];
    };
    __m128i packed;
    U64 half[2];
} chunk;

#endif // VARDEFS_H
