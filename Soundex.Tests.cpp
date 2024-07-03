#include <gtest/gtest.h>
#include "Soundex.h"

TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits) {
 //AAA
  char soundex[5];
  generateSoundex("AX", soundex);
  generateSoundex("Washington", soundex);
  generateSoundex("Lee", soundex);
  generateSoundex("Gutierrez", soundex);
  generateSoundex("Pfister", soundex);
  generateSoundex("Jackson", soundex);
  generateSoundex("Tymczak", soundex);
  generateSoundex("VanDeusen", soundex);
  generateSoundex("Ashcraft", soundex);
  generateSoundex("Nguyen", soundex);
  generateSoundex("Dube", soundex);
  generateSoundex("", soundex);
 // ASSERT_EQ(soundex,"A200");
}
