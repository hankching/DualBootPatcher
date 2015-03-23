// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_WIPEROM_MBTOOL_DAEMON_V2_H_
#define FLATBUFFERS_GENERATED_WIPEROM_MBTOOL_DAEMON_V2_H_

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

enum WipeTarget {
  WipeTarget_SYSTEM = 0,
  WipeTarget_CACHE = 1,
  WipeTarget_DATA = 2,
  WipeTarget_DALVIK_CACHE = 3,
  WipeTarget_MULTIBOOT = 4
};

inline const char **EnumNamesWipeTarget() {
  static const char *names[] = { "SYSTEM", "CACHE", "DATA", "DALVIK_CACHE", "MULTIBOOT", nullptr };
  return names;
}

inline const char *EnumNameWipeTarget(WipeTarget e) { return EnumNamesWipeTarget()[e]; }

struct WipeRomRequest : private flatbuffers::Table {
  const flatbuffers::String *rom_id() const { return GetPointer<const flatbuffers::String *>(4); }
  const flatbuffers::Vector<int16_t> *targets() const { return GetPointer<const flatbuffers::Vector<int16_t> *>(6); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 4 /* rom_id */) &&
           verifier.Verify(rom_id()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 6 /* targets */) &&
           verifier.Verify(targets()) &&
           verifier.EndTable();
  }
};

struct WipeRomRequestBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_rom_id(flatbuffers::Offset<flatbuffers::String> rom_id) { fbb_.AddOffset(4, rom_id); }
  void add_targets(flatbuffers::Offset<flatbuffers::Vector<int16_t>> targets) { fbb_.AddOffset(6, targets); }
  WipeRomRequestBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  WipeRomRequestBuilder &operator=(const WipeRomRequestBuilder &);
  flatbuffers::Offset<WipeRomRequest> Finish() {
    auto o = flatbuffers::Offset<WipeRomRequest>(fbb_.EndTable(start_, 2));
    return o;
  }
};

inline flatbuffers::Offset<WipeRomRequest> CreateWipeRomRequest(flatbuffers::FlatBufferBuilder &_fbb,
   flatbuffers::Offset<flatbuffers::String> rom_id = 0,
   flatbuffers::Offset<flatbuffers::Vector<int16_t>> targets = 0) {
  WipeRomRequestBuilder builder_(_fbb);
  builder_.add_targets(targets);
  builder_.add_rom_id(rom_id);
  return builder_.Finish();
}

struct WipeRomResponse : private flatbuffers::Table {
  const flatbuffers::Vector<int16_t> *succeeded() const { return GetPointer<const flatbuffers::Vector<int16_t> *>(4); }
  const flatbuffers::Vector<int16_t> *failed() const { return GetPointer<const flatbuffers::Vector<int16_t> *>(6); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 4 /* succeeded */) &&
           verifier.Verify(succeeded()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 6 /* failed */) &&
           verifier.Verify(failed()) &&
           verifier.EndTable();
  }
};

struct WipeRomResponseBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_succeeded(flatbuffers::Offset<flatbuffers::Vector<int16_t>> succeeded) { fbb_.AddOffset(4, succeeded); }
  void add_failed(flatbuffers::Offset<flatbuffers::Vector<int16_t>> failed) { fbb_.AddOffset(6, failed); }
  WipeRomResponseBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  WipeRomResponseBuilder &operator=(const WipeRomResponseBuilder &);
  flatbuffers::Offset<WipeRomResponse> Finish() {
    auto o = flatbuffers::Offset<WipeRomResponse>(fbb_.EndTable(start_, 2));
    return o;
  }
};

inline flatbuffers::Offset<WipeRomResponse> CreateWipeRomResponse(flatbuffers::FlatBufferBuilder &_fbb,
   flatbuffers::Offset<flatbuffers::Vector<int16_t>> succeeded = 0,
   flatbuffers::Offset<flatbuffers::Vector<int16_t>> failed = 0) {
  WipeRomResponseBuilder builder_(_fbb);
  builder_.add_failed(failed);
  builder_.add_succeeded(succeeded);
  return builder_.Finish();
}

}  // namespace v2
}  // namespace daemon
}  // namespace mbtool

#endif  // FLATBUFFERS_GENERATED_WIPEROM_MBTOOL_DAEMON_V2_H_
