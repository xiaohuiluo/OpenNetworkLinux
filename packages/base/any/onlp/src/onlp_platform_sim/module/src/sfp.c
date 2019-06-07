#include <onlp/platformi/sfpi.h>
#include <sff/sff.h>

int
onlp_sfpi_sw_init(void)
{
    return ONLP_STATUS_OK;
}

int
onlp_sfpi_hw_init(uint32_t flags)
{
    return ONLP_STATUS_OK;
}

int
onlp_sfpi_sw_denit(void)
{
    return ONLP_STATUS_OK;
}

int
onlp_sfpi_bitmap_get(onlp_sfp_bitmap_t* bmap)
{
    return ONLP_STATUS_OK;
}

int
onlp_sfpi_type_get(onlp_oid_id_t id, onlp_sfp_type_t* rtype)
{
    return ONLP_STATUS_OK;
}

int
onlp_sfpi_is_present(onlp_oid_id_t id)
{
    return ONLP_STATUS_OK;
}

int
onlp_sfpi_presence_bitmap_get(onlp_sfp_bitmap_t* dst)
{
    return ONLP_STATUS_OK;
}

int
onlp_sfpi_rx_los_bitmap_get(onlp_sfp_bitmap_t* dst)
{
    return ONLP_STATUS_OK;
}

int
onlp_sfpi_dev_read(onlp_oid_id_t id, int devaddr, int addr, uint8_t* dst, int len)
{
    return ONLP_STATUS_OK;
}

int
onlp_sfpi_dev_write(onlp_oid_id_t id, int devaddr, int addr, uint8_t* src, int len)
{
    return ONLP_STATUS_OK;
}

int
onlp_sfpi_dev_readb(onlp_oid_id_t id, int devaddr, int addr)
{
    return ONLP_STATUS_OK;
}

int
onlp_sfpi_dev_writeb(onlp_oid_id_t id, int devaddr, int addr, uint8_t value)
{
    return ONLP_STATUS_OK;
}

int
onlp_sfpi_dev_readw(onlp_oid_id_t id, int devaddr, int addr)
{
    return ONLP_STATUS_OK;
}

int
onlp_sfpi_dev_writew(onlp_oid_id_t id, int devaddr, int addr, uint16_t value)
{
    return ONLP_STATUS_OK;
}

int
onlp_sfpi_post_insert(onlp_oid_id_t id, sff_info_t* info)
{
    return ONLP_STATUS_OK;
}

int
onlp_sfpi_control_supported(onlp_oid_id_t id, onlp_sfp_control_t control, int* rv)
{
    return ONLP_STATUS_OK;
}

int
onlp_sfpi_control_set(onlp_oid_id_t id, onlp_sfp_control_t control, int value)
{
    return ONLP_STATUS_OK;
}

int
onlp_sfpi_control_get(onlp_oid_id_t id, onlp_sfp_control_t control, int* value)
{
    return ONLP_STATUS_OK;
}

int
onlp_sfpi_port_map(onlp_oid_id_t id, int* rport)
{
    return ONLP_STATUS_OK;
}

int
onlp_sfpi_hdr_get(onlp_oid_id_t id, onlp_oid_hdr_t* hdr)
{
    return ONLP_STATUS_OK;
}
