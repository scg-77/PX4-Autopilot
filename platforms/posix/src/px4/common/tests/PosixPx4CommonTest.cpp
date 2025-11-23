#include <gtest/gtest.h>
#include "../PosixPx4Common.h"

TEST(PathTest, ExtractLastPathComponent) {
    // Cas standard
    EXPECT_EQ(ExtractLastPathComponent("/home/user/file.txt"), "file.txt");

    // Chemin sans slash
    EXPECT_EQ(ExtractLastPathComponent("filename"), "filename");

    // Chemin se terminant par slash (devrait retourner chaîne vide)
    EXPECT_EQ(ExtractLastPathComponent("/home/user/"), "");

    // Chemin racine uniquement
    EXPECT_EQ(ExtractLastPathComponent("/"), "");

    // Chemin vide
    EXPECT_EQ(ExtractLastPathComponent(""), "");
}