#include "pch.h"
#include "../PotterCart/PotterCart.h"

TEST(PotterCartTest, 第一集買了一本_其他都沒買_價格應為100元) // 100 * 1 = 100
{
	PotterCart cart;
	cart.AddPotterBook(1);

	auto actual = cart.GetTotal();

	auto expected = 100;
	ASSERT_EQ(expected, actual);
}