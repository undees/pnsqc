#include <stdio.h>

#define LONG_NAME_FOR_FOO  1
#define LONG_NAME_FOR_QUUX 2
#define WITH_FOO_AND_BAR 1
#define WITH_QUUX_AND_BAZ 2
#define BAR_VALUE 1
#define BAZ_VALUE 2

void someComplicatedFunction(int section, int key, int value)
{
    printf("These numbers should all be the same: %d, %d, %d\n",
           section, key, value);
}

#define DO_SOMETHING_WITH(k, v) {\
    someComplicatedFunction(LONG_NAME_FOR_ ## k,      \
                            WITH_ ## k ## _AND_ ## v, \
                            v ## _VALUE);             \
}

int main()
{
    printf("Buggy version:\n");
    someComplicatedFunction(LONG_NAME_FOR_FOO, WITH_FOO_AND_BAR, BAR_VALUE);
    someComplicatedFunction(LONG_NAME_FOR_QUUX, WITH_QUUX_AND_BAZ, BAR_VALUE);

    printf("\nFixed version:\n");
    DO_SOMETHING_WITH(FOO,  BAR);
    DO_SOMETHING_WITH(QUUX, BAZ);
}
