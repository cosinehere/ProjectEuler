#include <cstdio>
#include <cstdint>

template <uint64_t n, uint64_t limit>
struct even_fibo {
	static constexpr uint64_t val = even_fibo<n - 1, limit>::val + even_fibo<n - 2, limit>::val;
	static constexpr uint64_t even = (!(val & 0x01) && val < limit)
									? val + even_fibo<n - 1, limit>::even
									: even_fibo<n - 1, limit>::even;
};

template <uint64_t limit>
struct even_fibo<1, limit> {
	static constexpr uint64_t val = 1;
	static constexpr uint64_t even = 0;
};

template <uint64_t limit>
struct even_fibo<2, limit> {
	static constexpr uint64_t val = 2;
	static constexpr uint64_t even = 2;
};

int main()
{
	printf("%lu\n", even_fibo<128, 4000000>::even);
	return 0;
}
