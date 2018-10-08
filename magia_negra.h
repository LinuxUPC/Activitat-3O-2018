#ifndef CODI_H
#define CODI_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define CHECK(n) \
    punts += n; \
    printf("\e[1;1H\e[2J"); \
    printf("Tens: %d punts.\n", punts); \

int punts;

#define true  1
#define false 0

#endif // CODI_H
