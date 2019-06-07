#include <onlp/platformi/platformi.h>
#include <onlp_platform_sim/oids.h>

const char*
onlp_platformi_get(void)
{
    return "onlp_sim";
}

int
onlp_platformi_set(const char* platform)
{
    return ONLP_STATUS_OK;
}

int
onlp_platformi_sw_init(void)
{
    return ONLP_STATUS_OK;
}

int
onlp_platformi_hw_init(uint32_t flags)
{
    return ONLP_STATUS_OK;
}

int
onlp_platformi_manage_init(void)
{
    return ONLP_STATUS_OK;
}

int
onlp_platformi_manage_fans(void)
{
    return ONLP_STATUS_OK;
}

int
onlp_platformi_manage_leds(void)
{
    return ONLP_STATUS_OK;
}
