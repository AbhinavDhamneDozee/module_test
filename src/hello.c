#include <zephyr/logging/log.h>
#include "hello.h"

LOG_MODULE_REGISTER(hello, CONFIG_HELLO_MODULE_LOG_LEVEL);

void hello_init(void)
{
    LOG_INF("Hello module initialized!");
}

void hello_print(void)
{
    LOG_INF("Hello world from the module!");
}
