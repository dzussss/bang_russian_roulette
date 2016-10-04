// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageResponseNoMoney.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MessageResponseNoMoney.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

void protobuf_ShutdownFile_MessageResponseNoMoney_2eproto() {
  delete MessageResponseNoMoney::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_MessageResponseNoMoney_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_MessageResponseNoMoney_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  MessageResponseNoMoney::default_instance_ = new MessageResponseNoMoney();
  MessageResponseNoMoney::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MessageResponseNoMoney_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_MessageResponseNoMoney_2eproto_once_);
void protobuf_AddDesc_MessageResponseNoMoney_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_MessageResponseNoMoney_2eproto_once_,
                 &protobuf_AddDesc_MessageResponseNoMoney_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MessageResponseNoMoney_2eproto {
  StaticDescriptorInitializer_MessageResponseNoMoney_2eproto() {
    protobuf_AddDesc_MessageResponseNoMoney_2eproto();
  }
} static_descriptor_initializer_MessageResponseNoMoney_2eproto_;
#endif

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

static ::std::string* MutableUnknownFieldsForMessageResponseNoMoney(
    MessageResponseNoMoney* ptr) {
  return ptr->mutable_unknown_fields();
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MessageResponseNoMoney::kAmountFieldNumber;
const int MessageResponseNoMoney::kNeedFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MessageResponseNoMoney::MessageResponseNoMoney()
  : ::google::protobuf::MessageLite(), _arena_ptr_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:MessageResponseNoMoney)
}

void MessageResponseNoMoney::InitAsDefaultInstance() {
}

MessageResponseNoMoney::MessageResponseNoMoney(const MessageResponseNoMoney& from)
  : ::google::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:MessageResponseNoMoney)
}

void MessageResponseNoMoney::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  _unknown_fields_.UnsafeSetDefault(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  amount_ = GOOGLE_LONGLONG(0);
  need_ = GOOGLE_LONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MessageResponseNoMoney::~MessageResponseNoMoney() {
  // @@protoc_insertion_point(destructor:MessageResponseNoMoney)
  SharedDtor();
}

void MessageResponseNoMoney::SharedDtor() {
  _unknown_fields_.DestroyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void MessageResponseNoMoney::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const MessageResponseNoMoney& MessageResponseNoMoney::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_MessageResponseNoMoney_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_MessageResponseNoMoney_2eproto();
#endif
  return *default_instance_;
}

MessageResponseNoMoney* MessageResponseNoMoney::default_instance_ = NULL;

MessageResponseNoMoney* MessageResponseNoMoney::New(::google::protobuf::Arena* arena) const {
  MessageResponseNoMoney* n = new MessageResponseNoMoney;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void MessageResponseNoMoney::Clear() {
// @@protoc_insertion_point(message_clear_start:MessageResponseNoMoney)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(MessageResponseNoMoney, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<MessageResponseNoMoney*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(amount_, need_);

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  _unknown_fields_.ClearToEmptyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool MessageResponseNoMoney::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::internal::NewPermanentCallback(
          &MutableUnknownFieldsForMessageResponseNoMoney, this));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:MessageResponseNoMoney)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int64 amount = 1 [default = 0];
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &amount_)));
          set_has_amount();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_need;
        break;
      }

      // required int64 need = 2 [default = 0];
      case 2: {
        if (tag == 16) {
         parse_need:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &need_)));
          set_has_need();
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
  // @@protoc_insertion_point(parse_success:MessageResponseNoMoney)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:MessageResponseNoMoney)
  return false;
#undef DO_
}

void MessageResponseNoMoney::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:MessageResponseNoMoney)
  // required int64 amount = 1 [default = 0];
  if (has_amount()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->amount(), output);
  }

  // required int64 need = 2 [default = 0];
  if (has_need()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->need(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:MessageResponseNoMoney)
}

int MessageResponseNoMoney::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:MessageResponseNoMoney)
  int total_size = 0;

  if (has_amount()) {
    // required int64 amount = 1 [default = 0];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->amount());
  }

  if (has_need()) {
    // required int64 need = 2 [default = 0];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->need());
  }

  return total_size;
}
int MessageResponseNoMoney::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:MessageResponseNoMoney)
  int total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required int64 amount = 1 [default = 0];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->amount());

    // required int64 need = 2 [default = 0];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->need());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  total_size += unknown_fields().size();

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MessageResponseNoMoney::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const MessageResponseNoMoney*>(&from));
}

void MessageResponseNoMoney::MergeFrom(const MessageResponseNoMoney& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:MessageResponseNoMoney)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_amount()) {
      set_amount(from.amount());
    }
    if (from.has_need()) {
      set_need(from.need());
    }
  }
  if (!from.unknown_fields().empty()) {
    mutable_unknown_fields()->append(from.unknown_fields());
  }
}

void MessageResponseNoMoney::CopyFrom(const MessageResponseNoMoney& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:MessageResponseNoMoney)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MessageResponseNoMoney::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void MessageResponseNoMoney::Swap(MessageResponseNoMoney* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MessageResponseNoMoney::InternalSwap(MessageResponseNoMoney* other) {
  std::swap(amount_, other->amount_);
  std::swap(need_, other->need_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string MessageResponseNoMoney::GetTypeName() const {
  return "MessageResponseNoMoney";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// MessageResponseNoMoney

// required int64 amount = 1 [default = 0];
bool MessageResponseNoMoney::has_amount() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void MessageResponseNoMoney::set_has_amount() {
  _has_bits_[0] |= 0x00000001u;
}
void MessageResponseNoMoney::clear_has_amount() {
  _has_bits_[0] &= ~0x00000001u;
}
void MessageResponseNoMoney::clear_amount() {
  amount_ = GOOGLE_LONGLONG(0);
  clear_has_amount();
}
 ::google::protobuf::int64 MessageResponseNoMoney::amount() const {
  // @@protoc_insertion_point(field_get:MessageResponseNoMoney.amount)
  return amount_;
}
 void MessageResponseNoMoney::set_amount(::google::protobuf::int64 value) {
  set_has_amount();
  amount_ = value;
  // @@protoc_insertion_point(field_set:MessageResponseNoMoney.amount)
}

// required int64 need = 2 [default = 0];
bool MessageResponseNoMoney::has_need() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void MessageResponseNoMoney::set_has_need() {
  _has_bits_[0] |= 0x00000002u;
}
void MessageResponseNoMoney::clear_has_need() {
  _has_bits_[0] &= ~0x00000002u;
}
void MessageResponseNoMoney::clear_need() {
  need_ = GOOGLE_LONGLONG(0);
  clear_has_need();
}
 ::google::protobuf::int64 MessageResponseNoMoney::need() const {
  // @@protoc_insertion_point(field_get:MessageResponseNoMoney.need)
  return need_;
}
 void MessageResponseNoMoney::set_need(::google::protobuf::int64 value) {
  set_has_need();
  need_ = value;
  // @@protoc_insertion_point(field_set:MessageResponseNoMoney.need)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)