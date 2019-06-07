#include <onlp/platformi/fani.h>
#include <AIM/aim.h>

#include <onlp_platform_sim/oids.h>
#include "onlp_platform_sim_log.h"

int
onlp_fani_sw_init(void)
{
    return ONLP_STATUS_OK;
}

int
onlp_fani_hw_init(uint32_t flags)
{
    return ONLP_STATUS_OK;
}

int
onlp_fani_sw_denit(void)
{
    return ONLP_STATUS_OK;
}

int
onlp_fani_id_validate(onlp_oid_id_t id)
{
    return ONLP_STATUS_OK;
}

int
onlp_fani_hdr_get(onlp_oid_id_t id, onlp_oid_hdr_t* hdr)
{
    return ONLP_STATUS_OK;
}

int
onlp_fani_info_get(onlp_oid_id_t id, onlp_fan_info_t* rv)
{
    return ONLP_STATUS_OK;
}

int
onlp_fani_caps_get(onlp_oid_id_t id, uint32_t* rv)
{
    return ONLP_STATUS_OK;
}
int
onlp_fani_rpm_set(onlp_oid_id_t id, int rpm)
{
    return ONLP_STATUS_OK;
}
int
onlp_fani_percentage_set(onlp_oid_id_t id, int p)
{
    return ONLP_STATUS_OK;
}
int
onlp_fani_dir_set(onlp_oid_id_t id, onlp_fan_dir_t dir)
{
    return ONLP_STATUS_OK;
}