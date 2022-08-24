// Online C++ compiler to run C++ program online

#include <gtest/gtest.h>
#include "inc/server.h"

// TEST(myfunctions, add)
// {
//     GTEST_ASSERT_EQ(add(10, 22), 32);
// }

// vector<Employe> classEmpList;
// class classEmp 
Employe emp;

TEST(module_name, test_name) {

    emp.setName("user");
    string s = emp.getName();
    ASSERT_EQ(s, "user");
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

