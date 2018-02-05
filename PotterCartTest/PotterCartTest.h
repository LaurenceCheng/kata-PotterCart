#pragma once
#include "../PotterCart/PotterCart.h"

class PotterCartTest : public ::testing::Test
{
public:
	PotterCartTest();
	~PotterCartTest();

	void CartTotalShouldBe(uint32_t expected);

protected:
	PotterCart m_cart;
};

