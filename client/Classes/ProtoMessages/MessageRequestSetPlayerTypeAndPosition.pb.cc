// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageRequestSetPlayerTypeAndPosition.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MessageRequestSetPlayerTypeAndPosition.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

void protobuf_ShutdownFile_MessageRequestSetPlayerTypeAndPosition_2eproto() {
  delete MessageRequestSetPlayerTypeAndPosition::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_MessageRequestSetPlayerTypeAndPosition_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_MessageRequestSetPlayerTypeAndPosition_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  MessageRequestSetPlayerTypeAndPosition::default_instance_ = new MessageRequestSetPlayerTypeAndPosition();
  MessageRequestSetPlayerTypeAndPosition::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MessageRequestSetPlayerTypeAndPosition_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_MessageRequestSetPlayerTypeAndPosition_2eproto_once_);
void protobuf_AddDesc_MessageRequestSetPlayerTypeAndPosition_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_MessageRequestSetPlayerTypeAndPosition_2eproto_once_,
                 &protobuf_AddDesc_MessageRequestSetPlayerTypeAndPosition_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MessageRequestSetPlayerTypeAndPosition_2eproto {
  StaticDescriptorInitializer_MessageRequestSetPlayerTypeAndPosition_2eproto() {
    protobuf_AddDesc_MessageRequestSetPlayerTypeAndPosition_2eproto();
  }
} static_descriptor_initializer_MessageRequestSetPlayerTypeAndPosition_2eproto_;
#endif

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

static ::std::string* MutableUnknownFieldsForMessageRequestSetPlayerTypeAndPosition(
    MessageRequestSetPlayerTypeAndPosition* ptr) {
  return ptr->mutable_unknown_fields();
}

bool MessageRequestSetPlayerTypeAndPosition_ePlayerType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const MessageRequestSetPlayerTypeAndPosition_ePlayerType MessageRequestSetPlayerTypeAndPosition::ptWATCHER;
const MessageRequestSetPlayerTypeAndPosition_ePlayerType MessageRequestSetPlayerTypeAndPosition::ptINVESTOR;
const MessageRequestSetPlayerTypeAndPosition_ePlayerType MessageRequestSetPlayerTypeAndPosition::ptPLAYER;
const MessageRequestSetPlayerTypeAndPosition_ePlayerType MessageRequestSetPlayerTypeAndPosition::ePlayerType_MIN;
const MessageRequestSetPlayerTypeAndPosition_ePlayerType MessageRequestSetPlayerTypeAndPosition::ePlayerType_MAX;
const int MessageRequestSetPlayerTypeAndPosition::ePlayerType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MessageRequestSetPlayerTypeAndPosition::kRoomIdFieldNumber;
const int MessageRequestSetPlayerTypeAndPosition::kPlayerTypeFieldNumber;
const int MessageRequestSetPlayerTypeAndPosition::kPositionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MessageRequestSetPlayerTypeAndPosition::MessageRequestSetPlayerTypeAndPosition()
  : ::google::protobuf::MessageLite(), _arena_ptr_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:MessageRequestSetPlayerTypeAndPosition)
}

void MessageRequestSetPlayerTypeAndPosition::InitAsDefaultInstance() {
}

MessageRequestSetPlayerTypeAndPosition::MessageRequestSetPlayerTypeAndPosition(const MessageRequestSetPlayerTypeAndPosition& from)
  : ::google::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:MessageRequestSetPlayerTypeAndPosition)
}

void MessageRequestSetPlayerTypeAndPosition::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  _unknown_fields_.UnsafeSetDefault(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  roomid_ = GOOGLE_LONGLONG(0);
  playertype_ = 0;
  position_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MessageRequestSetPlayerTypeAndPosition::~MessageRequestSetPlayerTypeAndPosition() {
  // @@protoc_insertion_point(destructor:MessageRequestSetPlayerTypeAndPosition)
  SharedDtor();
}

void MessageRequestSetPlayerTypeAndPosition::SharedDtor() {
  _unknown_fields_.DestroyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void MessageRequestSetPlayerTypeAndPosition::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const MessageRequestSetPlayerTypeAndPosition& MessageRequestSetPlayerTypeAndPosition::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_MessageRequestSetPlayerTypeAndPosition_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_MessageRequestSetPlayerTypeAndPosition_2eproto();
#endif
  return *default_instance_;
}

MessageRequestSetPlayerTypeAndPosition* MessageRequestSetPlayerTypeAndPosition::default_instance_ = NULL;

MessageRequestSetPlayerTypeAndPosition* MessageRequestSetPlayerTypeAndPosition::New(::google::protobuf::Arena* arena) const {
  MessageRequestSetPlayerTypeAndPosition* n = new MessageRequestSetPlayerTypeAndPosition;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void MessageRequestSetPlayerTypeAndPosition::Clear() {
// @@protoc_insertion_point(message_clear_start:MessageRequestSetPlayerTypeAndPosition)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(MessageRequestSetPlayerTypeAndPosition, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<MessageRequestSetPlayerTypeAndPosition*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(roomid_, position_);

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  _unknown_fields_.ClearToEmptyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool MessageRequestSetPlayerTypeAndPosition::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::internal::NewPermanentCallback(
          &MutableUnknownFieldsForMessageRequestSetPlayerTypeAndPosition, this));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:MessageRequestSetPlayerTypeAndPosition)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int64 roomId = 1 [default = 0];
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &roomid_)));
          set_has_roomid();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_playerType;
        break;
      }

      // required .MessageRequestSetPlayerTypeAndPosition.ePlayerType playerType = 2 [default = ptWATCHER];
      case 2: {
        if (tag == 16) {
         parse_playerType:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::MessageRequestSetPlayerTypeAndPosition_ePlayerType_IsValid(value)) {
            set_playertype(static_cast< ::MessageRequestSetPlayerTypeAndPosition_ePlayerType >(value));
          } else {
            unknown_fields_stream.WriteVarint32(16);
            unknown_fields_stream.WriteVarint32(value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_position;
        break;
      }

      // required int32 position = 3 [default = 0];
      case 3: {
        if (tag == 24) {
         parse_position:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &position_)));
          set_has_position();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:MessageRequestSetPlayerTypeAndPosition)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:MessageRequestSetPlayerTypeAndPosition)
  return false;
#undef DO_
}

void MessageRequestSetPlayerTypeAndPosition::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:MessageRequestSetPlayerTypeAndPosition)
  // required int64 roomId = 1 [default = 0];
  if (has_roomid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->roomid(), output);
  }

  // required .MessageRequestSetPlayerTypeAndPosition.ePlayerType playerType = 2 [default = ptWATCHER];
  if (has_playertype()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->playertype(), output);
  }

  // required int32 position = 3 [default = 0];
  if (has_position()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->position(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:MessageRequestSetPlayerTypeAndPosition)
}

int MessageRequestSetPlayerTypeAndPosition::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:MessageRequestSetPlayerTypeAndPosition)
  int total_size = 0;

  if (has_roomid()) {
    // required int64 roomId = 1 [default = 0];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->roomid());
  }

  if (has_playertype()) {
    // required .MessageRequestSetPlayerTypeAndPosition.ePlayerType playerType = 2 [default = ptWATCHER];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->playertype());
  }

  if (has_position()) {
    // required int32 position = 3 [default = 0];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->position());
  }

  return total_size;
}
int MessageRequestSetPlayerTypeAndPosition::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:MessageRequestSetPlayerTypeAndPosition)
  int total_size = 0;

  if (((_has_bits_[0] & 0x00000007) ^ 0x00000007) == 0) {  // All required fields are present.
    // required int64 roomId = 1 [default = 0];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->roomid());

    // required .MessageRequestSetPlayerTypeAndPosition.ePlayerType playerType = 2 [default = ptWATCHER];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->playertype());

    // required int32 position = 3 [default = 0];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->position());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MessageRequestSetPlayerTypeAndPosition::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const MessageRequestSetPlayerTypeAndPosition*>(&from));
}

void MessageRequestSetPlayerTypeAndPosition::MergeFrom(const MessageRequestSetPlayerTypeAndPosition& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:MessageRequestSetPlayerTypeAndPosition)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_roomid()) {
      set_roomid(from.roomid());
    }
    if (from.has_playertype()) {
      set_playertype(from.playertype());
    }
    if (from.has_position()) {
      set_position(from.position());
    }
  }
  if (!from.unknown_fields().empty()) {
    mutable_unknown_fields()->append(from.unknown_fields());
  }
}

void MessageRequestSetPlayerTypeAndPosition::CopyFrom(const MessageRequestSetPlayerTypeAndPosition& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:MessageRequestSetPlayerTypeAndPosition)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MessageRequestSetPlayerTypeAndPosition::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void MessageRequestSetPlayerTypeAndPosition::Swap(MessageRequestSetPlayerTypeAndPosition* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MessageRequestSetPlayerTypeAndPosition::InternalSwap(MessageRequestSetPlayerTypeAndPosition* other) {
  std::swap(roomid_, other->roomid_);
  std::swap(playertype_, other->playertype_);
  std::swap(position_, other->position_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string MessageRequestSetPlayerTypeAndPosition::GetTypeName() const {
  return "MessageRequestSetPlayerTypeAndPosition";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// MessageRequestSetPlayerTypeAndPosition

// required int64 roomId = 1 [default = 0];
bool MessageRequestSetPlayerTypeAndPosition::has_roomid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void MessageRequestSetPlayerTypeAndPosition::set_has_roomid() {
  _has_bits_[0] |= 0x00000001u;
}
void MessageRequestSetPlayerTypeAndPosition::clear_has_roomid() {
  _has_bits_[0] &= ~0x00000001u;
}
void MessageRequestSetPlayerTypeAndPosition::clear_roomid() {
  roomid_ = GOOGLE_LONGLONG(0);
  clear_has_roomid();
}
 ::google::protobuf::int64 MessageRequestSetPlayerTypeAndPosition::roomid() const {
  // @@protoc_insertion_point(field_get:MessageRequestSetPlayerTypeAndPosition.roomId)
  return roomid_;
}
 void MessageRequestSetPlayerTypeAndPosition::set_roomid(::google::protobuf::int64 value) {
  set_has_roomid();
  roomid_ = value;
  // @@protoc_insertion_point(field_set:MessageRequestSetPlayerTypeAndPosition.roomId)
}

// required .MessageRequestSetPlayerTypeAndPosition.ePlayerType playerType = 2 [default = ptWATCHER];
bool MessageRequestSetPlayerTypeAndPosition::has_playertype() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void MessageRequestSetPlayerTypeAndPosition::set_has_playertype() {
  _has_bits_[0] |= 0x00000002u;
}
void MessageRequestSetPlayerTypeAndPosition::clear_has_playertype() {
  _has_bits_[0] &= ~0x00000002u;
}
void MessageRequestSetPlayerTypeAndPosition::clear_playertype() {
  playertype_ = 0;
  clear_has_playertype();
}
 ::MessageRequestSetPlayerTypeAndPosition_ePlayerType MessageRequestSetPlayerTypeAndPosition::playertype() const {
  // @@protoc_insertion_point(field_get:MessageRequestSetPlayerTypeAndPosition.playerType)
  return static_cast< ::MessageRequestSetPlayerTypeAndPosition_ePlayerType >(playertype_);
}
 void MessageRequestSetPlayerTypeAndPosition::set_playertype(::MessageRequestSetPlayerTypeAndPosition_ePlayerType value) {
  assert(::MessageRequestSetPlayerTypeAndPosition_ePlayerType_IsValid(value));
  set_has_playertype();
  playertype_ = value;
  // @@protoc_insertion_point(field_set:MessageRequestSetPlayerTypeAndPosition.playerType)
}

// required int32 position = 3 [default = 0];
bool MessageRequestSetPlayerTypeAndPosition::has_position() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void MessageRequestSetPlayerTypeAndPosition::set_has_position() {
  _has_bits_[0] |= 0x00000004u;
}
void MessageRequestSetPlayerTypeAndPosition::clear_has_position() {
  _has_bits_[0] &= ~0x00000004u;
}
void MessageRequestSetPlayerTypeAndPosition::clear_position() {
  position_ = 0;
  clear_has_position();
}
 ::google::protobuf::int32 MessageRequestSetPlayerTypeAndPosition::position() const {
  // @@protoc_insertion_point(field_get:MessageRequestSetPlayerTypeAndPosition.position)
  return position_;
}
 void MessageRequestSetPlayerTypeAndPosition::set_position(::google::protobuf::int32 value) {
  set_has_position();
  position_ = value;
  // @@protoc_insertion_point(field_set:MessageRequestSetPlayerTypeAndPosition.position)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)