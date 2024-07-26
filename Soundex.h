#ifndef SOUNDEX_H
#define SOUNDEX_H

#include "Soundex.h"
#include <ctype.h>
#include <string.h>

char getSoundexCode(char c) {
    const int soundexLUT[26] = {0, 1, 2, 3, 0, 1, 2, 0, 0, 2, 2, 4, 5, 5, 0, 1, 2, 6, 2, 3, 0, 1, 0, 2, 0, 2};
    c = toupper(c);
    return '0'+soundexLUT[c-'A'];
}
int updateSoundex(char code, int sIndex, char *soundex){
    if (code != '0' && code != soundex[sIndex - 1]) {
        soundex[sIndex++] = code;
    }
    return sIndex;
}
void endSoundex(int sIndex, char *soundex){
    while (sIndex < 4) {
        soundex[sIndex++] = '0';
    }
    soundex[4] = '\0';
}
void generateSoundex(const char *name, char *soundex) {
    int len = strlen(name);
    soundex[0] = toupper(name[0]);
    int sIndex = 1;

    for (int i = 1; i < len && sIndex < 4; i++) {
        char code = getSoundexCode(name[i]);
        sIndex = updateSoundex(code, sIndex, soundex);
    }
    endSoundex(sIndex, soundex);
}

#endif // SOUNDEX_H
