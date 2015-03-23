// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_RESPONSE_MBTOOL_DAEMON_V2_H_
#define FLATBUFFERS_GENERATED_RESPONSE_MBTOOL_DAEMON_V2_H_

#include "flatbuffers/flatbuffers.h"

namespace mbtool {
namespace daemon {
namespace v2 {
struct GetVersionRequest;
struct GetVersionResponse;
}  // namespace v2
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v2 {
struct Rom;
struct GetRomsListRequest;
struct GetRomsListResponse;
}  // namespace v2
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v2 {
struct GetBuiltinRomIdsRequest;
struct GetBuiltinRomIdsResponse;
}  // namespace v2
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v2 {
struct GetCurrentRomRequest;
struct GetCurrentRomResponse;
}  // namespace v2
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v2 {
struct SwitchRomRequest;
struct SwitchRomResponse;
}  // namespace v2
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v2 {
struct SetKernelRequest;
struct SetKernelResponse;
}  // namespace v2
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v2 {
struct RebootRequest;
struct RebootResponse;
}  // namespace v2
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v2 {
struct OpenRequest;
struct OpenResponse;
}  // namespace v2
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v2 {
struct CopyRequest;
struct CopyResponse;
}  // namespace v2
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v2 {
struct ChmodRequest;
struct ChmodResponse;
}  // namespace v2
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v2 {
struct LokiPatchRequest;
struct LokiPatchResponse;
}  // namespace v2
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v2 {
struct WipeRomRequest;
struct WipeRomResponse;
}  // namespace v2
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v2 {
struct Request;
}  // namespace v2
}  // namespace daemon
}  // namespace mbtool

namespace mbtool {
namespace daemon {
namespace v2 {

struct Response;

enum ResponseType {
  ResponseType_UNSUPPORTED = 0,
  ResponseType_INVALID = 1,
  ResponseType_GET_VERSION = 2,
  ResponseType_GET_ROMS_LIST = 3,
  ResponseType_GET_BUILTIN_ROM_IDS = 4,
  ResponseType_GET_CURRENT_ROM = 5,
  ResponseType_SWITCH_ROM = 6,
  ResponseType_SET_KERNEL = 7,
  ResponseType_REBOOT = 8,
  ResponseType_OPEN = 9,
  ResponseType_COPY = 10,
  ResponseType_CHMOD = 11,
  ResponseType_LOKI_PATCH = 12,
  ResponseType_WIPE_ROM = 13
};

inline const char **EnumNamesResponseType() {
  static const char *names[] = { "UNSUPPORTED", "INVALID", "GET_VERSION", "GET_ROMS_LIST", "GET_BUILTIN_ROM_IDS", "GET_CURRENT_ROM", "SWITCH_ROM", "SET_KERNEL", "REBOOT", "OPEN", "COPY", "CHMOD", "LOKI_PATCH", "WIPE_ROM", nullptr };
  return names;
}

inline const char *EnumNameResponseType(ResponseType e) { return EnumNamesResponseType()[e]; }

struct Response : private flatbuffers::Table {
  ResponseType type() const { return static_cast<ResponseType>(GetField<int16_t>(4, 0)); }
  const mbtool::daemon::v2::GetVersionResponse *get_version_response() const { return GetPointer<const mbtool::daemon::v2::GetVersionResponse *>(6); }
  const mbtool::daemon::v2::GetRomsListResponse *get_roms_list_response() const { return GetPointer<const mbtool::daemon::v2::GetRomsListResponse *>(8); }
  const mbtool::daemon::v2::GetBuiltinRomIdsResponse *get_builtin_rom_ids_response() const { return GetPointer<const mbtool::daemon::v2::GetBuiltinRomIdsResponse *>(10); }
  const mbtool::daemon::v2::GetCurrentRomResponse *get_current_rom_response() const { return GetPointer<const mbtool::daemon::v2::GetCurrentRomResponse *>(12); }
  const mbtool::daemon::v2::SwitchRomResponse *switch_rom_response() const { return GetPointer<const mbtool::daemon::v2::SwitchRomResponse *>(14); }
  const mbtool::daemon::v2::SetKernelResponse *set_kernel_response() const { return GetPointer<const mbtool::daemon::v2::SetKernelResponse *>(16); }
  const mbtool::daemon::v2::RebootResponse *reboot_response() const { return GetPointer<const mbtool::daemon::v2::RebootResponse *>(18); }
  const mbtool::daemon::v2::OpenResponse *open_response() const { return GetPointer<const mbtool::daemon::v2::OpenResponse *>(20); }
  const mbtool::daemon::v2::CopyResponse *copy_response() const { return GetPointer<const mbtool::daemon::v2::CopyResponse *>(22); }
  const mbtool::daemon::v2::ChmodResponse *chmod_response() const { return GetPointer<const mbtool::daemon::v2::ChmodResponse *>(24); }
  const mbtool::daemon::v2::LokiPatchResponse *loki_patch_response() const { return GetPointer<const mbtool::daemon::v2::LokiPatchResponse *>(26); }
  const mbtool::daemon::v2::WipeRomResponse *wipe_rom_response() const { return GetPointer<const mbtool::daemon::v2::WipeRomResponse *>(28); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int16_t>(verifier, 4 /* type */) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 6 /* get_version_response */) &&
           verifier.VerifyTable(get_version_response()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 8 /* get_roms_list_response */) &&
           verifier.VerifyTable(get_roms_list_response()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 10 /* get_builtin_rom_ids_response */) &&
           verifier.VerifyTable(get_builtin_rom_ids_response()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 12 /* get_current_rom_response */) &&
           verifier.VerifyTable(get_current_rom_response()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 14 /* switch_rom_response */) &&
           verifier.VerifyTable(switch_rom_response()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 16 /* set_kernel_response */) &&
           verifier.VerifyTable(set_kernel_response()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 18 /* reboot_response */) &&
           verifier.VerifyTable(reboot_response()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 20 /* open_response */) &&
           verifier.VerifyTable(open_response()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 22 /* copy_response */) &&
           verifier.VerifyTable(copy_response()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 24 /* chmod_response */) &&
           verifier.VerifyTable(chmod_response()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 26 /* loki_patch_response */) &&
           verifier.VerifyTable(loki_patch_response()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 28 /* wipe_rom_response */) &&
           verifier.VerifyTable(wipe_rom_response()) &&
           verifier.EndTable();
  }
};

struct ResponseBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_type(ResponseType type) { fbb_.AddElement<int16_t>(4, static_cast<int16_t>(type), 0); }
  void add_get_version_response(flatbuffers::Offset<mbtool::daemon::v2::GetVersionResponse> get_version_response) { fbb_.AddOffset(6, get_version_response); }
  void add_get_roms_list_response(flatbuffers::Offset<mbtool::daemon::v2::GetRomsListResponse> get_roms_list_response) { fbb_.AddOffset(8, get_roms_list_response); }
  void add_get_builtin_rom_ids_response(flatbuffers::Offset<mbtool::daemon::v2::GetBuiltinRomIdsResponse> get_builtin_rom_ids_response) { fbb_.AddOffset(10, get_builtin_rom_ids_response); }
  void add_get_current_rom_response(flatbuffers::Offset<mbtool::daemon::v2::GetCurrentRomResponse> get_current_rom_response) { fbb_.AddOffset(12, get_current_rom_response); }
  void add_switch_rom_response(flatbuffers::Offset<mbtool::daemon::v2::SwitchRomResponse> switch_rom_response) { fbb_.AddOffset(14, switch_rom_response); }
  void add_set_kernel_response(flatbuffers::Offset<mbtool::daemon::v2::SetKernelResponse> set_kernel_response) { fbb_.AddOffset(16, set_kernel_response); }
  void add_reboot_response(flatbuffers::Offset<mbtool::daemon::v2::RebootResponse> reboot_response) { fbb_.AddOffset(18, reboot_response); }
  void add_open_response(flatbuffers::Offset<mbtool::daemon::v2::OpenResponse> open_response) { fbb_.AddOffset(20, open_response); }
  void add_copy_response(flatbuffers::Offset<mbtool::daemon::v2::CopyResponse> copy_response) { fbb_.AddOffset(22, copy_response); }
  void add_chmod_response(flatbuffers::Offset<mbtool::daemon::v2::ChmodResponse> chmod_response) { fbb_.AddOffset(24, chmod_response); }
  void add_loki_patch_response(flatbuffers::Offset<mbtool::daemon::v2::LokiPatchResponse> loki_patch_response) { fbb_.AddOffset(26, loki_patch_response); }
  void add_wipe_rom_response(flatbuffers::Offset<mbtool::daemon::v2::WipeRomResponse> wipe_rom_response) { fbb_.AddOffset(28, wipe_rom_response); }
  ResponseBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  ResponseBuilder &operator=(const ResponseBuilder &);
  flatbuffers::Offset<Response> Finish() {
    auto o = flatbuffers::Offset<Response>(fbb_.EndTable(start_, 13));
    return o;
  }
};

inline flatbuffers::Offset<Response> CreateResponse(flatbuffers::FlatBufferBuilder &_fbb,
   ResponseType type = ResponseType_UNSUPPORTED,
   flatbuffers::Offset<mbtool::daemon::v2::GetVersionResponse> get_version_response = 0,
   flatbuffers::Offset<mbtool::daemon::v2::GetRomsListResponse> get_roms_list_response = 0,
   flatbuffers::Offset<mbtool::daemon::v2::GetBuiltinRomIdsResponse> get_builtin_rom_ids_response = 0,
   flatbuffers::Offset<mbtool::daemon::v2::GetCurrentRomResponse> get_current_rom_response = 0,
   flatbuffers::Offset<mbtool::daemon::v2::SwitchRomResponse> switch_rom_response = 0,
   flatbuffers::Offset<mbtool::daemon::v2::SetKernelResponse> set_kernel_response = 0,
   flatbuffers::Offset<mbtool::daemon::v2::RebootResponse> reboot_response = 0,
   flatbuffers::Offset<mbtool::daemon::v2::OpenResponse> open_response = 0,
   flatbuffers::Offset<mbtool::daemon::v2::CopyResponse> copy_response = 0,
   flatbuffers::Offset<mbtool::daemon::v2::ChmodResponse> chmod_response = 0,
   flatbuffers::Offset<mbtool::daemon::v2::LokiPatchResponse> loki_patch_response = 0,
   flatbuffers::Offset<mbtool::daemon::v2::WipeRomResponse> wipe_rom_response = 0) {
  ResponseBuilder builder_(_fbb);
  builder_.add_wipe_rom_response(wipe_rom_response);
  builder_.add_loki_patch_response(loki_patch_response);
  builder_.add_chmod_response(chmod_response);
  builder_.add_copy_response(copy_response);
  builder_.add_open_response(open_response);
  builder_.add_reboot_response(reboot_response);
  builder_.add_set_kernel_response(set_kernel_response);
  builder_.add_switch_rom_response(switch_rom_response);
  builder_.add_get_current_rom_response(get_current_rom_response);
  builder_.add_get_builtin_rom_ids_response(get_builtin_rom_ids_response);
  builder_.add_get_roms_list_response(get_roms_list_response);
  builder_.add_get_version_response(get_version_response);
  builder_.add_type(type);
  return builder_.Finish();
}

inline const Response *GetResponse(const void *buf) { return flatbuffers::GetRoot<Response>(buf); }

inline bool VerifyResponseBuffer(flatbuffers::Verifier &verifier) { return verifier.VerifyBuffer<Response>(); }

inline void FinishResponseBuffer(flatbuffers::FlatBufferBuilder &fbb, flatbuffers::Offset<Response> root) { fbb.Finish(root); }

}  // namespace v2
}  // namespace daemon
}  // namespace mbtool

#endif  // FLATBUFFERS_GENERATED_RESPONSE_MBTOOL_DAEMON_V2_H_
