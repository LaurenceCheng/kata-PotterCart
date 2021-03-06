#pragma once
#include <cstdint>
#include <map>

class PotterCart
{
public:
	PotterCart(void);
	~PotterCart(void);

	void AddPotterBook(uint32_t volume);
	uint32_t GetTotal(void);

private:
	static int PRICE_PER_BOOK;
	static double DISCOUNT_FOR_PAIR;
	static double DISCOUNT_FOR_TRIO;
	static double DISCOUNT_FOR_QUARTET;
	static double DISCOUNT_FOR_QUINTET;

private:
	uint32_t GetCountOfSet(uint32_t numberPerSet) const;
	uint32_t GetCountOfSolo(void) const;
	uint32_t GetCountOfDuo(void) const;
	uint32_t GetCountOfTrio(void) const;
	uint32_t GetCountOfQuartet(void) const;
	uint32_t GetCountOfQuintet(void) const;
	void RemoveBooksBySet(uint32_t numberPerSet);
	void RemoveDuo(void);
	void RemoveTrio(void);
	void RemoveQuartet(void);
	void RemoveQuintet(void);

	std::map<uint32_t, uint32_t> m_books;
};

