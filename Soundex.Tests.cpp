#include <gtest/gtest.h>
#include "Soundex.h"

TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits) {
 //AAA
   char soundex[5];
   generateSoundex("AX", soundex);
  // ASSERT_EQ(soundex,"A200");
  generateSoundex("Washington", soundex);
  // ASSERT_EQ(soundex,"W252");
   generateSoundex("Lee", soundex);
  // ASSERT_EQ(soundex,"L000");
   generateSoundex("Gutierrez", soundex);
  // ASSERT_EQ(soundex,"G362");
   generateSoundex("Pfister", soundex);
  // ASSERT_EQ(soundex,"P236");
   generateSoundex("Jackson", soundex);
  // ASSERT_EQ(soundex,"J250");
   generateSoundex("Tymczak", soundex);
  // ASSERT_EQ(soundex,"T522");
   generateSoundex("VanDeusen", soundex);
  // ASSERT_EQ(soundex,"V532");
   generateSoundex("Ashcraft", soundex);
  // ASSERT_EQ(soundex,"A261");
  generateSoundex("Nguyen", soundex);
  // ASSERT_EQ(soundex,"N500");
   generateSoundex("Dube", soundex);
  // ASSERT_EQ(soundex,"D100");
  generateSoundex("", soundex);
  // ASSERT_EQ(soundex,"0000");
 

}
