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