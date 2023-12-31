
/*
 * Ensure we have C99-style int64_t, etc, all defined.
 */

#include <cm3p/kwiml/int.h>

#ifndef KWIML_INT_HAVE_INT64_T
typedef KWIML_INT_int64_t int64_t;
#endif
#ifndef KWIML_INT_HAVE_INT32_T
typedef KWIML_INT_int32_t int32_t;
#endif
#ifndef KWIML_INT_HAVE_INT16_T
typedef KWIML_INT_int16_t int16_t;
#endif
#ifndef KWIML_INT_HAVE_INT8_T
typedef KWIML_INT_int8_t int8_t;
#endif
#ifndef KWIML_INT_HAVE_UINT64_T
typedef KWIML_INT_uint64_t uint64_t;
#endif
#ifndef KWIML_INT_HAVE_UINT32_T
typedef KWIML_INT_uint32_t uint32_t;
#endif
#ifndef KWIML_INT_HAVE_UINT16_T
typedef KWIML_INT_uint16_t uint16_t;
#endif
#ifndef KWIML_INT_HAVE_UINT8_T
typedef KWIML_INT_uint8_t uint8_t;
#endif
#ifndef KWIML_INT_HAVE_UINTPTR_T
typedef KWIML_INT_uintptr_t uintptr_t;
#endif

/* #undef WORDS_BIGENDIAN */

/* #undef HAVE_BYTESWAP_H */
/* #undef HAVE_BSWAP_16 */
/* #undef HAVE_BSWAP_32 */
/* #undef HAVE_BSWAP_64 */


#define HAVE_CHECK_CRC32 1
#define HAVE_CHECK_CRC64 1
#define HAVE_CHECK_SHA256 1

#define HAVE_DECODER_ARM 1
#define HAVE_DECODER_ARMTHUMB 1
#define HAVE_DECODER_DELTA 1
#define HAVE_DECODER_IA64 1
#define HAVE_DECODER_LZMA1 1
#define HAVE_DECODER_LZMA2 1
#define HAVE_DECODER_POWERPC 1
#define HAVE_DECODER_SPARC 1
#define HAVE_DECODER_X86 1

#define HAVE_ENCODER_ARM 1
#define HAVE_ENCODER_ARMTHUMB 1
#define HAVE_ENCODER_DELTA 1
#define HAVE_ENCODER_IA64 1
#define HAVE_ENCODER_LZMA1 1
#define HAVE_ENCODER_LZMA2 1
#define HAVE_ENCODER_POWERPC 1
#define HAVE_ENCODER_SPARC 1
#define HAVE_ENCODER_X86 1

#define HAVE_MF_BT2 1
#define HAVE_MF_BT3 1
#define HAVE_MF_BT4 1
#define HAVE_MF_HC3 1
#define HAVE_MF_HC4 1

/* Define to 1 if you have the <inttypes.h> header file. */
#ifdef KWIML_INT_HAVE_INTTYPES_H
# define HAVE_INTTYPES_H 1
#endif

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if stdbool.h conforms to C99. */
#define HAVE_STDBOOL_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#ifdef KWIML_INT_HAVE_STDINT_H
# define HAVE_STDINT_H 1
#endif

/* Define to 1 if you have the <strings.h> header file. */
/* #undef HAVE_STRINGS_H */

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/byteorder.h> header file. */
/* #undef HAVE_SYS_BYTEORDER_H */

/* Define to 1 if you have the <sys/endian.h> header file. */
/* #undef HAVE_SYS_ENDIAN_H */

/* Define to 1 or 0, depending whether the compiler supports simple visibility
   declarations. */
/* #undef HAVE_VISIBILITY */

/* Define to 1 if the system has the type `_Bool'. */
/* #undef HAVE__BOOL */

/* Define to 1 if the system supports fast unaligned access to 16-bit and
   32-bit integers. */
#if defined(__i386) || defined(__i386__) || defined(_M_IX86) \
 || defined(__x86_64) || defined(__x86_64__) || defined(_M_X64) \
 || defined(__amd64) || defined(__amd64__) \
 || defined(__powerpc) || defined(__powerpc__) \
 || defined(__ppc) || defined(__ppc__) || defined(__POWERPC__)
# define TUKLIB_FAST_UNALIGNED_ACCESS 1
#endif
