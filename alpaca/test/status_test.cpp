#include <thread>

#include "alpaca/src/data_storage/status.h"
#include "alpaca/test/testing.h"
#include "gtest/gtest.h"

class StatusTest : public ::testing::Test {};

TEST_F(StatusTest, testStatusConstructor) {
  auto status = alpaca::Status();
  EXPECT_OK(status);
}
