#include "vector.h"
#include "gtest/gtest.h"


TEST(CTORTest, DefaultCTOR) {
  Vector v;
  EXPECT_EQ(0, v.size());
}

TEST(CTORTest, ArrayCTOR) {
  int a[] = {0, 1, 2, 3, 4, 5};
  Vector v(a, 6);

  EXPECT_EQ(0, v.at(0));
  EXPECT_EQ(5, v.at(5));
  EXPECT_EQ(6, v.size());
}

TEST(AppendTest, EmptyTest) {
  Vector v;
  v.append(4);

  EXPECT_EQ(4, v.at(0));
}

TEST(AppendTest, NotEmptyTest) {
  int a[] = {0, 1, 2, 3, 4, 5};
  Vector v(a, 6);
  v.append(10);

  EXPECT_EQ(10, v.at(v.size()-1));
}

TEST(SearchTest, FoundSearch) {
  int a[] = {0, 1, 10, 3, 4, 5};
  Vector v(a, 6);

  EXPECT_EQ(2, v.search(10));
}

TEST(SearchTest, NotFoundSearch) {
  int a[] = {0, 1, 2, 3, 4, 5};
  Vector v(a, 6);

  EXPECT_EQ(-1, v.search(10));
}
// TEST(WillFail, WillFailTest) {

//   EXPECT_EQ(-1, 1);
// }


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  std::cout<<"\n\n----------running testB.cpp---------\n\n"<<std::endl;
  return RUN_ALL_TESTS();
}

