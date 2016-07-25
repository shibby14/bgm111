/********************************************************************
 * Autogenerated file, do not edit.
 *******************************************************************/

#include <stdint.h>
#include "ubt/bg_gattdb_def.h"

#ifdef __GNUC__
#define GATT_HEADER(F) F __attribute__ ((section (".gatt_header"))) 
#define GATT_DATA(F) F __attribute__ ((section (".gatt_data"))) 
#else
#ifdef __ICCARM__
#define GATT_HEADER(F) _Pragma("location=\".gatt_header\"") F 
#define GATT_DATA(F) _Pragma("location=\".gatt_data\"") F 
#else
#define GATT_HEADER(F) F 
#define GATT_DATA(F) F 
#endif
#endif

GATT_DATA(const uint16_t bg_gattdb_uuidtable_16_map [])=
{
    0x2800,
    0x2801,
    0x2803,
};

GATT_DATA(const uint8_t bg_gattdb_uuidtable_128_map [])=
{
    0x0 //IAR workaround for empty array
};




GATT_DATA(const struct bg_gattdb_attribute bg_gattdb_attributes_map[])={
{0}};

GATT_DATA(const uint16_t bg_gattdb_attributes_dynamic_mapping_map[])={
	0};

GATT_DATA(const uint8_t bg_gattdb_adv_uuid16_map[])={0x0};
GATT_DATA(const uint8_t bg_gattdb_adv_uuid128_map[])={0x0};
GATT_HEADER(const struct bg_gattdb_def bg_gattdb_data )={
    .attributes=bg_gattdb_attributes_map,
    .attributes_max=0,
    .uuidtable_16_size=3,
    .uuidtable_16=bg_gattdb_uuidtable_16_map,
    .uuidtable_128_size=0,
    .uuidtable_128=bg_gattdb_uuidtable_128_map,
    .attributes_dynamic_max=0,
    .attributes_dynamic_mapping=bg_gattdb_attributes_dynamic_mapping_map,
    .adv_uuid16=bg_gattdb_adv_uuid16_map,
    .adv_uuid16_num=0,
    .adv_uuid128=bg_gattdb_adv_uuid128_map,
    .adv_uuid128_num=0,
};

const struct bg_gattdb_def *bg_gattdb=&bg_gattdb_data;