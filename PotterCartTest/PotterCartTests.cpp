#include "pch.h"
#include "../PotterCart/PotterCart.h"

TEST(PotterCartTest, �Ĥ@���R�F�@��_��L���S�R_��������100��) // 100 * 1 = 100
{
	PotterCart cart;
	cart.AddPotterBook(1);

	auto actual = cart.GetTotal();

	auto expected = 100;
	ASSERT_EQ(expected, actual);
}