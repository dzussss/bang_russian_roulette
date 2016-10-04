// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageResponseCheckApi.proto

#ifndef PROTOBUF_MessageResponseCheckApi_2eproto__INCLUDED
#define PROTOBUF_MessageResponseCheckApi_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_util.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_MessageResponseCheckApi_2eproto();
void protobuf_AssignDesc_MessageResponseCheckApi_2eproto();
void protobuf_ShutdownFile_MessageResponseCheckApi_2eproto();

class MessageResponseCheckApi;

enum MessageResponseCheckApi_eCheckApiStatus {
  MessageResponseCheckApi_eCheckApiStatus_casSUCCESS = 1,
  MessageResponseCheckApi_eCheckApiStatus_casFAILED = 2
};
bool MessageResponseCheckApi_eCheckApiStatus_IsValid(int value);
const MessageResponseCheckApi_eCheckApiStatus MessageResponseCheckApi_eCheckApiStatus_eCheckApiStatus_MIN = MessageResponseCheckApi_eCheckApiStatus_casSUCCESS;
const MessageResponseCheckApi_eCheckApiStatus MessageResponseCheckApi_eCheckApiStatus_eCheckApiStatus_MAX = MessageResponseCheckApi_eCheckApiStatus_casFAILED;
const int MessageResponseCheckApi_eCheckApiStatus_eCheckApiStatus_ARRAYSIZE = MessageResponseCheckApi_eCheckApiStatus_eCheckApiStatus_MAX + 1;

// ===================================================================

class MessageResponseCheckApi : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:MessageResponseCheckApi) */ {
 public:
  MessageResponseCheckApi();
  virtual ~MessageResponseCheckApi();

  MessageResponseCheckApi(const MessageResponseCheckApi& from);

  inline MessageResponseCheckApi& operator=(const MessageResponseCheckApi& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_.GetNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  inline ::std::string* mutable_unknown_fields() {
    return _unknown_fields_.MutableNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  static const MessageResponseCheckApi& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const MessageResponseCheckApi* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(MessageResponseCheckApi* other);

  // implements Message ----------------------------------------------

  inline MessageResponseCheckApi* New() const { return New(NULL); }

  MessageResponseCheckApi* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const MessageResponseCheckApi& from);
  void MergeFrom(const MessageResponseCheckApi& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(MessageResponseCheckApi* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _arena_ptr_;
  }
  inline ::google::protobuf::Arena* MaybeArenaPtr() const {
    return _arena_ptr_;
  }
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  typedef MessageResponseCheckApi_eCheckApiStatus eCheckApiStatus;
  static const eCheckApiStatus casSUCCESS =
    MessageResponseCheckApi_eCheckApiStatus_casSUCCESS;
  static const eCheckApiStatus casFAILED =
    MessageResponseCheckApi_eCheckApiStatus_casFAILED;
  static inline bool eCheckApiStatus_IsValid(int value) {
    return MessageResponseCheckApi_eCheckApiStatus_IsValid(value);
  }
  static const eCheckApiStatus eCheckApiStatus_MIN =
    MessageResponseCheckApi_eCheckApiStatus_eCheckApiStatus_MIN;
  static const eCheckApiStatus eCheckApiStatus_MAX =
    MessageResponseCheckApi_eCheckApiStatus_eCheckApiStatus_MAX;
  static const int eCheckApiStatus_ARRAYSIZE =
    MessageResponseCheckApi_eCheckApiStatus_eCheckApiStatus_ARRAYSIZE;

  // accessors -------------------------------------------------------

  // required .MessageResponseCheckApi.eCheckApiStatus status = 1 [default = casFAILED];
  bool has_status() const;
  void clear_status();
  static const int kStatusFieldNumber = 1;
  ::MessageResponseCheckApi_eCheckApiStatus status() const;
  void set_status(::MessageResponseCheckApi_eCheckApiStatus value);

  // @@protoc_insertion_point(class_scope:MessageResponseCheckApi)
 private:
  inline void set_has_status();
  inline void clear_has_status();

  ::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  int status_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_MessageResponseCheckApi_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_MessageResponseCheckApi_2eproto();
  #endif
  friend void protobuf_AssignDesc_MessageResponseCheckApi_2eproto();
  friend void protobuf_ShutdownFile_MessageResponseCheckApi_2eproto();

  void InitAsDefaultInstance();
  static MessageResponseCheckApi* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// MessageResponseCheckApi

// required .MessageResponseCheckApi.eCheckApiStatus status = 1 [default = casFAILED];
inline bool MessageResponseCheckApi::has_status() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MessageResponseCheckApi::set_has_status() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MessageResponseCheckApi::clear_has_status() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MessageResponseCheckApi::clear_status() {
  status_ = 2;
  clear_has_status();
}
inline ::MessageResponseCheckApi_eCheckApiStatus MessageResponseCheckApi::status() const {
  // @@protoc_insertion_point(field_get:MessageResponseCheckApi.status)
  return static_cast< ::MessageResponseCheckApi_eCheckApiStatus >(status_);
}
inline void MessageResponseCheckApi::set_status(::MessageResponseCheckApi_eCheckApiStatus value) {
  assert(::MessageResponseCheckApi_eCheckApiStatus_IsValid(value));
  set_has_status();
  status_ = value;
  // @@protoc_insertion_point(field_set:MessageResponseCheckApi.status)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::MessageResponseCheckApi_eCheckApiStatus> : ::google::protobuf::internal::true_type {};

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_MessageResponseCheckApi_2eproto__INCLUDED