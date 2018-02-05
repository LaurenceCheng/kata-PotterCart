#pragma once
#include <cstdint>
#include <map>

class PotterCart
{
public:
	PotterCart(void);
	~PotterCart(void);

	void AddPotterBook(uint32_t volume);
	uint32_t GetTotal(void) const;

private:
	static int PRICE_PER_BOOK;

private:
	uint32_t GetNumberOfBooks(void) const;
	uint32_t GetNumberOfPair(void) const;

	std::map<uint32_t, uint32_t> m_books;
};

