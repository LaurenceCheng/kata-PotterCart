#include "pch.h"
#include "../PotterCart/PotterCart.h"

// �Ĥ@���R�F�@���A��L���S�R�A��������100*1=100��
TEST(PotterCartTest, Given_BuyABook1_When_GetTotal_Then_TotalShouldBe100)
{
	PotterCart cart;
	cart.AddPotterBook(1);

	auto actual = cart.GetTotal();

	auto expected = 100;
	ASSERT_EQ(expected, actual);
}

// �Ĥ@���R�F�@���A�ĤG���]�R�F�@���A��������100*2*0.95=190
TEST(PotterCartTest, Given_BuyABook1AndABook2_When_GetTotal_Then_TotalShouldBe190)
{
	PotterCart cart;
	cart.AddPotterBook(1);
	cart.AddPotterBook(2);

	auto actual = cart.GetTotal();

	auto expected = 190;
	ASSERT_EQ(expected, actual);
}