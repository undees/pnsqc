#include <algorithm>

// This technique was described by Jon Jagger:
// http://www.jaggersoft.com/pubs/CVu11_3.html
//
#define STATIC_ASSERT(condition) \
    switch(condition) { case 0: case condition: break; }


#define MAX_SALESPEOPLE 100

int main()
{
    STATIC_ASSERT(MAX_SALESPEOPLE < 1000)

    // Stand-in for code that will crater badly if MAX_SALESPEOPLE
    // is ever changed in the code to a value too high.
    //
    int someStatistic = 30000 / std::max(0, 1000 - MAX_SALESPEOPLE);

    printf("Some statistic: %d\n", someStatistic);

    return 0;
}
