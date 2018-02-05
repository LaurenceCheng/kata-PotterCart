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