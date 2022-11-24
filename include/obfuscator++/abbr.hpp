/* C++ code produced by gperf version 3.0.3 */
/* Command-line: /Library/Developer/CommandLineTools/usr/bin/gperf --language=C++ --class-name=abbreviations --lookup-function-name=find --includes --output-file=../include/google-translate/abbr.hpp abbr.txt    */
/* Computed positions: -k'1-3,5,$' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
            && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
            && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
            && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
            && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
            && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
            && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
            && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
            && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
            && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
            && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
            && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
            && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
            && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
            && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
            && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
            && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
            && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
            && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
            && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
            && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
            && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
            && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.    */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 2 "abbr.txt"

#pragma once
#include <string>
#include <string.h>


/* maximum key range = 2379, duplicates = 0 */

class abbreviations
{
private:
    static inline unsigned int hash (const char *str, unsigned int len);
public:
    static const char *find (const char *str, unsigned int len);
    static inline bool match(const char * str, int language);
};

inline unsigned int
abbreviations::hash (const char *str, unsigned int len)
{
    static unsigned short asso_values[] =
        {
            2382, 2382, 2382, 2382, 2382, 2382, 2382, 2382, 2382, 2382,
            2382, 2382, 2382, 2382, 2382, 2382, 2382, 2382, 2382, 2382,
            2382, 2382, 2382, 2382,     10, 2382, 2382,    315,        5, 2382,
            2382, 2382, 2382,    635,    355, 2382, 2382, 2382,        0,        5,
            2382, 2382, 2382, 2382, 2382, 2382,    295, 2382,    310, 2382,
            2382, 2382, 2382, 2382,    200, 2382, 2382, 2382, 2382, 2382,
            2382, 2382, 2382, 2382, 2382,     90,    300,     95,    120,    255,
                75,    515,    880,     65,    750,    120, 2382,     35,        0,    405,
             825,     40,     35,    715,     15,        5,     15,     30, 2382,    100,
            2382,    125, 2382, 2382, 2382, 2382,    680,    175,    515,    390,
                70,        0,     50,     85,    665,    510,    555,    730,     45,        0,
                10,     70,     45,     15,     10,        0,     20,    125,    380,    705,
                45,        0,    190,     35, 2382, 2382, 2382, 2382,     45,        5,
                 0,     60,    380,     50,     30,    160, 2382, 2382, 2382, 2382,
            2382, 2382,     65, 2382,     85,     75,    415,    135,    405,    400,
             255,    380,    365,    360,    105,    340,    215,    100,    205,    320,
             195,    310,     65,    300,    145,    285,    280,    270,    250,    225,
                60,     45,     35,     30,     10,        0, 2382,     10,     70,        0,
                85,     45, 2382,     10,     50,        0,    190,     35,     30,        5,
                 5,     80, 2382, 2382, 2382, 2382,     35,     85,     20,     15,
            2382, 2382, 2382, 2382, 2382, 2382, 2382,        0,        0,     55,
                 0, 2382, 2382, 2382, 2382, 2382,        5,        0, 2382, 2382,
            2382, 2382, 2382, 2382, 2382, 2382, 2382, 2382, 2382, 2382,
             255, 2382, 2382, 2382, 2382, 2382, 2382, 2382, 2382, 2382,
            2382, 2382, 2382, 2382, 2382, 2382, 2382, 2382, 2382, 2382,
            2382, 2382, 2382, 2382, 2382, 2382, 2382
        };
    unsigned int hval = len;

    switch (hval)
        {
            default:
                hval += asso_values[(unsigned char)str[4]];
            /*FALLTHROUGH*/
            case 4:
            case 3:
                hval += asso_values[(unsigned char)str[2]];
            /*FALLTHROUGH*/
            case 2:
                hval += asso_values[(unsigned char)str[1]+1];
            /*FALLTHROUGH*/
            case 1:
                hval += asso_values[(unsigned char)str[0]];
                break;
        }
    return hval + asso_values[(unsigned char)str[len - 1]];
}


#line 560 "abbr.txt"

inline bool abbreviations::match(const char * str, int language) {
    std::string s;
    s += (char)language;
    s += str;
    return bool(abbreviations::find(s.c_str(), s.size()));
}
