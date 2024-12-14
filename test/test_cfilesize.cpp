#include <filesystem>
#include <cfilesize.h>

#include <gtest/gtest.h>

using namespace std;

class Files : public testing::Test {
protected:
  struct {
    filesystem::path filename;
    unsigned long filesize;
  } files[2] = {
    { "empty_file", 0 },
    { "small_file", 12 },
  };
};

TEST_F(Files, FileSize) {
  for(auto &file : files) {
    EXPECT_EQ(cfilesize(file.filename.c_str()), file.filesize);
  }
}
