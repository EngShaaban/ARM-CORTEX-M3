#ifndef STD_TYPES_H
#define STD_TYPES_H

typedef unsigned char           uint8_t  ;                 /*            0 ...... 255                   */
typedef unsigned short          uint16_t ;                 /*            0 ...... +65535                */
typedef unsigned int            uint32_t ;                 /*            0 ...... 4294967295            */
typedef unsigned long           uint64_t ;                 /*            0 ......18446744073709551615   */

typedef signed char             int8_t  ;                 /*         -128 ...... +127                  */
typedef signed short            int16_t ;                 /*       -32768 ...... +32767                */
typedef signed int    		    int32_t ;                 /*  -2147483648 ...... 214748,3647           */
typedef signed long             int64_t ;

typedef float                   f32_t;
typedef double                  f64_t;
typedef long double             f128_t;

#define NULL  ((void *)'\0')


typedef enum
{
	FALSE  = 0  ,
	TRUE
}boolean_e;



#endif
