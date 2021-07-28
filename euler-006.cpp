#include <cstdio>
#include <cstdint>

int main()
{
    uint32_t ans = 101 * 101 * 50 * 50;
    for (uint32_t i = 1; i < 101; ++i)
    {
        ans -= i * i;
    }
    printf("%u\n", ans);

    return 0;
}
