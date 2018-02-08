#include "pch.h"

// 第一集買了一本，其他都沒買，價格應為100*1=100元
TEST_F(PotterCartTest, Given_BuyABook1_When_GetTotal_Then_TotalShouldBe100)
{
	m_cart.AddPotterBook(1);

	CartTotalShouldBe(100);
}

// 第一集買了一本，第二集也買了一本，價格應為100*2*0.95=190
TEST_F(PotterCartTest, Given_BuyABook1AndABook2_When_GetTotal_Then_TotalShouldBe190)
{
	m_cart.AddPotterBook(1);
	m_cart.AddPotterBook(2);

	CartTotalShouldBe(190);
}

// 一二三集各買了一本，價格應為100*3*0.9=270
TEST_F(PotterCartTest, Given_BuyEachOfBook1_2_And_3_When_GetTotal_Then_TotalShouldBe270)
{
	m_cart.AddPotterBook(1);
	m_cart.AddPotterBook(2);
	m_cart.AddPotterBook(3);

	CartTotalShouldBe(270);
}