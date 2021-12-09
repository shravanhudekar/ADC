

#ifndef __UTIL1_H
#define __UTIL1_H

/* MODULE UTIL1. */

/* Include inherited beans */
#include <PE_KSDK_Types.h> /* if this file is missing: have you added the Kinetis SDK component? */
#include <string.h>
#include <stddef.h> /* for size_t */

#include <stddef.h>

typedef enum {
  UTIL1_SEP_NUM_TYPE_UINT8, /* uint8_t number type */
  UTIL1_SEP_NUM_TYPE_UINT8_HEX_NO_PREFIX /* uint8_t hex number type, no 0x prefix */
} UTIL1_SeparatedNumberType;


void UTIL1_strcpy(uint8_t *dst, size_t dstSize, const unsigned char *src);
/*
** ===================================================================
**     Method      :  UTIL1_strcpy (component Utility)
**     Description :
**         Same as normal strcpy, but safe as it does not write beyond
**         the buffer.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * dst             - Pointer to destination string
**         dstSize         - Size of the destination buffer (in
**                           bytes).
**       * src             - Pointer to source string.
**     Returns     : Nothing
** ===================================================================
*/

void UTIL1_strcat(uint8_t *dst, size_t dstSize, const unsigned char *src);
/*
** ===================================================================
**     Method      :  UTIL1_strcat (component Utility)
**     Description :
**         Same as normal strcat, but safe as it does not write beyond
**         the buffer.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * dst             - Pointer to destination string
**         dstSize         - Size of the destination buffer (in
**                           bytes).
**       * src             - Pointer to source string.
**     Returns     : Nothing
** ===================================================================
*/

void UTIL1_Num16sToStr(uint8_t *dst, size_t dstSize, int16_t val);
/*
** ===================================================================
**     Method      :  UTIL1_Num16sToStr (component Utility)
**     Description :
**         Converts a signed 16bit value into a string.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * dst             - Pointer to destination string
**         dstSize         - Size of the destination buffer (in
**                           bytes).
**         val             - Value to be converted.
**     Returns     : Nothing
** ===================================================================
*/

void UTIL1_Num16sToStrFormatted(uint8_t *dst, size_t dstSize, int16_t val, char fill, uint8_t nofFill);
/*
** ===================================================================
**     Method      :  UTIL1_Num16sToStrFormatted (component Utility)
**     Description :
**         Converts a 16bit signed value to string.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * dst             - Pointer to destination string
**         dstSize         - Size of the destination buffer (in
**                           bytes).
**         val             - Value to convert.
**         fill            - Fill character
**         nofFill         - Number of fill characters
**     Returns     : Nothing
** ===================================================================
*/

void UTIL1_strcatNum16s(uint8_t *dst, size_t dstSize, int16_t val);
/*
** ===================================================================
**     Method      :  UTIL1_strcatNum16s (component Utility)
**     Description :
**         Appends a 16bit signed value to a string buffer.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * dst             - Pointer to destination string
**         dstSize         - Size of the destination buffer (in
**                           bytes).
**         val             - Value to convert.
**     Returns     : Nothing
** ===================================================================
*/

void UTIL1_strcatNum16sFormatted(uint8_t *dst, size_t dstSize, int16_t val, char fill, uint8_t nofFill);
/*
** ===================================================================
**     Method      :  UTIL1_strcatNum16sFormatted (component Utility)
**     Description :
**         Appends a 16bit signed value to a string buffer in a
**         formatted way.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * dst             - Pointer to destination string
**         dstSize         - Size of the destination buffer (in
**                           bytes).
**         val             - Value to convert.
**         fill            - Fill character
**         nofFill         - Number of fill characters
**     Returns     : Nothing
** ===================================================================
*/

void UTIL1_strcatNum8Hex(uint8_t *dst, size_t dstSize, uint8_t num);
/*
** ===================================================================
**     Method      :  UTIL1_strcatNum8Hex (component Utility)
**     Description :
**         Appends a 8bit unsigned value to a buffer as hex number
**         (without a 0x prefix).
**     Parameters  :
**         NAME            - DESCRIPTION
**       * dst             - Pointer to destination string
**         dstSize         - Size of the destination buffer (in
**                           bytes).
**         num             - Value to convert.
**     Returns     : Nothing
** ===================================================================
*/

void UTIL1_strcatNum16Hex(uint8_t *dst, size_t dstSize, uint16_t num);
/*
** ===================================================================
**     Method      :  UTIL1_strcatNum16Hex (component Utility)
**     Description :
**         Appends a 16bit unsigned value to a buffer as hex number
**         (without a 0x prefix).
**     Parameters  :
**         NAME            - DESCRIPTION
**       * dst             - Pointer to destination string
**         dstSize         - Size of the destination buffer (in
**                           bytes).
**         num             - Value to convert.
**     Returns     : Nothing
** ===================================================================
*/

void UTIL1_strcatNum32s(uint8_t *dst, size_t dstSize, int32_t val);
/*
** ===================================================================
**     Method      :  UTIL1_strcatNum32s (component Utility)
**     Description :
**         Appends a 32bit signed value to a string buffer.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * dst             - Pointer to destination string
**         dstSize         - Size of the destination buffer (in
**                           bytes).
**         val             - Value to convert.
**     Returns     : Nothing
** ===================================================================
*/

void UTIL1_Num32sToStr(uint8_t *dst, size_t dstSize, int32_t val);
/*
** ===================================================================
**     Method      :  UTIL1_Num32sToStr (component Utility)
**     Description :
**         Converts a signed 32bit value into a string.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * dst             - Pointer to destination string
**         dstSize         - Size of the destination buffer (in
**                           bytes).
**         val             - Value to be converted.
**     Returns     : Nothing
** ===================================================================
*/

void UTIL1_strcatNum32Hex(uint8_t *dst, size_t dstSize, uint32_t num);
/*
** ===================================================================
**     Method      :  UTIL1_strcatNum32Hex (component Utility)
**     Description :
**         Appends a 16bit unsigned value to a buffer as hex number
**         (without a 0x prefix).
**     Parameters  :
**         NAME            - DESCRIPTION
**       * dst             - Pointer to destination string
**         dstSize         - Size of the destination buffer (in
**                           bytes).
**         num             - Value to convert.
**     Returns     : Nothing
** ===================================================================
*/

bool UTIL1_IsLeapYear(uint16_t year);
/*
** ===================================================================
**     Method      :  UTIL1_IsLeapYear (component Utility)
**     Description :
**         Returns true if a given year is a leap year
**     Parameters  :
**         NAME            - DESCRIPTION
**         year            - Year, in the YYYY format.
**     Returns     :
**         ---             - If the year is a leap year or not.
** ===================================================================
*/

uint8_t UTIL1_WeekDay(uint16_t year, uint8_t month, uint8_t day);
/*
** ===================================================================
**     Method      :  UTIL1_WeekDay (component Utility)
**     Description :
**         Returns the weekday for a given date >= 1.Jan.1900
**     Parameters  :
**         NAME            - DESCRIPTION
**         year            - year in YYYY format
**         month           - month of the year (1: January, 2:
**                           February, etc)
**         day             - day of the moth (starting with 1)
**     Returns     :
**         ---             - Returns the weekday, 0 for Sunday, 1 for
**                           Monday, 2 for Tuesday, etc.
** ===================================================================
*/

void UTIL1_chcat(uint8_t *dst, size_t dstSize, uint8_t ch);
/*
** ===================================================================
**     Method      :  UTIL1_chcat (component Utility)
**     Description :
**         Adds a single character to a zero byte terminated buffer. It
**         cares about buffer overflow.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * dst             - Pointer to destination string
**         dstSize         - Size of the destination buffer (in
**                           bytes).
**         ch              - character to append
**     Returns     : Nothing
** ===================================================================
*/

void UTIL1_strcatNum32u(uint8_t *dst, size_t dstSize, uint32_t val);
/*
** ===================================================================
**     Method      :  UTIL1_strcatNum32u (component Utility)
**     Description :
**         Appends a 32bit signed value to a string buffer.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * dst             - Pointer to destination string
**         dstSize         - Size of the destination buffer (in
**                           bytes).
**         val             - Value to convert.
**     Returns     : Nothing
** ===================================================================
*/

void UTIL1_Num32uToStr(uint8_t *dst, size_t dstSize, uint32_t val);
/*
** ===================================================================
**     Method      :  UTIL1_Num32uToStr (component Utility)
**     Description :
**         Converts an unsigned 32bit value into a string.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * dst             - Pointer to destination string
**         dstSize         - Size of the destination buffer (in
**                           bytes).
**         val             - Value to be converted.
**     Returns     : Nothing
** ===================================================================
*/

void UTIL1_strcatNum32uFormatted(uint8_t *dst, size_t dstSize, uint32_t val, char fill, uint8_t nofFill);
/*
** ===================================================================
**     Method      :  UTIL1_strcatNum32uFormatted (component Utility)
**     Description :
**         Appends a 32bit unsigned value to a string buffer in a
**         formatted way.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * dst             - Pointer to destination string
**         dstSize         - Size of the destination buffer (in
**                           bytes).
**         val             - Value to convert.
**         fill            - Fill character
**         nofFill         - Number of fill characters
**     Returns     : Nothing
** ===================================================================
*/

void UTIL1_Num32uToStrFormatted(uint8_t *dst, size_t dstSize, uint32_t val, char fill, uint8_t nofFill);
/*
** ===================================================================
**     Method      :  UTIL1_Num32uToStrFormatted (component Utility)
**     Description :
**         Converts a 32bit unsigned value to string.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * dst             - Pointer to destination string
**         dstSize         - Size of the destination buffer (in
**                           bytes).
**         val             - Value to convert.
**         fill            - Fill character
**         nofFill         - Number of fill characters
**     Returns     : Nothing
** ===================================================================
*/

void UTIL1_strcatNum24Hex(uint8_t *dst, size_t dstSize, uint32_t num);
/*
** ===================================================================
**     Method      :  UTIL1_strcatNum24Hex (component Utility)
**     Description :
**         Appends a 32bit unsigned value to a buffer as hex number
**         (without a 0x prefix). Only 24bits are used.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * dst             - Pointer to destination string
**         dstSize         - Size of the destination buffer (in
**                           bytes).
**         num             - Value to convert.
**     Returns     : Nothing
** ===================================================================
*/

uint8_t UTIL1_ReadEscapedName(const unsigned char *filename, uint8_t *destname, size_t maxlen, size_t *lenRead, size_t *lenWritten, const char *terminators);
/*
** ===================================================================
**     Method      :  UTIL1_ReadEscapedName (component Utility)
**     Description :
**         Scans an escaped name from a string. This is useful e.g. for
**         double quoted file names.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * filename        - the name to be copied. Names may
**                           be in quoted format
**       * destname        - the destination of the copy.
**                           Names are not in quoted format. destname
**                           may be NULL to get the other return values
**                           only
**         maxlen          - length allocated for destname
**       * lenRead         - length read in filename to copy
**                           the whole name. Note that filenames maybe
**                           space terminated, so *lenRead <
**                           strlen(filename)
**         lenWritten      - the size written in destname.
**                           In case of overflows in destname,
**                           lenWritten is still increased but destname
**                           no longer written. The have the string
**                           length in these cases use strlen(destname)
**         terminators     - additional characters
**                           where a name should terminate. May be NULL
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

uint8_t UTIL1_xatoi(const unsigned char **str, int32_t *res);
/*
** ===================================================================
**     Method      :  UTIL1_xatoi (component Utility)
**     Description :
**         Custom atoi() (ascii to int) implementation by Elm Chan
**     Parameters  :
**         NAME            - DESCRIPTION
**       * str             - Pointer to string to scan. Returns until
**                           where it has scanned.
**       * res             - Pointer to where to store the result
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

uint8_t UTIL1_ScanDate(const unsigned char **str, uint8_t *day, uint8_t *month, uint16_t *year);
/*
** ===================================================================
**     Method      :  UTIL1_ScanDate (component Utility)
**     Description :
**         Scans a date in the format "dd.mm.yyyy" or "dd-mm-yyyy". For
**         yy it will expand it to 20yy.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * str             - Pointer to the string to be scanned. The
**                           function advances the pointer.
**       * day             - Pointer to where to store the day value
**       * month           - Pointer to where to store the month
**                           value
**       * year            - Pointer to where to store the year value
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

uint8_t UTIL1_ScanTime(const unsigned char **str, uint8_t *hour, uint8_t *minute, uint8_t *second, uint8_t *hSecond);
/*
** ===================================================================
**     Method      :  UTIL1_ScanTime (component Utility)
**     Description :
**         Scans a time string in the format "hh:mm:ss,hh" with the
**         part for the ",hh" is optional.
**     Parameters  :
**         NAME            - DESCRIPTION
**         str             - Pointer to the string to be scanned. The
**                           function advances the pointer.
**       * hour            - Pointer to where to store the hour value
**       * minute          - Pointer to where to store the minute
**                           value
**       * second          - Pointer to where to store the second
**                           value
**       * hSecond         - Pointer to scans the hundreds of
**                           second part. If not present in string, zero
**                           is stored
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

uint8_t UTIL1_ScanDecimal16uNumber(const unsigned char **str, uint16_t *val);
/*
** ===================================================================
**     Method      :  UTIL1_ScanDecimal16uNumber (component Utility)
**     Description :
**         Scans a decimal 16bit unsigned number
**     Parameters  :
**         NAME            - DESCRIPTION
**         str             - String to scan. It returns as well until
**                           where it has scanned
**       * val             - Pointer to value
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

uint8_t UTIL1_ScanDecimal8uNumber(const unsigned char **str, uint8_t *val);
/*
** ===================================================================
**     Method      :  UTIL1_ScanDecimal8uNumber (component Utility)
**     Description :
**         Scans a decimal 8bit unsigned number
**     Parameters  :
**         NAME            - DESCRIPTION
**         str             - String to scan. It returns as well until
**                           where it has scanned
**       * val             - Pointer to value
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

void UTIL1_Num16uToStr(uint8_t *dst, size_t dstSize, uint16_t val);
/*
** ===================================================================
**     Method      :  UTIL1_Num16uToStr (component Utility)
**     Description :
**         Converts a signed 16bit value into a string.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * dst             - Pointer to destination string
**         dstSize         - Size of the destination buffer (in
**                           bytes).
**         val             - Value to be converted.
**     Returns     : Nothing
** ===================================================================
*/

void UTIL1_Num8sToStr(uint8_t *dst, size_t dstSize, signed char val);
/*
** ===================================================================
**     Method      :  UTIL1_Num8sToStr (component Utility)
**     Description :
**         Converts a signed 8bit value into a string.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * dst             - Pointer to destination string
**         dstSize         - Size of the destination buffer (in
**                           bytes).
**         val             - Value to be converted.
**     Returns     : Nothing
** ===================================================================
*/

void UTIL1_Num8uToStr(uint8_t *dst, size_t dstSize, uint8_t val);
/*
** ===================================================================
**     Method      :  UTIL1_Num8uToStr (component Utility)
**     Description :
**         Converts an unsigned 8bit value into a string.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * dst             - Pointer to destination string
**         dstSize         - Size of the destination buffer (in
**                           bytes).
**         val             - Value to be converted.
**     Returns     : Nothing
** ===================================================================
*/

void UTIL1_Num16uToStrFormatted(uint8_t *dst, size_t dstSize, uint16_t val, char fill, uint8_t nofFill);
/*
** ===================================================================
**     Method      :  UTIL1_Num16uToStrFormatted (component Utility)
**     Description :
**         Converts a 16bit unsigned value to string.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * dst             - Pointer to destination string
**         dstSize         - Size of the destination buffer (in
**                           bytes).
**         val             - Value to convert.
**         fill            - Fill character
**         nofFill         - Number of fill characters
**     Returns     : Nothing
** ===================================================================
*/

void UTIL1_Num32sToStrFormatted(uint8_t *dst, size_t dstSize, int32_t val, char fill, uint8_t nofFill);
/*
** ===================================================================
**     Method      :  UTIL1_Num32sToStrFormatted (component Utility)
**     Description :
**         Converts a 32bit signed value to string.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * dst             - Pointer to destination string
**         dstSize         - Size of the destination buffer (in
**                           bytes).
**         val             - Value to convert.
**         fill            - Fill character
**         nofFill         - Number of fill characters
**     Returns     : Nothing
** ===================================================================
*/

void UTIL1_strcatNum16u(uint8_t *dst, size_t dstSize, uint16_t val);
/*
** ===================================================================
**     Method      :  UTIL1_strcatNum16u (component Utility)
**     Description :
**         Appends a 16bit unsigned value to a string buffer.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * dst             - Pointer to destination string
**         dstSize         - Size of the destination buffer (in
**                           bytes).
**         val             - Value to convert.
**     Returns     : Nothing
** ===================================================================
*/

void UTIL1_strcatNum16uFormatted(uint8_t *dst, size_t dstSize, uint16_t val, char fill, uint8_t nofFill);
/*
** ===================================================================
**     Method      :  UTIL1_strcatNum16uFormatted (component Utility)
**     Description :
**         Appends a 16bit unsigned value to a string buffer in a
**         formatted way.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * dst             - Pointer to destination string
**         dstSize         - Size of the destination buffer (in
**                           bytes).
**         val             - Value to convert.
**         fill            - Fill character
**         nofFill         - Number of fill characters
**     Returns     : Nothing
** ===================================================================
*/

void UTIL1_strcatNum32sFormatted(uint8_t *dst, size_t dstSize, int32_t val, char fill, uint8_t nofFill);
/*
** ===================================================================
**     Method      :  UTIL1_strcatNum32sFormatted (component Utility)
**     Description :
**         Appends a 32bit signed value to a string buffer in a
**         formatted way.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * dst             - Pointer to destination string
**         dstSize         - Size of the destination buffer (in
**                           bytes).
**         val             - Value to convert.
**         fill            - Fill character
**         nofFill         - Number of fill characters
**     Returns     : Nothing
** ===================================================================
*/

uint8_t UTIL1_ScanDecimal32uNumber(const unsigned char **str, uint32_t *val);
/*
** ===================================================================
**     Method      :  UTIL1_ScanDecimal32uNumber (component Utility)
**     Description :
**         Scans a decimal 32bit unsigned number
**     Parameters  :
**         NAME            - DESCRIPTION
**         str             - string to scan. It returns as well until
**                           where it has scanned
**       * val             - Pointer to value
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

void UTIL1_strcatNum8u(uint8_t *dst, size_t dstSize, uint8_t val);
/*
** ===================================================================
**     Method      :  UTIL1_strcatNum8u (component Utility)
**     Description :
**         Appends a 8bit unsigned value to a string buffer.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * dst             - Pointer to destination string
**         dstSize         - Size of the destination buffer (in
**                           bytes).
**         val             - Value to convert.
**     Returns     : Nothing
** ===================================================================
*/

void UTIL1_strcatNum8s(uint8_t *dst, size_t dstSize, signed char val);
/*
** ===================================================================
**     Method      :  UTIL1_strcatNum8s (component Utility)
**     Description :
**         Appends a 8bit signed value to a string buffer.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * dst             - Pointer to destination string
**         dstSize         - Size of the destination buffer (in
**                           bytes).
**         val             - Value to convert.
**     Returns     : Nothing
** ===================================================================
*/

#define UTIL1_strcmp(str1, str2) \
  strcmp(str1, str2)

/*
** ===================================================================
**     Method      :  UTIL1_strcmp (component Utility)
**     Description :
**         Wrapper to the standard strcmp() routine
**     Parameters  :
**         NAME            - DESCRIPTION
**       * str1            - Pointer to string
**       * str2            - Pointer to string
**     Returns     :
**         ---             - Returns zero if the two strings are the
**                           same
** ===================================================================
*/

#define UTIL1_strncmp(str1, str2, size) \
  strncmp(str1, str2, size)

/*
** ===================================================================
**     Method      :  UTIL1_strncmp (component Utility)
**     Description :
**         Wrapper to the standard strncmp() routine
**     Parameters  :
**         NAME            - DESCRIPTION
**       * str1            - Pointer to string
**       * str2            - Pointer to string
**         size            -
**     Returns     :
**         ---             - Returns zero if the two strings are the
**                           same
** ===================================================================
*/

#define UTIL1_strlen(str) \
  strlen(str)

/*
** ===================================================================
**     Method      :  UTIL1_strlen (component Utility)
**     Description :
**         Wrapper to the standard strlen() function.
**     Parameters  :
**         NAME            - DESCRIPTION
**         str             -
**     Returns     :
**         ---             - size of strinig
** ===================================================================
*/

uint8_t UTIL1_ScanHex32uNumber(const unsigned char **str, uint32_t *val);
/*
** ===================================================================
**     Method      :  UTIL1_ScanHex32uNumber (component Utility)
**     Description :
**         Scans a hexadecimal 32bit number, starting with 0x
**     Parameters  :
**         NAME            - DESCRIPTION
**         str             - String to scan, starting with 0x. It
**                           returns as well until where it has scanned
**       * val             - Pointer to value
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

uint8_t UTIL1_ScanHex16uNumber(const unsigned char **str, uint16_t *val);
/*
** ===================================================================
**     Method      :  UTIL1_ScanHex16uNumber (component Utility)
**     Description :
**         Scans a hexadecimal 16bit number, starting with 0x
**     Parameters  :
**         NAME            - DESCRIPTION
**         str             - String to scan, starting with 0x.. It
**                           returns as well until where it has scanned
**       * val             - Pointer to value
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

uint8_t UTIL1_ScanHex8uNumber(const unsigned char **str, uint8_t *val);
/*
** ===================================================================
**     Method      :  UTIL1_ScanHex8uNumber (component Utility)
**     Description :
**         Scans a hexadecimal 8bit number, starting with 0x
**     Parameters  :
**         NAME            - DESCRIPTION
**         str             - String to scan, starting with 0x. It
**                           returns as well until where it has scanned
**       * val             - Pointer to value
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

uint8_t UTIL1_strtailcmp(uint8_t *str, uint8_t *tail);
/*
** ===================================================================
**     Method      :  UTIL1_strtailcmp (component Utility)
**     Description :
**         Compares the tail of a string and returns 0 if it matches, 1
**         otherwise
**     Parameters  :
**         NAME            - DESCRIPTION
**       * str             - Pointer to string. This string is compared
**                           if it contains the tail.
**       * tail            - Pointer to tail string.
**     Returns     :
**         ---             - returns 0 if tail matches, -1 otherwise
** ===================================================================
*/

uint8_t UTIL1_strCutTail(uint8_t *str, uint8_t *tail);
/*
** ===================================================================
**     Method      :  UTIL1_strCutTail (component Utility)
**     Description :
**         Removes a tailing substring from a string. The string passed
**         will be modified (the tail is cut by writing a zero byte to
**         the string!)
**     Parameters  :
**         NAME            - DESCRIPTION
**       * str             - Pointer to string where to remove the tail
**       * tail            - Pointer to substring to remove
**     Returns     :
**         ---             - Error code, ERR_OK if no error, otherwise
**                           ERR_FAIL if tail is not found
** ===================================================================
*/

uint8_t UTIL1_ScanHex8uNumberNoPrefix(const unsigned char **str, uint8_t *val);
/*
** ===================================================================
**     Method      :  UTIL1_ScanHex8uNumberNoPrefix (component Utility)
**     Description :
**         Scans a hexadecimal 8bit number, without 0x
**     Parameters  :
**         NAME            - DESCRIPTION
**         str             - String to scan, starting with 0x. It
**                           returns as well until where it has scanned
**       * val             - Pointer to value
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

void UTIL1_strcatNum32sDotValue100(uint8_t *dst, size_t dstSize, int32_t num);
/*
** ===================================================================
**     Method      :  UTIL1_strcatNum32sDotValue100 (component Utility)
**     Description :
**         Appends a 32bit signed value to a buffer. The value is in
**         1/100 units.  For example for the value -13456 it will
**         append the string "-134.56"
**     Parameters  :
**         NAME            - DESCRIPTION
**       * dst             - Pointer to destination string
**         dstSize         - Size of the destination buffer (in
**                           bytes).
**         num             - Value to convert.
**     Returns     : Nothing
** ===================================================================
*/

uint8_t UTIL1_ScanDecimal8sNumber(const unsigned char **str, signed char *val);
/*
** ===================================================================
**     Method      :  UTIL1_ScanDecimal8sNumber (component Utility)
**     Description :
**         Scans a decimal 8bit signed number
**     Parameters  :
**         NAME            - DESCRIPTION
**         str             - String to scan. It returns as well until
**                           where it has scanned
**       * val             - Pointer to value
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

uint8_t UTIL1_ScanDecimal16sNumber(const unsigned char **str, int16_t *val);
/*
** ===================================================================
**     Method      :  UTIL1_ScanDecimal16sNumber (component Utility)
**     Description :
**         Scans a decimal 16bit signed number
**     Parameters  :
**         NAME            - DESCRIPTION
**         str             - String to scan. It returns as well until
**                           where it has scanned
**       * val             - Pointer to value
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

uint8_t UTIL1_ScanDecimal32sNumber(const unsigned char **str, int32_t *val);
/*
** ===================================================================
**     Method      :  UTIL1_ScanDecimal32sNumber (component Utility)
**     Description :
**         Scans a decimal 32bit signed number
**     Parameters  :
**         NAME            - DESCRIPTION
**         str             - string to scan. It returns as well until
**                           where it has scanned
**       * val             - Pointer to value
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

int16_t UTIL1_strFind(uint8_t *str, uint8_t *subStr);
/*
** ===================================================================
**     Method      :  UTIL1_strFind (component Utility)
**     Description :
**         Searches a substring inside a string and returns the
**         position.
**     Parameters  :
**         NAME            - DESCRIPTION
**       * str             - Pointer to string which will be searched
**       * subStr          - Pointer to substring to search
**                           inside str
**     Returns     :
**         ---             - -1 if not found, otherwise the character
**                           index.
** ===================================================================
*/

uint8_t UTIL1_ScanSeparatedNumbers(const unsigned char **str, uint8_t *values, uint8_t nofValues, char separator, UTIL1_SeparatedNumberType numberType);
/*
** ===================================================================
**     Method      :  UTIL1_ScanSeparatedNumbers (component Utility)
**     Description :
**         Scans multiple numbers separated by character, e.g. "123.68.
**         5.3"
**     Parameters  :
**         NAME            - DESCRIPTION
**         str             - String to scan. It returns as well until
**                           where it has scanned
**       * values          - Pointer to array where to store the
**                           values
**         nofValues       - Number of values in the array
**         separator       - Character separator, e.g. '.'
**         numberType      - type of number to scan
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

uint8_t UTIL1_ScanDoubleQuotedString(const uint8_t **cmd, uint8_t *buf, size_t bufSize);
/*
** ===================================================================
**     Method      :  UTIL1_ScanDoubleQuotedString (component Utility)
**     Description :
**         Scans a string inside double quotes and returns it without
**         the double quotes.
**     Parameters  :
**         NAME            - DESCRIPTION
**         cmd             - Pointer to pointer to string to parse.
**                           This pointer will be advanced as much as
**                           parsing is done.
**       * buf             - Pointer to buffer where to store the string
**         bufSize         - Size of buffer in bytes
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

uint8_t UTIL1_ScanDecimal32sDotNumber(const unsigned char **str, int32_t *integral, uint32_t *fractional, uint8_t *nofFractionalZeros);
/*
** ===================================================================
**     Method      :  UTIL1_ScanDecimal32sDotNumber (component Utility)
**     Description :
**         Scans a decimal 32bit signed number with a following dot
**         (fractional part), e.g. "-34587.0248", it will return the
**         (signed) integral and fractional part with number of
**         fractional zeros. The function accepts as well numbers  like
**         "17" (no fractional part" or "17.0"
**     Parameters  :
**         NAME            - DESCRIPTION
**         str             - string to scan. It returns as well until
**                           where it has scanned
**       * integral        - Pointer to value before the dot
**       * fractional      - Pointer to value after the
**                           dot, e.g. 32 for "-134.0032"
**         nofFractionalZeros - Number of
**                           fractional leading zeros, e.g. 2 for "-134.
**                           0032"
**     Returns     :
**         ---             - Error code
** ===================================================================
*/

/* END UTIL1. */

#endif
/* ifndef __UTIL1_H */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
