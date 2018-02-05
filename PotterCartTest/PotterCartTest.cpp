#include "pch.h"
#include "PotterCartTest.h"


PotterCartTest::PotterCartTest()
{
}


PotterCartTest::~PotterCartTest()
{
}

void PotterCartTest::CartTotalShouldBe(uint32_t expected)
{
	ASSERT_EQ(expected, m_cart.GetTotal());
}
