#include "pch.h"

// �Ĥ@���R�F�@���A��L���S�R�A��������100*1=100��
TEST_F(PotterCartTest, Given_BuyABook1_When_GetTotal_Then_TotalShouldBe100)
{
	m_cart.AddPotterBook(1);

	CartTotalShouldBe(100);
}

// �Ĥ@���R�F�@���A�ĤG���]�R�F�@���A��������100*2*0.95=190
TEST_F(PotterCartTest, Given_BuyABook1AndABook2_When_GetTotal_Then_TotalShouldBe190)
{
	m_cart.AddPotterBook(1);
	m_cart.AddPotterBook(2);

	CartTotalShouldBe(190);
}

// �@�G�T���U�R�F�@���A��������100*3*0.9=270
TEST_F(PotterCartTest, Given_BuyEachOfBook1_2_And_3_When_GetTotal_Then_TotalShouldBe270)
{
	m_cart.AddPotterBook(1);
	m_cart.AddPotterBook(2);
	m_cart.AddPotterBook(3);

	CartTotalShouldBe(270);
}

// �@�G�T�|���U�R�F�@���A��������100*4*0.8=320
TEST_F(PotterCartTest, Given_BuyEachOfBook1_2_3_And_4_When_GetTotal_Then_TotalShouldBe320)
{
	m_cart.AddPotterBook(1);
	m_cart.AddPotterBook(2);
	m_cart.AddPotterBook(3);
	m_cart.AddPotterBook(4);

	CartTotalShouldBe(320);
}

// �@���R�F��M�A�@�G�T�|�����U�R�F�@���A��������100*5*0.75=375
TEST_F(PotterCartTest, Given_BuyEachOfBook1_2_3_4_And_5_When_GetTotal_Then_TotalShouldBe375)
{
	m_cart.AddPotterBook(1);
	m_cart.AddPotterBook(2);
	m_cart.AddPotterBook(3);
	m_cart.AddPotterBook(4);
	m_cart.AddPotterBook(5);

	CartTotalShouldBe(375);
}

// �@�G���U�R�F�@���A�ĤT���R�F�⥻�A��������100*3*0.9 + 100 = 370
TEST_F(PotterCartTest, Given_BuyEachOfBook1_2_AndTwoBook3_When_GetTotal_Then_TotalShouldBe370)
{
	m_cart.AddPotterBook(1);
	m_cart.AddPotterBook(2);
	m_cart.AddPotterBook(3);
	m_cart.AddPotterBook(3);

	CartTotalShouldBe(370);
}

// �Ĥ@���R�F�@���A�ĤG�T���U�R�F�⥻�A��������100 * 3 * 0.9 + 100 * 2 * 0.95 = 460
TEST_F(PotterCartTest, Given_BuyOneBook1_AndTwoBook2_And_3_When_GetTotal_Then_TotalShouldBe460)
{
	m_cart.AddPotterBook(1);
	m_cart.AddPotterBook(2);
	m_cart.AddPotterBook(2);
	m_cart.AddPotterBook(3);
	m_cart.AddPotterBook(3);

	CartTotalShouldBe(460);
}
