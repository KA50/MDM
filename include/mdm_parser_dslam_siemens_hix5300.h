/*!
 * \file mdm_parser_dslam_siemens_hix5300.h Parsers for dslams siemens hix 5300.
 *
 * \author Marcelo Gornstein <marcelog@gmail.com>
 */
#ifndef	_MDM_PARSER_DSLAM_SIEMENS_HIX5300_H_
#define	_MDM_PARSER_DSLAM_SIEMENS_HIX5300_H_

#include	<mdm_operation.h>
#include	<mdm_device.h>

extern void dslam_siemens_hix5300_nop(
    mdm_device_descriptor_t *, mdm_operation_result_t *
);
extern void
dslam_siemens_hix5300_get_service_profile(
    mdm_device_descriptor_t *d, mdm_operation_result_t *status
);
extern void
dslam_siemens_hix5300_get_slots(
    mdm_device_descriptor_t *d, mdm_operation_result_t *status
);
extern void
dslam_siemens_hix5300_get_system_version(
    mdm_device_descriptor_t *d, mdm_operation_result_t *status
);
extern void
dslam_siemens_hix5300_get_slot_ports(
    mdm_device_descriptor_t *d, mdm_operation_result_t *status
);
extern void
dslam_siemens_hix5300_get_physical_port_info(
    mdm_device_descriptor_t *d, mdm_operation_result_t *status
);
extern void
dslam_siemens_hix5300_get_ntp(
    mdm_device_descriptor_t *d, mdm_operation_result_t *status
);
extern void
dslam_siemens_hix5300_get_alarms(
    mdm_device_descriptor_t *d, mdm_operation_result_t *status
);
extern void
dslam_siemens_hix5300_get_soft_versions(
    mdm_device_descriptor_t *d, mdm_operation_result_t *status
);
extern void
dslam_siemens_hix5300_get_line_config(
    mdm_device_descriptor_t *d, mdm_operation_result_t *status
);
extern void
dslam_siemens_hix5300_get_syslog(
    mdm_device_descriptor_t *d, mdm_operation_result_t *status
);
extern void
dslam_siemens_hix5300_get_fans(
    mdm_device_descriptor_t *d, mdm_operation_result_t *status
);
extern void
dslam_siemens_hix5300_get_uptime(
    mdm_device_descriptor_t *d, mdm_operation_result_t *status
);
extern void
dslam_siemens_hix5300_get_network_interfaces(
    mdm_device_descriptor_t *d, mdm_operation_result_t *status
);
extern void
dslam_siemens_hix5300_get_memory_info(
    mdm_device_descriptor_t *d, mdm_operation_result_t *status
);
extern void
dslam_siemens_hix5300_get_mac_ports(
    mdm_device_descriptor_t *d, mdm_operation_result_t *status
);
extern void
dslam_siemens_hix5300_get_port_description(
    mdm_device_descriptor_t *d, mdm_operation_result_t *status
);
extern void
dslam_siemens_hix5300_get_port_detail(
    mdm_device_descriptor_t *d, mdm_operation_result_t *status
);
extern void
dslam_siemens_hix5300_get_port_descriptions(
    mdm_device_descriptor_t *d, mdm_operation_result_t *status
);
extern void
dslam_siemens_hix5300_get_ports_pvcs(
    mdm_device_descriptor_t *d, mdm_operation_result_t *status
);
extern void
dslam_siemens_hix5300_get_cards(
    mdm_device_descriptor_t *d, mdm_operation_result_t *status
);
extern void
dslam_siemens_hix5300_get_routes(
    mdm_device_descriptor_t *d, mdm_operation_result_t *status
);
extern void
dslam_siemens_hix5300_get_interfaces(
    mdm_device_descriptor_t *d, mdm_operation_result_t *status
);
extern void
dslam_siemens_hix5300_get_cpu_load(
    mdm_device_descriptor_t *d, mdm_operation_result_t *status
);
extern void
dslam_siemens_hix5300_get_vlan_pvid(
    mdm_device_descriptor_t *d, mdm_operation_result_t *status
);
extern void
dslam_siemens_hix5300_get_port_pvid(
    mdm_device_descriptor_t *d, mdm_operation_result_t *status
);
#endif
