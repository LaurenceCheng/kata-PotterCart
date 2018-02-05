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
