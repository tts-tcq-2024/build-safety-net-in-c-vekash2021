#ifndef SOUNDEX_H
#define SOUNDEX_H

#include "Soundex.h"
#include <ctype.h>
#include <string.h>

char getSoundexCode(char c) {
    static const char soundexArray[26] = {
        // A, B, C, D, E, F, G, H, I, J, K, L, M
        '0', '1', '2', '3', '0', '1', '2', '0', '0', '2', '2', '4', '5',
        // N, O, P, Q, R, S, T, U, V, W, X, Y, Z
        '5', '0', '1', '2', '6', '2', '3', '0', '1', '0', '2', '0', '2'
    };

    c = toupper(c);
    if (c < 'A' || c > 'Z') {
        return '0';
    }
    return soundexArray[c - 'A'];
}

void generateSoundex(const char *name, char *soundex) {
    int len = strlen(name);

      if (len == 0) {
        strcpy(soundex, "0000");
        return;
    }
    soundex[0] = toupper(name[0]);
    int sIndex = 1;
    for (int i = 1; i < len && sIndex < 4; i++) {
        char code = getSoundexCode(name[i]);
        if (code != '0' && code != soundex[sIndex - 1]) {
            soundex[sIndex++] = code;
        }
    }

    while (sIndex < 4) {
        soundex[sIndex++] = '0';
    }

    soundex[4] = '\0';
}

#endif // SOUNDEX_H
