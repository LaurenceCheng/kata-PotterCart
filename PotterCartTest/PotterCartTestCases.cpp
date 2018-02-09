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

// 一二三四集各買了一本，價格應為100*4*0.8=320
TEST_F(PotterCartTest, Given_BuyEachOfBook1_2_3_And_4_When_GetTotal_Then_TotalShouldBe320)
{
	m_cart.AddPotterBook(1);
	m_cart.AddPotterBook(2);
	m_cart.AddPotterBook(3);
	m_cart.AddPotterBook(4);

	CartTotalShouldBe(320);
}

// 一次買了整套，一二三四五集各買了一本，價格應為100*5*0.75=375
TEST_F(PotterCartTest, Given_BuyEachOfBook1_2_3_4_And_5_When_GetTotal_Then_TotalShouldBe375)
{
	m_cart.AddPotterBook(1);
	m_cart.AddPotterBook(2);
	m_cart.AddPotterBook(3);
	m_cart.AddPotterBook(4);
	m_cart.AddPotterBook(5);

	CartTotalShouldBe(375);
}

// 一二集各買了一本，第三集買了兩本，價格應為100*3*0.9 + 100 = 370
TEST_F(PotterCartTest, Given_BuyEachOfBook1_2_AndTwoBook3_When_GetTotal_Then_TotalShouldBe370)
{
	m_cart.AddPotterBook(1);
	m_cart.AddPotterBook(2);
	m_cart.AddPotterBook(3);
	m_cart.AddPotterBook(3);

	CartTotalShouldBe(370);
}

// 第一集買了一本，第二三集各買了兩本，價格應為100 * 3 * 0.9 + 100 * 2 * 0.95 = 460
TEST_F(PotterCartTest, Given_BuyOneBook1_AndTwoBook2_And_3_When_GetTotal_Then_TotalShouldBe460)
{
	m_cart.AddPotterBook(1);
	m_cart.AddPotterBook(2);
	m_cart.AddPotterBook(2);
	m_cart.AddPotterBook(3);
	m_cart.AddPotterBook(3);

	CartTotalShouldBe(460);
}
