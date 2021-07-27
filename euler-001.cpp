#include <cstdio>
#include <cstdint>

template <uint64_t n>
struct multi {
	static constexpr uint64_t sum = multi<n - 1>::sum + ((n % 3 == 0 || n % 5 == 0) ? n : 0);
};

template <>
struct multi<1> {
	static constexpr uint64_t sum = 0;
};

int main()
{
	printf("%lu\n", multi<999>::sum);
	return 0;
}

