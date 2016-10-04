// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageResponseUsePlayerInventoryItem.proto

#ifndef PROTOBUF_MessageResponseUsePlayerInventoryItem_2eproto__INCLUDED
#define PROTOBUF_MessageResponseUsePlayerInventoryItem_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_MessageResponseUsePlayerInventoryItem_2eproto();
void protobuf_AssignDesc_MessageResponseUsePlayerInventoryItem_2eproto();
void protobuf_ShutdownFile_MessageResponseUsePlayerInventoryItem_2eproto();

class MessageResponseUsePlayerInventoryItem;

// ===================================================================

class MessageResponseUsePlayerInventoryItem : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:MessageResponseUsePlayerInventoryItem) */ {
 public:
  MessageResponseUsePlayerInventoryItem();
  virtual ~MessageResponseUsePlayerInventoryItem();

  MessageResponseUsePlayerInventoryItem(const MessageResponseUsePlayerInventoryItem& from);

  inline MessageResponseUsePlayerInventoryItem& operator=(const MessageResponseUsePlayerInventoryItem& from) {
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

  static const MessageResponseUsePlayerInventoryItem& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const MessageResponseUsePlayerInventoryItem* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(MessageResponseUsePlayerInventoryItem* other);

  // implements Message ----------------------------------------------

  inline MessageResponseUsePlayerInventoryItem* New() const { return New(NULL); }

  MessageResponseUsePlayerInventoryItem* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const MessageResponseUsePlayerInventoryItem& from);
  void MergeFrom(const MessageResponseUsePlayerInventoryItem& from);
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
  void InternalSwap(MessageResponseUsePlayerInventoryItem* other);
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

  // accessors -------------------------------------------------------

  // required int64 roomId = 1 [default = 0];
  bool has_roomid() const;
  void clear_roomid();
  static const int kRoomIdFieldNumber = 1;
  ::google::protobuf::int64 roomid() const;
  void set_roomid(::google::protobuf::int64 value);

  // required int64 playerId = 2 [default = 0];
  bool has_playerid() const;
  void clear_playerid();
  static const int kPlayerIdFieldNumber = 2;
  ::google::protobuf::int64 playerid() const;
  void set_playerid(::google::protobuf::int64 value);

  // required int64 destPlayerId = 3 [default = 0];
  bool has_destplayerid() const;
  void clear_destplayerid();
  static const int kDestPlayerIdFieldNumber = 3;
  ::google::protobuf::int64 destplayerid() const;
  void set_destplayerid(::google::protobuf::int64 value);

  // required string shopItemName = 4 [default = ""];
  bool has_shopitemname() const;
  void clear_shopitemname();
  static const int kShopItemNameFieldNumber = 4;
  const ::std::string& shopitemname() const;
  void set_shopitemname(const ::std::string& value);
  void set_shopitemname(const char* value);
  void set_shopitemname(const char* value, size_t size);
  ::std::string* mutable_shopitemname();
  ::std::string* release_shopitemname();
  void set_allocated_shopitemname(::std::string* shopitemname);

  // @@protoc_insertion_point(class_scope:MessageResponseUsePlayerInventoryItem)
 private:
  inline void set_has_roomid();
  inline void clear_has_roomid();
  inline void set_has_playerid();
  inline void clear_has_playerid();
  inline void set_has_destplayerid();
  inline void clear_has_destplayerid();
  inline void set_has_shopitemname();
  inline void clear_has_shopitemname();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int64 roomid_;
  ::google::protobuf::int64 playerid_;
  ::google::protobuf::int64 destplayerid_;
  ::google::protobuf::internal::ArenaStringPtr shopitemname_;
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_MessageResponseUsePlayerInventoryItem_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_MessageResponseUsePlayerInventoryItem_2eproto();
  #endif
  friend void protobuf_AssignDesc_MessageResponseUsePlayerInventoryItem_2eproto();
  friend void protobuf_ShutdownFile_MessageResponseUsePlayerInventoryItem_2eproto();

  void InitAsDefaultInstance();
  static MessageResponseUsePlayerInventoryItem* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// MessageResponseUsePlayerInventoryItem

// required int64 roomId = 1 [default = 0];
inline bool MessageResponseUsePlayerInventoryItem::has_roomid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MessageResponseUsePlayerInventoryItem::set_has_roomid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MessageResponseUsePlayerInventoryItem::clear_has_roomid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MessageResponseUsePlayerInventoryItem::clear_roomid() {
  roomid_ = GOOGLE_LONGLONG(0);
  clear_has_roomid();
}
inline ::google::protobuf::int64 MessageResponseUsePlayerInventoryItem::roomid() const {
  // @@protoc_insertion_point(field_get:MessageResponseUsePlayerInventoryItem.roomId)
  return roomid_;
}
inline void MessageResponseUsePlayerInventoryItem::set_roomid(::google::protobuf::int64 value) {
  set_has_roomid();
  roomid_ = value;
  // @@protoc_insertion_point(field_set:MessageResponseUsePlayerInventoryItem.roomId)
}

// required int64 playerId = 2 [default = 0];
inline bool MessageResponseUsePlayerInventoryItem::has_playerid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MessageResponseUsePlayerInventoryItem::set_has_playerid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MessageResponseUsePlayerInventoryItem::clear_has_playerid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MessageResponseUsePlayerInventoryItem::clear_playerid() {
  playerid_ = GOOGLE_LONGLONG(0);
  clear_has_playerid();
}
inline ::google::protobuf::int64 MessageResponseUsePlayerInventoryItem::playerid() const {
  // @@protoc_insertion_point(field_get:MessageResponseUsePlayerInventoryItem.playerId)
  return playerid_;
}
inline void MessageResponseUsePlayerInventoryItem::set_playerid(::google::protobuf::int64 value) {
  set_has_playerid();
  playerid_ = value;
  // @@protoc_insertion_point(field_set:MessageResponseUsePlayerInventoryItem.playerId)
}

// required int64 destPlayerId = 3 [default = 0];
inline bool MessageResponseUsePlayerInventoryItem::has_destplayerid() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void MessageResponseUsePlayerInventoryItem::set_has_destplayerid() {
  _has_bits_[0] |= 0x00000004u;
}
inline void MessageResponseUsePlayerInventoryItem::clear_has_destplayerid() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void MessageResponseUsePlayerInventoryItem::clear_destplayerid() {
  destplayerid_ = GOOGLE_LONGLONG(0);
  clear_has_destplayerid();
}
inline ::google::protobuf::int64 MessageResponseUsePlayerInventoryItem::destplayerid() const {
  // @@protoc_insertion_point(field_get:MessageResponseUsePlayerInventoryItem.destPlayerId)
  return destplayerid_;
}
inline void MessageResponseUsePlayerInventoryItem::set_destplayerid(::google::protobuf::int64 value) {
  set_has_destplayerid();
  destplayerid_ = value;
  // @@protoc_insertion_point(field_set:MessageResponseUsePlayerInventoryItem.destPlayerId)
}

// required string shopItemName = 4 [default = ""];
inline bool MessageResponseUsePlayerInventoryItem::has_shopitemname() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void MessageResponseUsePlayerInventoryItem::set_has_shopitemname() {
  _has_bits_[0] |= 0x00000008u;
}
inline void MessageResponseUsePlayerInventoryItem::clear_has_shopitemname() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void MessageResponseUsePlayerInventoryItem::clear_shopitemname() {
  shopitemname_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_shopitemname();
}
inline const ::std::string& MessageResponseUsePlayerInventoryItem::shopitemname() const {
  // @@protoc_insertion_point(field_get:MessageResponseUsePlayerInventoryItem.shopItemName)
  return shopitemname_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MessageResponseUsePlayerInventoryItem::set_shopitemname(const ::std::string& value) {
  set_has_shopitemname();
  shopitemname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:MessageResponseUsePlayerInventoryItem.shopItemName)
}
inline void MessageResponseUsePlayerInventoryItem::set_shopitemname(const char* value) {
  set_has_shopitemname();
  shopitemname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:MessageResponseUsePlayerInventoryItem.shopItemName)
}
inline void MessageResponseUsePlayerInventoryItem::set_shopitemname(const char* value, size_t size) {
  set_has_shopitemname();
  shopitemname_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:MessageResponseUsePlayerInventoryItem.shopItemName)
}
inline ::std::string* MessageResponseUsePlayerInventoryItem::mutable_shopitemname() {
  set_has_shopitemname();
  // @@protoc_insertion_point(field_mutable:MessageResponseUsePlayerInventoryItem.shopItemName)
  return shopitemname_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MessageResponseUsePlayerInventoryItem::release_shopitemname() {
  // @@protoc_insertion_point(field_release:MessageResponseUsePlayerInventoryItem.shopItemName)
  clear_has_shopitemname();
  return shopitemname_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MessageResponseUsePlayerInventoryItem::set_allocated_shopitemname(::std::string* shopitemname) {
  if (shopitemname != NULL) {
    set_has_shopitemname();
  } else {
    clear_has_shopitemname();
  }
  shopitemname_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), shopitemname);
  // @@protoc_insertion_point(field_set_allocated:MessageResponseUsePlayerInventoryItem.shopItemName)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_MessageResponseUsePlayerInventoryItem_2eproto__INCLUDED