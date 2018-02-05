#include "pch.h"
#include "../PotterCart/PotterCart.h"

// 第一集買了一本，其他都沒買，價格應為100*1=100元
TEST(PotterCartTest, Given_BuyABook1_When_GetTotal_Then_TotalShouldBe100)
{
	PotterCart cart;
	cart.AddPotterBook(1);

	auto actual = cart.GetTotal();

	auto expected = 100;
	ASSERT_EQ(expected, actual);
}

// 第一集買了一本，第二集也買了一本，價格應為100*2*0.95=190
TEST(PotterCartTest, Given_BuyABook1AndABook2_When_GetTotal_Then_TotalShouldBe190)
{
	PotterCart cart;
	cart.AddPotterBook(1);
	cart.AddPotterBook(2);

	auto actual = cart.GetTotal();

	auto expected = 190;
	ASSERT_EQ(expected, actual);
}