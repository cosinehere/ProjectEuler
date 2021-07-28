#include <cstdio>
#include <cstdint>

inline uint32_t gcd(uint32_t a, uint32_t b)
{
    if (a < b)
    {
        return gcd(b, a);
    }
    else
    {
        return (!b) ? a : gcd(b, a % b);
    }
}

int main()
{
    uint32_t ans = 1;
    for (uint32_t i = 2; i < 21; ++i)
    {
        ans = ans / gcd(ans, i) * i;
    }

    printf("%u\n", ans);

    return 0;
}
