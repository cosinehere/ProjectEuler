#include <cstdio>
#include <cstdint>

constexpr uint32_t c_len = 10000;

bool prime[c_len];

int main()
{
	for(uint32_t i = 0; i < c_len; ++i)
	{
		prime[i] = true;
	}
	prime[0] = false;
	prime[1] = false;
	prime[2] = true;
	for(uint32_t i = 2; i < c_len; ++i)
	{
		if(!prime[i])
		{
			continue;
		}

		uint32_t k = 2;
		while (k * i <= c_len) {
			prime[k * i] = false;
			++k;
		}
	}

	uint64_t num = 600851475143ul;

	uint32_t div = 2;
	while (num) {
		if (div > c_len) break;
		if (num % div == 0) {
			num /= div;
			printf("%u\n", div);
		}
		else {
			while (div <= c_len && !prime[++div]);
		}
	}

	return 0;
}
