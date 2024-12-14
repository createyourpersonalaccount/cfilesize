#include <filesystem>
#include <vector>
#include <cfilesize.h>

#include <gtest/gtest.h>

using namespace std;

class Files : public testing::Test {
protected:
  struct File {
    filesystem::path filename;
    unsigned long filesize;
  };
  vector<File> files = {
    { "empty_file", 0 },
    { "small_file", 12 },
  };
};

TEST_F(Files, FileSize) {
  int error;
  for(auto &file : files) {
    error = 1;
    EXPECT_EQ(cfilesize(file.filename.c_str(), &error), file.filesize);
    EXPECT_EQ(error, 0);
  }
}

TEST(Tests, InexistentFile) {
  int error = 0;
  EXPECT_EQ(cfilesize("inexistent_file", &error), -1);
  EXPECT_NE(error, 0);
}
