#pragma once
#include <cstdint>
#include <vector>

class PotterCart
{
public:
	PotterCart(void);
	~PotterCart(void);

	void AddPotterBook(uint32_t volume);
	uint32_t GetTotal(void) const;

private:
	std::vector<uint32_t> m_books;
};

