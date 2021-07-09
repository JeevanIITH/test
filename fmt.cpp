
#include <gtest/gtest.h>

struct BankAccount
{
    int balance=0;
    BankAccount()
    {
    }
    explicit BankAccount(const int balance1):balance{balance1}
    {
    }
}; 

struct BankAccountTest: testing::Test
{
    BankAccount* account;
    BankAccountTest()
    {
        account=new BankAccount;
    }

    ~BankAccountTest()
    {
        delete account;
    }
};


TEST_F(BankAccountTest, BankAccountStartsEmpty)
{
    
    EXPECT_EQ(0,account->balance);
}



int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}