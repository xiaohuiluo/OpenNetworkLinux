#include <onlp/platformi/psui.h>
#include <AIM/aim.h>

#include <onlp_platform_sim/oids.h>
#include "onlp_platform_sim_log.h"

int
onlp_psui_sw_init(void)
{
    return ONLP_STATUS_OK;
}

int
onlp_psui_hw_init(uint32_t flags)
{
    return ONLP_STATUS_OK;
}

int
onlp_psui_sw_denit(void)
{
    return ONLP_STATUS_OK;
}

int
onlp_psui_id_validate(onlp_oid_id_t id)
{
    return ONLP_STATUS_OK;
}

int
onlp_psui_hdr_get(onlp_oid_id_t id, onlp_oid_hdr_t* rv)
{
    return ONLP_STATUS_OK;
}

int
onlp_psui_info_get(onlp_oid_id_t id, onlp_psu_info_t* rv)
{
    return ONLP_STATUS_OK;
}
