#include <cstdio.h>

#define NORMAL_ALERT 0
#define ETWS_ALERT 1
#define CMAS_ALERT 2
#define EMERGENCE_ALERT 3
#define PRESIDENTIAL_ALERT 4
void alerts(void) {
#if NORMAL_ALERT
printf("NORMAL_ALERT:");
#else ETWS_ALERT
printf("ETWS_ALERT:");
#if CMAS_ALERT
printf("CMAS_ALERT:");
#else EMERGENCE_ALERT
printf("EMERGENCE_ALERT:");
#if PRESIDENTIAL_ALERT
printf("PRESIDENTIAL_ALERT:");
}