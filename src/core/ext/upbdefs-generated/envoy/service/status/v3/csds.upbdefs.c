/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/service/status/v3/csds.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include "upb/def.h"
#include "envoy/service/status/v3/csds.upbdefs.h"
#include "envoy/service/status/v3/csds.upb.h"

extern upb_def_init envoy_admin_v3_config_dump_proto_upbdefinit;
extern upb_def_init envoy_config_core_v3_base_proto_upbdefinit;
extern upb_def_init envoy_type_matcher_v3_node_proto_upbdefinit;
extern upb_def_init google_api_annotations_proto_upbdefinit;
extern upb_def_init google_protobuf_any_proto_upbdefinit;
extern upb_def_init google_protobuf_timestamp_proto_upbdefinit;
extern upb_def_init envoy_annotations_deprecation_proto_upbdefinit;
extern upb_def_init udpa_annotations_status_proto_upbdefinit;
extern upb_def_init udpa_annotations_versioning_proto_upbdefinit;
static const char descriptor[2751] = {'\n', '\"', 'e', 'n', 'v', 'o', 'y', '/', 's', 'e', 'r', 'v', 'i', 'c', 'e', '/', 's', 't', 'a', 't', 'u', 's', '/', 'v', '3', 
'/', 'c', 's', 'd', 's', '.', 'p', 'r', 'o', 't', 'o', '\022', '\027', 'e', 'n', 'v', 'o', 'y', '.', 's', 'e', 'r', 'v', 'i', 'c', 
'e', '.', 's', 't', 'a', 't', 'u', 's', '.', 'v', '3', '\032', ' ', 'e', 'n', 'v', 'o', 'y', '/', 'a', 'd', 'm', 'i', 'n', '/', 
'v', '3', '/', 'c', 'o', 'n', 'f', 'i', 'g', '_', 'd', 'u', 'm', 'p', '.', 'p', 'r', 'o', 't', 'o', '\032', '\037', 'e', 'n', 'v', 
'o', 'y', '/', 'c', 'o', 'n', 'f', 'i', 'g', '/', 'c', 'o', 'r', 'e', '/', 'v', '3', '/', 'b', 'a', 's', 'e', '.', 'p', 'r', 
'o', 't', 'o', '\032', ' ', 'e', 'n', 'v', 'o', 'y', '/', 't', 'y', 'p', 'e', '/', 'm', 'a', 't', 'c', 'h', 'e', 'r', '/', 'v', 
'3', '/', 'n', 'o', 'd', 'e', '.', 'p', 'r', 'o', 't', 'o', '\032', '\034', 'g', 'o', 'o', 'g', 'l', 'e', '/', 'a', 'p', 'i', '/', 
'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '.', 'p', 'r', 'o', 't', 'o', '\032', '\031', 'g', 'o', 'o', 'g', 'l', 'e', 
'/', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '/', 'a', 'n', 'y', '.', 'p', 'r', 'o', 't', 'o', '\032', '\037', 'g', 'o', 'o', 'g', 
'l', 'e', '/', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '/', 't', 'i', 'm', 'e', 's', 't', 'a', 'm', 'p', '.', 'p', 'r', 'o', 
't', 'o', '\032', '#', 'e', 'n', 'v', 'o', 'y', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 'd', 'e', 'p', 
'r', 'e', 'c', 'a', 't', 'i', 'o', 'n', '.', 'p', 'r', 'o', 't', 'o', '\032', '\035', 'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 'o', 
't', 'a', 't', 'i', 'o', 'n', 's', '/', 's', 't', 'a', 't', 'u', 's', '.', 'p', 'r', 'o', 't', 'o', '\032', '!', 'u', 'd', 'p', 
'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 'v', 'e', 'r', 's', 'i', 'o', 'n', 'i', 'n', 'g', '.', 
'p', 'r', 'o', 't', 'o', '\"', '\302', '\001', '\n', '\023', 'C', 'l', 'i', 'e', 'n', 't', 'S', 't', 'a', 't', 'u', 's', 'R', 'e', 'q', 
'u', 'e', 's', 't', '\022', 'G', '\n', '\r', 'n', 'o', 'd', 'e', '_', 'm', 'a', 't', 'c', 'h', 'e', 'r', 's', '\030', '\001', ' ', '\003', 
'(', '\013', '2', '\"', '.', 'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', '.', 'm', 'a', 't', 'c', 'h', 'e', 'r', '.', 'v', 
'3', '.', 'N', 'o', 'd', 'e', 'M', 'a', 't', 'c', 'h', 'e', 'r', 'R', '\014', 'n', 'o', 'd', 'e', 'M', 'a', 't', 'c', 'h', 'e', 
'r', 's', '\022', '.', '\n', '\004', 'n', 'o', 'd', 'e', '\030', '\002', ' ', '\001', '(', '\013', '2', '\032', '.', 'e', 'n', 'v', 'o', 'y', '.', 
'c', 'o', 'n', 'f', 'i', 'g', '.', 'c', 'o', 'r', 'e', '.', 'v', '3', '.', 'N', 'o', 'd', 'e', 'R', '\004', 'n', 'o', 'd', 'e', 
':', '2', '\232', '\305', '\210', '\036', '-', '\n', '+', 'e', 'n', 'v', 'o', 'y', '.', 's', 'e', 'r', 'v', 'i', 'c', 'e', '.', 's', 't', 
'a', 't', 'u', 's', '.', 'v', '2', '.', 'C', 'l', 'i', 'e', 'n', 't', 'S', 't', 'a', 't', 'u', 's', 'R', 'e', 'q', 'u', 'e', 
's', 't', '\"', '\371', '\004', '\n', '\014', 'P', 'e', 'r', 'X', 'd', 's', 'C', 'o', 'n', 'f', 'i', 'g', '\022', '=', '\n', '\006', 's', 't', 
'a', 't', 'u', 's', '\030', '\001', ' ', '\001', '(', '\016', '2', '%', '.', 'e', 'n', 'v', 'o', 'y', '.', 's', 'e', 'r', 'v', 'i', 'c', 
'e', '.', 's', 't', 'a', 't', 'u', 's', '.', 'v', '3', '.', 'C', 'o', 'n', 'f', 'i', 'g', 'S', 't', 'a', 't', 'u', 's', 'R', 
'\006', 's', 't', 'a', 't', 'u', 's', '\022', ']', '\n', '\r', 'c', 'l', 'i', 'e', 'n', 't', '_', 's', 't', 'a', 't', 'u', 's', '\030', 
'\007', ' ', '\001', '(', '\016', '2', '+', '.', 'e', 'n', 'v', 'o', 'y', '.', 's', 'e', 'r', 'v', 'i', 'c', 'e', '.', 's', 't', 'a', 
't', 'u', 's', '.', 'v', '3', '.', 'C', 'l', 'i', 'e', 'n', 't', 'C', 'o', 'n', 'f', 'i', 'g', 'S', 't', 'a', 't', 'u', 's', 
'B', '\013', '\030', '\001', '\222', '\307', '\206', '\330', '\004', '\003', '3', '.', '0', 'R', '\014', 'c', 'l', 'i', 'e', 'n', 't', 'S', 't', 'a', 't', 
'u', 's', '\022', 'N', '\n', '\017', 'l', 'i', 's', 't', 'e', 'n', 'e', 'r', '_', 'c', 'o', 'n', 'f', 'i', 'g', '\030', '\002', ' ', '\001', 
'(', '\013', '2', '#', '.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'd', 'm', 'i', 'n', '.', 'v', '3', '.', 'L', 'i', 's', 't', 'e', 
'n', 'e', 'r', 's', 'C', 'o', 'n', 'f', 'i', 'g', 'D', 'u', 'm', 'p', 'H', '\000', 'R', '\016', 'l', 'i', 's', 't', 'e', 'n', 'e', 
'r', 'C', 'o', 'n', 'f', 'i', 'g', '\022', 'K', '\n', '\016', 'c', 'l', 'u', 's', 't', 'e', 'r', '_', 'c', 'o', 'n', 'f', 'i', 'g', 
'\030', '\003', ' ', '\001', '(', '\013', '2', '\"', '.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'd', 'm', 'i', 'n', '.', 'v', '3', '.', 'C', 
'l', 'u', 's', 't', 'e', 'r', 's', 'C', 'o', 'n', 'f', 'i', 'g', 'D', 'u', 'm', 'p', 'H', '\000', 'R', '\r', 'c', 'l', 'u', 's', 
't', 'e', 'r', 'C', 'o', 'n', 'f', 'i', 'g', '\022', 'E', '\n', '\014', 'r', 'o', 'u', 't', 'e', '_', 'c', 'o', 'n', 'f', 'i', 'g', 
'\030', '\004', ' ', '\001', '(', '\013', '2', ' ', '.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'd', 'm', 'i', 'n', '.', 'v', '3', '.', 'R', 
'o', 'u', 't', 'e', 's', 'C', 'o', 'n', 'f', 'i', 'g', 'D', 'u', 'm', 'p', 'H', '\000', 'R', '\013', 'r', 'o', 'u', 't', 'e', 'C', 
'o', 'n', 'f', 'i', 'g', '\022', 'X', '\n', '\023', 's', 'c', 'o', 'p', 'e', 'd', '_', 'r', 'o', 'u', 't', 'e', '_', 'c', 'o', 'n', 
'f', 'i', 'g', '\030', '\005', ' ', '\001', '(', '\013', '2', '&', '.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'd', 'm', 'i', 'n', '.', 'v', 
'3', '.', 'S', 'c', 'o', 'p', 'e', 'd', 'R', 'o', 'u', 't', 'e', 's', 'C', 'o', 'n', 'f', 'i', 'g', 'D', 'u', 'm', 'p', 'H', 
'\000', 'R', '\021', 's', 'c', 'o', 'p', 'e', 'd', 'R', 'o', 'u', 't', 'e', 'C', 'o', 'n', 'f', 'i', 'g', '\022', 'N', '\n', '\017', 'e', 
'n', 'd', 'p', 'o', 'i', 'n', 't', '_', 'c', 'o', 'n', 'f', 'i', 'g', '\030', '\006', ' ', '\001', '(', '\013', '2', '#', '.', 'e', 'n', 
'v', 'o', 'y', '.', 'a', 'd', 'm', 'i', 'n', '.', 'v', '3', '.', 'E', 'n', 'd', 'p', 'o', 'i', 'n', 't', 's', 'C', 'o', 'n', 
'f', 'i', 'g', 'D', 'u', 'm', 'p', 'H', '\000', 'R', '\016', 'e', 'n', 'd', 'p', 'o', 'i', 'n', 't', 'C', 'o', 'n', 'f', 'i', 'g', 
':', '+', '\232', '\305', '\210', '\036', '&', '\n', '$', 'e', 'n', 'v', 'o', 'y', '.', 's', 'e', 'r', 'v', 'i', 'c', 'e', '.', 's', 't', 
'a', 't', 'u', 's', '.', 'v', '2', '.', 'P', 'e', 'r', 'X', 'd', 's', 'C', 'o', 'n', 'f', 'i', 'g', 'B', '\020', '\n', '\016', 'p', 
'e', 'r', '_', 'x', 'd', 's', '_', 'c', 'o', 'n', 'f', 'i', 'g', '\"', '\213', '\006', '\n', '\014', 'C', 'l', 'i', 'e', 'n', 't', 'C', 
'o', 'n', 'f', 'i', 'g', '\022', '.', '\n', '\004', 'n', 'o', 'd', 'e', '\030', '\001', ' ', '\001', '(', '\013', '2', '\032', '.', 'e', 'n', 'v', 
'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'c', 'o', 'r', 'e', '.', 'v', '3', '.', 'N', 'o', 'd', 'e', 'R', '\004', 'n', 
'o', 'd', 'e', '\022', 'Q', '\n', '\n', 'x', 'd', 's', '_', 'c', 'o', 'n', 'f', 'i', 'g', '\030', '\002', ' ', '\003', '(', '\013', '2', '%', 
'.', 'e', 'n', 'v', 'o', 'y', '.', 's', 'e', 'r', 'v', 'i', 'c', 'e', '.', 's', 't', 'a', 't', 'u', 's', '.', 'v', '3', '.', 
'P', 'e', 'r', 'X', 'd', 's', 'C', 'o', 'n', 'f', 'i', 'g', 'B', '\013', '\030', '\001', '\222', '\307', '\206', '\330', '\004', '\003', '3', '.', '0', 
'R', '\t', 'x', 'd', 's', 'C', 'o', 'n', 'f', 'i', 'g', '\022', 'f', '\n', '\023', 'g', 'e', 'n', 'e', 'r', 'i', 'c', '_', 'x', 'd', 
's', '_', 'c', 'o', 'n', 'f', 'i', 'g', 's', '\030', '\003', ' ', '\003', '(', '\013', '2', '6', '.', 'e', 'n', 'v', 'o', 'y', '.', 's', 
'e', 'r', 'v', 'i', 'c', 'e', '.', 's', 't', 'a', 't', 'u', 's', '.', 'v', '3', '.', 'C', 'l', 'i', 'e', 'n', 't', 'C', 'o', 
'n', 'f', 'i', 'g', '.', 'G', 'e', 'n', 'e', 'r', 'i', 'c', 'X', 'd', 's', 'C', 'o', 'n', 'f', 'i', 'g', 'R', '\021', 'g', 'e', 
'n', 'e', 'r', 'i', 'c', 'X', 'd', 's', 'C', 'o', 'n', 'f', 'i', 'g', 's', '\032', '\342', '\003', '\n', '\020', 'G', 'e', 'n', 'e', 'r', 
'i', 'c', 'X', 'd', 's', 'C', 'o', 'n', 'f', 'i', 'g', '\022', '\031', '\n', '\010', 't', 'y', 'p', 'e', '_', 'u', 'r', 'l', '\030', '\001', 
' ', '\001', '(', '\t', 'R', '\007', 't', 'y', 'p', 'e', 'U', 'r', 'l', '\022', '\022', '\n', '\004', 'n', 'a', 'm', 'e', '\030', '\002', ' ', '\001', 
'(', '\t', 'R', '\004', 'n', 'a', 'm', 'e', '\022', '!', '\n', '\014', 'v', 'e', 'r', 's', 'i', 'o', 'n', '_', 'i', 'n', 'f', 'o', '\030', 
'\003', ' ', '\001', '(', '\t', 'R', '\013', 'v', 'e', 'r', 's', 'i', 'o', 'n', 'I', 'n', 'f', 'o', '\022', '3', '\n', '\n', 'x', 'd', 's', 
'_', 'c', 'o', 'n', 'f', 'i', 'g', '\030', '\004', ' ', '\001', '(', '\013', '2', '\024', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 
'o', 't', 'o', 'b', 'u', 'f', '.', 'A', 'n', 'y', 'R', '\t', 'x', 'd', 's', 'C', 'o', 'n', 'f', 'i', 'g', '\022', '=', '\n', '\014', 
'l', 'a', 's', 't', '_', 'u', 'p', 'd', 'a', 't', 'e', 'd', '\030', '\005', ' ', '\001', '(', '\013', '2', '\032', '.', 'g', 'o', 'o', 'g', 
'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'T', 'i', 'm', 'e', 's', 't', 'a', 'm', 'p', 'R', '\013', 'l', 'a', 
's', 't', 'U', 'p', 'd', 'a', 't', 'e', 'd', '\022', 'J', '\n', '\r', 'c', 'o', 'n', 'f', 'i', 'g', '_', 's', 't', 'a', 't', 'u', 
's', '\030', '\006', ' ', '\001', '(', '\016', '2', '%', '.', 'e', 'n', 'v', 'o', 'y', '.', 's', 'e', 'r', 'v', 'i', 'c', 'e', '.', 's', 
't', 'a', 't', 'u', 's', '.', 'v', '3', '.', 'C', 'o', 'n', 'f', 'i', 'g', 'S', 't', 'a', 't', 'u', 's', 'R', '\014', 'c', 'o', 
'n', 'f', 'i', 'g', 'S', 't', 'a', 't', 'u', 's', '\022', 'I', '\n', '\r', 'c', 'l', 'i', 'e', 'n', 't', '_', 's', 't', 'a', 't', 
'u', 's', '\030', '\007', ' ', '\001', '(', '\016', '2', '$', '.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'd', 'm', 'i', 'n', '.', 'v', '3', 
'.', 'C', 'l', 'i', 'e', 'n', 't', 'R', 'e', 's', 'o', 'u', 'r', 'c', 'e', 'S', 't', 'a', 't', 'u', 's', 'R', '\014', 'c', 'l', 
'i', 'e', 'n', 't', 'S', 't', 'a', 't', 'u', 's', '\022', 'C', '\n', '\013', 'e', 'r', 'r', 'o', 'r', '_', 's', 't', 'a', 't', 'e', 
'\030', '\010', ' ', '\001', '(', '\013', '2', '\"', '.', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'd', 'm', 'i', 'n', '.', 'v', '3', '.', 'U', 
'p', 'd', 'a', 't', 'e', 'F', 'a', 'i', 'l', 'u', 'r', 'e', 'S', 't', 'a', 't', 'e', 'R', '\n', 'e', 'r', 'r', 'o', 'r', 'S', 
't', 'a', 't', 'e', '\022', ',', '\n', '\022', 'i', 's', '_', 's', 't', 'a', 't', 'i', 'c', '_', 'r', 'e', 's', 'o', 'u', 'r', 'c', 
'e', '\030', '\t', ' ', '\001', '(', '\010', 'R', '\020', 'i', 's', 'S', 't', 'a', 't', 'i', 'c', 'R', 'e', 's', 'o', 'u', 'r', 'c', 'e', 
':', '+', '\232', '\305', '\210', '\036', '&', '\n', '$', 'e', 'n', 'v', 'o', 'y', '.', 's', 'e', 'r', 'v', 'i', 'c', 'e', '.', 's', 't', 
'a', 't', 'u', 's', '.', 'v', '2', '.', 'C', 'l', 'i', 'e', 'n', 't', 'C', 'o', 'n', 'f', 'i', 'g', '\"', '\212', '\001', '\n', '\024', 
'C', 'l', 'i', 'e', 'n', 't', 'S', 't', 'a', 't', 'u', 's', 'R', 'e', 's', 'p', 'o', 'n', 's', 'e', '\022', '=', '\n', '\006', 'c', 
'o', 'n', 'f', 'i', 'g', '\030', '\001', ' ', '\003', '(', '\013', '2', '%', '.', 'e', 'n', 'v', 'o', 'y', '.', 's', 'e', 'r', 'v', 'i', 
'c', 'e', '.', 's', 't', 'a', 't', 'u', 's', '.', 'v', '3', '.', 'C', 'l', 'i', 'e', 'n', 't', 'C', 'o', 'n', 'f', 'i', 'g', 
'R', '\006', 'c', 'o', 'n', 'f', 'i', 'g', ':', '3', '\232', '\305', '\210', '\036', '.', '\n', ',', 'e', 'n', 'v', 'o', 'y', '.', 's', 'e', 
'r', 'v', 'i', 'c', 'e', '.', 's', 't', 'a', 't', 'u', 's', '.', 'v', '2', '.', 'C', 'l', 'i', 'e', 'n', 't', 'S', 't', 'a', 
't', 'u', 's', 'R', 'e', 's', 'p', 'o', 'n', 's', 'e', '*', 'K', '\n', '\014', 'C', 'o', 'n', 'f', 'i', 'g', 'S', 't', 'a', 't', 
'u', 's', '\022', '\013', '\n', '\007', 'U', 'N', 'K', 'N', 'O', 'W', 'N', '\020', '\000', '\022', '\n', '\n', '\006', 'S', 'Y', 'N', 'C', 'E', 'D', 
'\020', '\001', '\022', '\014', '\n', '\010', 'N', 'O', 'T', '_', 'S', 'E', 'N', 'T', '\020', '\002', '\022', '\t', '\n', '\005', 'S', 'T', 'A', 'L', 'E', 
'\020', '\003', '\022', '\t', '\n', '\005', 'E', 'R', 'R', 'O', 'R', '\020', '\004', '*', 'c', '\n', '\022', 'C', 'l', 'i', 'e', 'n', 't', 'C', 'o', 
'n', 'f', 'i', 'g', 'S', 't', 'a', 't', 'u', 's', '\022', '\022', '\n', '\016', 'C', 'L', 'I', 'E', 'N', 'T', '_', 'U', 'N', 'K', 'N', 
'O', 'W', 'N', '\020', '\000', '\022', '\024', '\n', '\020', 'C', 'L', 'I', 'E', 'N', 'T', '_', 'R', 'E', 'Q', 'U', 'E', 'S', 'T', 'E', 'D', 
'\020', '\001', '\022', '\020', '\n', '\014', 'C', 'L', 'I', 'E', 'N', 'T', '_', 'A', 'C', 'K', 'E', 'D', '\020', '\002', '\022', '\021', '\n', '\r', 'C', 
'L', 'I', 'E', 'N', 'T', '_', 'N', 'A', 'C', 'K', 'E', 'D', '\020', '\003', '2', '\270', '\002', '\n', '\034', 'C', 'l', 'i', 'e', 'n', 't', 
'S', 't', 'a', 't', 'u', 's', 'D', 'i', 's', 'c', 'o', 'v', 'e', 'r', 'y', 'S', 'e', 'r', 'v', 'i', 'c', 'e', '\022', 'w', '\n', 
'\022', 'S', 't', 'r', 'e', 'a', 'm', 'C', 'l', 'i', 'e', 'n', 't', 'S', 't', 'a', 't', 'u', 's', '\022', ',', '.', 'e', 'n', 'v', 
'o', 'y', '.', 's', 'e', 'r', 'v', 'i', 'c', 'e', '.', 's', 't', 'a', 't', 'u', 's', '.', 'v', '3', '.', 'C', 'l', 'i', 'e', 
'n', 't', 'S', 't', 'a', 't', 'u', 's', 'R', 'e', 'q', 'u', 'e', 's', 't', '\032', '-', '.', 'e', 'n', 'v', 'o', 'y', '.', 's', 
'e', 'r', 'v', 'i', 'c', 'e', '.', 's', 't', 'a', 't', 'u', 's', '.', 'v', '3', '.', 'C', 'l', 'i', 'e', 'n', 't', 'S', 't', 
'a', 't', 'u', 's', 'R', 'e', 's', 'p', 'o', 'n', 's', 'e', '\"', '\000', '(', '\001', '0', '\001', '\022', '\236', '\001', '\n', '\021', 'F', 'e', 
't', 'c', 'h', 'C', 'l', 'i', 'e', 'n', 't', 'S', 't', 'a', 't', 'u', 's', '\022', ',', '.', 'e', 'n', 'v', 'o', 'y', '.', 's', 
'e', 'r', 'v', 'i', 'c', 'e', '.', 's', 't', 'a', 't', 'u', 's', '.', 'v', '3', '.', 'C', 'l', 'i', 'e', 'n', 't', 'S', 't', 
'a', 't', 'u', 's', 'R', 'e', 'q', 'u', 'e', 's', 't', '\032', '-', '.', 'e', 'n', 'v', 'o', 'y', '.', 's', 'e', 'r', 'v', 'i', 
'c', 'e', '.', 's', 't', 'a', 't', 'u', 's', '.', 'v', '3', '.', 'C', 'l', 'i', 'e', 'n', 't', 'S', 't', 'a', 't', 'u', 's', 
'R', 'e', 's', 'p', 'o', 'n', 's', 'e', '\"', ',', '\202', '\323', '\344', '\223', '\002', '\035', '\"', '\033', '/', 'v', '3', '/', 'd', 'i', 's', 
'c', 'o', 'v', 'e', 'r', 'y', ':', 'c', 'l', 'i', 'e', 'n', 't', '_', 's', 't', 'a', 't', 'u', 's', '\202', '\323', '\344', '\223', '\002', 
'\003', ':', '\001', '*', 'B', '\210', '\001', '\n', '%', 'i', 'o', '.', 'e', 'n', 'v', 'o', 'y', 'p', 'r', 'o', 'x', 'y', '.', 'e', 'n', 
'v', 'o', 'y', '.', 's', 'e', 'r', 'v', 'i', 'c', 'e', '.', 's', 't', 'a', 't', 'u', 's', '.', 'v', '3', 'B', '\t', 'C', 's', 
'd', 's', 'P', 'r', 'o', 't', 'o', 'P', '\001', 'Z', 'G', 'g', 'i', 't', 'h', 'u', 'b', '.', 'c', 'o', 'm', '/', 'e', 'n', 'v', 
'o', 'y', 'p', 'r', 'o', 'x', 'y', '/', 'g', 'o', '-', 'c', 'o', 'n', 't', 'r', 'o', 'l', '-', 'p', 'l', 'a', 'n', 'e', '/', 
'e', 'n', 'v', 'o', 'y', '/', 's', 'e', 'r', 'v', 'i', 'c', 'e', '/', 's', 't', 'a', 't', 'u', 's', '/', 'v', '3', ';', 's', 
't', 'a', 't', 'u', 's', 'v', '3', '\210', '\001', '\001', '\272', '\200', '\310', '\321', '\006', '\002', '\020', '\002', 'b', '\006', 'p', 'r', 'o', 't', 'o', 
'3', 
};

static upb_def_init *deps[10] = {
  &envoy_admin_v3_config_dump_proto_upbdefinit,
  &envoy_config_core_v3_base_proto_upbdefinit,
  &envoy_type_matcher_v3_node_proto_upbdefinit,
  &google_api_annotations_proto_upbdefinit,
  &google_protobuf_any_proto_upbdefinit,
  &google_protobuf_timestamp_proto_upbdefinit,
  &envoy_annotations_deprecation_proto_upbdefinit,
  &udpa_annotations_status_proto_upbdefinit,
  &udpa_annotations_versioning_proto_upbdefinit,
  NULL
};

upb_def_init envoy_service_status_v3_csds_proto_upbdefinit = {
  deps,
  &envoy_service_status_v3_csds_proto_upb_file_layout,
  "envoy/service/status/v3/csds.proto",
  UPB_STRVIEW_INIT(descriptor, 2751)
};
