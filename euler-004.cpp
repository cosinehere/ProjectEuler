#include <cstdio>
#include <cstdint>

int main()
{
    uint32_t max = 0;
    for (uint32_t a = 100; a < 1000; ++a)
    {
        for (uint32_t b = a; b < 1000; ++b)
        {
            if (a * b <= max)
            {
                continue;
            }
            uint32_t c = a * b;
            uint32_t d = 0;
            while (c)
            {
                d = d * 10 + (c % 10);
                c /= 10;
            }
            if (d == a * b && d > max)
            {
                max = d;
            }
        }
    }

    printf("%u\n", max);

    return 0;
}