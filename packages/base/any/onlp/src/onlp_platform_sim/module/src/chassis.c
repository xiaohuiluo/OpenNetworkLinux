#include <onlp/platformi/chassisi.h>
#include <AIM/aim.h>

#include <onlp_platform_sim/oids.h>
#include "onlp_platform_sim_log.h"

int
onlp_chassisi_sw_init(void)
{
    return ONLP_STATUS_OK;
}

int
onlp_chassisi_hw_init(uint32_t flags)
{
    return ONLP_STATUS_OK;
}

int
onlp_chassisi_sw_denit(void)
{
    return ONLP_STATUS_OK;
}

int
onlp_chassisi_hdr_get(onlp_oid_id_t id, onlp_oid_hdr_t* hdr)
{
    return ONLP_STATUS_OK;
}

int
onlp_chassisi_info_get(onlp_oid_id_t id, onlp_chassis_info_t* info)
{
    return ONLP_STATUS_OK;
}
