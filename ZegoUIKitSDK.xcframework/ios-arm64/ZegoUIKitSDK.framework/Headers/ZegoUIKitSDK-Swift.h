#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.7.2 (swiftlang-5.7.2.135.5 clang-1400.0.29.51)
#ifndef ZEGOUIKITSDK_SWIFT_H
#define ZEGOUIKITSDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wduplicate-method-match"
#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT noexcept
#endif
#else
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT 
#endif
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_CXX_INT_DEFINED)
#define SWIFT_CXX_INT_DEFINED
namespace swift {
using Int = ptrdiff_t;
using UInt = size_t;
}
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreFoundation;
@import Foundation;
@import ObjectiveC;
@import UIKit;
@import ZegoPluginAdapter;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="ZegoUIKitSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)



@class NSCoder;

SWIFT_CLASS("_TtC12ZegoUIKitSDK26ZegoAcceptInvitationButton")
@interface ZegoAcceptInvitationButton : UIButton
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC12ZegoUIKitSDK23ZegoAudioVideoContainer")
@interface ZegoAudioVideoContainer : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12ZegoUIKitSDK27ZegoAudioVideoContainerView")
@interface ZegoAudioVideoContainerView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (void)layoutSubviews;
@end


SWIFT_CLASS("_TtC12ZegoUIKitSDK18ZegoAudioVideoView")
@interface ZegoAudioVideoView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutSubviews;
@end


SWIFT_CLASS("_TtC12ZegoUIKitSDK24ZegoAudioVideoViewConfig")
@interface ZegoAudioVideoViewConfig : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, ZegoAvatarAlignment, open) {
  ZegoAvatarAlignmentCenter = 0,
  ZegoAvatarAlignmentStart = 1,
  ZegoAvatarAlignmentEnd = 2,
};

@class UIImage;

SWIFT_CLASS("_TtC12ZegoUIKitSDK19ZegoCameraStateIcon")
@interface ZegoCameraStateIcon : UIImageView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithImage:(UIImage * _Nullable)image SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithImage:(UIImage * _Nullable)image highlightedImage:(UIImage * _Nullable)highlightedImage SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC12ZegoUIKitSDK26ZegoCancelInvitationButton")
@interface ZegoCancelInvitationButton : UIButton
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (void)buttonClick;
@end

@class NSString;
@class UINib;

SWIFT_CLASS("_TtC12ZegoUIKitSDK18ZegoInRoomChatView")
@interface ZegoInRoomChatView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (void)layoutSubviews;
- (void)registerCell:(Class _Nullable)cellClass forCellReuseIdentifier:(NSString * _Nonnull)forCellReuseIdentifier;
- (void)registerNibCell:(UINib * _Nullable)nib forCellReuseIdentifier:(NSString * _Nonnull)forCellReuseIdentifier;
@end

@class UITableView;
@class NSIndexPath;
@class ZegoInRoomMessage;
@class UITableViewCell;

SWIFT_PROTOCOL("_TtP12ZegoUIKitSDK26ZegoInRoomChatViewDelegate_")
@protocol ZegoInRoomChatViewDelegate
@optional
- (UITableViewCell * _Nullable)getChatViewItemView:(UITableView * _Nonnull)tableView indexPath:(NSIndexPath * _Nonnull)indexPath message:(ZegoInRoomMessage * _Nonnull)message SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)getChatViewItemHeight:(UITableView * _Nonnull)tableView heightForRowAt:(NSIndexPath * _Nonnull)indexPath message:(ZegoInRoomMessage * _Nonnull)message SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)getChatViewHeaderHeight:(UITableView * _Nonnull)tableView section:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UIView * _Nullable)getChatViewForHeaderInSection:(UITableView * _Nonnull)tableView section:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
@end

@class ZegoUIKitUser;
enum ZegoInRoomMessageState : NSInteger;

SWIFT_CLASS("_TtC12ZegoUIKitSDK17ZegoInRoomMessage")
@interface ZegoInRoomMessage : NSObject
@property (nonatomic, copy) NSString * _Nullable message;
@property (nonatomic) int64_t messageID;
@property (nonatomic) uint64_t sendTime;
@property (nonatomic, strong) ZegoUIKitUser * _Nullable user;
@property (nonatomic) enum ZegoInRoomMessageState state;
- (nonnull instancetype)init:(NSString * _Nonnull)message messageID:(int64_t)messageID sendTime:(uint64_t)sendTime user:(ZegoUIKitUser * _Nonnull)user OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@protocol ZegoInRoomMessageInputDelegate;

SWIFT_CLASS("_TtC12ZegoUIKitSDK22ZegoInRoomMessageInput")
@interface ZegoInRoomMessageInput : UIView
@property (nonatomic, weak) id <ZegoInRoomMessageInputDelegate> _Nullable delegate;
@property (nonatomic, copy) NSString * _Nullable placeHolder;
@property (nonatomic, strong) UIImage * _Nullable iconSend;
@property (nonatomic) BOOL enable;
@property (nonatomic) CGFloat minHeight;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (void)layoutSubviews;
- (void)startEdit;
@end



SWIFT_PROTOCOL("_TtP12ZegoUIKitSDK30ZegoInRoomMessageInputDelegate_")
@protocol ZegoInRoomMessageInputDelegate
- (void)onSubmit;
@end

typedef SWIFT_ENUM(NSInteger, ZegoInRoomMessageState, open) {
  ZegoInRoomMessageStateIdle = 0,
  ZegoInRoomMessageStateSending = 1,
  ZegoInRoomMessageStateSuccess = 2,
  ZegoInRoomMessageStateFailed = 3,
};


SWIFT_CLASS("_TtC12ZegoUIKitSDK21ZegoInRoomMessageView")
@interface ZegoInRoomMessageView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
@property (nonatomic) CGRect frame;
- (void)layoutSubviews;
@end


SWIFT_CLASS("_TtC12ZegoUIKitSDK26ZegoInRoomNotificationView")
@interface ZegoInRoomNotificationView : UIView
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
@property (nonatomic) CGRect frame;
- (void)registerCell:(Class _Nullable)cellClass forCellReuseIdentifier:(NSString * _Nonnull)forCellReuseIdentifier;
- (void)registerNibCell:(UINib * _Nullable)nib forCellReuseIdentifier:(NSString * _Nonnull)forCellReuseIdentifier;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC12ZegoUIKitSDK32ZegoInRoomNotificationViewConfig")
@interface ZegoInRoomNotificationViewConfig : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_PROTOCOL("_TtP12ZegoUIKitSDK34ZegoInRoomNotificationViewDelegate_")
@protocol ZegoInRoomNotificationViewDelegate
@optional
- (UITableViewCell * _Nullable)getJoinCell:(UITableView * _Nonnull)tableView indexPath:(NSIndexPath * _Nonnull)indexPath uiKitUser:(ZegoUIKitUser * _Nonnull)uiKitUser SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nullable)getLeaveCell:(UITableView * _Nonnull)tableView indexPath:(NSIndexPath * _Nonnull)indexPath uiKitUser:(ZegoUIKitUser * _Nonnull)uiKitUser SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nullable)getMessageCell:(UITableView * _Nonnull)tableView indexPath:(NSIndexPath * _Nonnull)indexPath inRoomMessage:(ZegoInRoomMessage * _Nonnull)inRoomMessage SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)getJoinCellHeight:(UITableView * _Nonnull)tableView heightForRowAt:(NSIndexPath * _Nonnull)indexPath uiKitUser:(ZegoUIKitUser * _Nonnull)uiKitUser SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)getLeaveCellHeight:(UITableView * _Nonnull)tableView heightForRowAt:(NSIndexPath * _Nonnull)indexPath uiKitUser:(ZegoUIKitUser * _Nonnull)uiKitUser SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)getMessageCellHeight:(UITableView * _Nonnull)tableView indexPath:(NSIndexPath * _Nonnull)indexPath inRoomMessage:(ZegoInRoomMessage * _Nonnull)inRoomMessage SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC12ZegoUIKitSDK10ZegoLayout")
@interface ZegoLayout : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12ZegoUIKitSDK16ZegoLayoutConfig")
@interface ZegoLayoutConfig : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12ZegoUIKitSDK23ZegoLayoutGalleryConfig")
@interface ZegoLayoutGalleryConfig : ZegoLayoutConfig
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12ZegoUIKitSDK32ZegoLayoutPictureInPictureConfig")
@interface ZegoLayoutPictureInPictureConfig : ZegoLayoutConfig
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12ZegoUIKitSDK15ZegoLeaveButton")
@interface ZegoLeaveButton : UIButton
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12ZegoUIKitSDK26ZegoLeaveConfirmDialogInfo")
@interface ZegoLeaveConfirmDialogInfo : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12ZegoUIKitSDK14ZegoMemberList")
@interface ZegoMemberList : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (void)layoutSubviews;
- (void)registerCell:(Class _Nullable)cellClass forCellReuseIdentifier:(NSString * _Nonnull)forCellReuseIdentifier;
- (void)registerNibCell:(UINib * _Nullable)nib forCellReuseIdentifier:(NSString * _Nonnull)forCellReuseIdentifier;
- (void)reloadData;
@end


SWIFT_PROTOCOL("_TtP12ZegoUIKitSDK22ZegoMemberListDelegate_")
@protocol ZegoMemberListDelegate
@optional
- (UITableViewCell * _Nullable)getMemberListItemView:(UITableView * _Nonnull)tableView indexPath:(NSIndexPath * _Nonnull)indexPath userInfo:(ZegoUIKitUser * _Nonnull)userInfo SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)getMemberListItemHeight:(ZegoUIKitUser * _Nonnull)userInfo SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)getMemberListHeaderHeight:(UITableView * _Nonnull)tableView section:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UIView * _Nullable)getMemberListviewForHeaderInSection:(UITableView * _Nonnull)tableView section:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (NSArray<ZegoUIKitUser *> * _Nonnull)sortUserList:(NSArray<ZegoUIKitUser *> * _Nonnull)userList SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC12ZegoUIKitSDK23ZegoMicrophoneStateIcon")
@interface ZegoMicrophoneStateIcon : UIImageView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithImage:(UIImage * _Nullable)image SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithImage:(UIImage * _Nullable)image highlightedImage:(UIImage * _Nullable)highlightedImage SWIFT_UNAVAILABLE;
@end


SWIFT_PROTOCOL("_TtP12ZegoUIKitSDK21ZegoPluginEventHandle_")
@protocol ZegoPluginEventHandle
@optional
- (void)onPluginEvent:(NSString * _Nonnull)event data:(NSDictionary<NSString *, id> * _Nullable)data;
@end


SWIFT_CLASS("_TtC12ZegoUIKitSDK26ZegoRefuseInvitationButton")
@interface ZegoRefuseInvitationButton : UIButton
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (void)buttonClick;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end

@protocol ZegoStartInvitationButtonDelegate;

SWIFT_CLASS("_TtC12ZegoUIKitSDK25ZegoStartInvitationButton")
@interface ZegoStartInvitationButton : UIButton
@property (nonatomic, strong) UIImage * _Nullable icon;
@property (nonatomic, copy) NSString * _Nullable text;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull invitees;
@property (nonatomic, copy) NSString * _Nullable data;
@property (nonatomic) uint32_t timeout;
@property (nonatomic) NSInteger type;
@property (nonatomic, weak) id <ZegoStartInvitationButtonDelegate> _Nullable delegate;
- (nonnull instancetype)init:(NSInteger)type OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (void)buttonClick;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_PROTOCOL("_TtP12ZegoUIKitSDK33ZegoStartInvitationButtonDelegate_")
@protocol ZegoStartInvitationButtonDelegate
- (void)onStartInvitationButtonClick:(NSDictionary<NSString *, id> * _Nullable)data;
@end


SWIFT_CLASS("_TtC12ZegoUIKitSDK27ZegoSwitchAudioOutputButton")
@interface ZegoSwitchAudioOutputButton : UIButton
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12ZegoUIKitSDK22ZegoSwitchCameraButton")
@interface ZegoSwitchCameraButton : UIButton
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12ZegoUIKitSDK22ZegoToggleCameraButton")
@interface ZegoToggleCameraButton : UIButton
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (void)buttonClickWithSender:(UIButton * _Nonnull)sender;
@end


SWIFT_CLASS("_TtC12ZegoUIKitSDK26ZegoToggleMicrophoneButton")
@interface ZegoToggleMicrophoneButton : UIButton
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12ZegoUIKitSDK9ZegoUIKit")
@interface ZegoUIKit : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end





/// Audio route
typedef SWIFT_ENUM(NSUInteger, ZegoUIKitAudioOutputDevice, open) {
/// Speaker
  ZegoUIKitAudioOutputDeviceSpeaker = 0,
/// Headphone
  ZegoUIKitAudioOutputDeviceHeadphone = 1,
/// Bluetooth device
  ZegoUIKitAudioOutputDeviceBluetooth = 2,
/// Receiver
  ZegoUIKitAudioOutputDeviceEarSpeaker = 3,
/// External USB audio device
  ZegoUIKitAudioOutputDeviceExternalUSB = 4,
/// Apple AirPlay
  ZegoUIKitAudioOutputDeviceAirPlay = 5,
};

enum ZegoUIKitRoomStateChangedReason : NSUInteger;
@class ZegoSignalingInRoomTextMessage;
@class ZegoUserInRoomAttributesInfo;

SWIFT_PROTOCOL("_TtP12ZegoUIKitSDK20ZegoUIKitEventHandle_")
@protocol ZegoUIKitEventHandle
@optional
- (void)onRemoteUserJoin:(NSArray<ZegoUIKitUser *> * _Nonnull)userList;
- (void)onRemoteUserLeave:(NSArray<ZegoUIKitUser *> * _Nonnull)userList;
- (void)onOnlySelfInRoom;
- (void)onUserCountOrPropertyChanged:(NSArray<ZegoUIKitUser *> * _Nullable)userList;
- (void)onRoomStateChanged:(enum ZegoUIKitRoomStateChangedReason)reason errorCode:(int32_t)errorCode extendedData:(NSDictionary * _Nonnull)extendedData roomID:(NSString * _Nonnull)roomID;
- (void)onRoomPropertyUpdated:(NSString * _Nonnull)key oldValue:(NSString * _Nonnull)oldValue newValue:(NSString * _Nonnull)newValue;
- (void)onRoomPropertiesFullUpdated:(NSArray<NSString *> * _Nonnull)updateKeys oldProperties:(NSDictionary<NSString *, NSString *> * _Nonnull)oldProperties properties:(NSDictionary<NSString *, NSString *> * _Nonnull)properties;
- (void)onCameraOn:(ZegoUIKitUser * _Nonnull)user isOn:(BOOL)isOn;
- (void)onMicrophoneOn:(ZegoUIKitUser * _Nonnull)user isOn:(BOOL)isOn;
- (void)onSoundLevelUpdate:(ZegoUIKitUser * _Nonnull)userInfo level:(double)level;
- (void)onAudioVideoAvailable:(NSArray<ZegoUIKitUser *> * _Nonnull)userList;
- (void)onAudioVideoUnavailable:(NSArray<ZegoUIKitUser *> * _Nonnull)userList;
- (void)onAudioOutputDeviceChange:(enum ZegoUIKitAudioOutputDevice)audioRoute;
- (void)onInvitationReceived:(ZegoUIKitUser * _Nonnull)inviter type:(NSInteger)type data:(NSString * _Nullable)data;
- (void)onInvitationTimeout:(ZegoUIKitUser * _Nonnull)inviter data:(NSString * _Nullable)data;
- (void)onInvitationResponseTimeout:(NSArray<ZegoUIKitUser *> * _Nonnull)invitees data:(NSString * _Nullable)data;
- (void)onInvitationAccepted:(ZegoUIKitUser * _Nonnull)invitee data:(NSString * _Nullable)data;
- (void)onInvitationRefused:(ZegoUIKitUser * _Nonnull)invitee data:(NSString * _Nullable)data;
- (void)onInvitationCanceled:(ZegoUIKitUser * _Nonnull)inviter data:(NSString * _Nullable)data;
- (void)onInRoomMessageReceived:(NSArray<ZegoInRoomMessage *> * _Nonnull)messageList;
- (void)onInRoomMessageSendingStateChanged:(ZegoInRoomMessage * _Nonnull)message;
- (void)onSignalingPluginConnectionState:(NSDictionary<NSString *, id> * _Nonnull)params;
- (void)onInRoomCommandReceived:(ZegoUIKitUser * _Nonnull)fromUser command:(NSString * _Nonnull)command;
- (void)onInRoomTextMessageReceived:(NSArray<ZegoSignalingInRoomTextMessage *> * _Nonnull)messages roomID:(NSString * _Nonnull)roomID;
- (void)onUsersInRoomAttributesUpdated:(NSArray<NSString *> * _Nullable)updateKeys oldAttributes:(NSArray<ZegoUserInRoomAttributesInfo *> * _Nullable)oldAttributes attributes:(NSArray<ZegoUserInRoomAttributesInfo *> * _Nullable)attributes editor:(ZegoUIKitUser * _Nullable)editor;
- (void)onRoomMemberLeft:(NSArray<NSString *> * _Nullable)userIDList roomID:(NSString * _Nonnull)roomID;
- (void)onMeRemovedFromRoom;
- (void)onTurnOnYourCameraRequest:(ZegoUIKitUser * _Nonnull)fromUser;
- (void)onTurnOnYourMicrophoneRequest:(ZegoUIKitUser * _Nonnull)fromUser;
@end


SWIFT_CLASS("_TtC12ZegoUIKitSDK13ZegoUIKitRoom")
@interface ZegoUIKitRoom : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSUInteger, ZegoUIKitRoomStateChangedReason, open) {
/// Logging in to the room. When calling [loginRoom] to log in to the room or [switchRoom] to switch to the target room, it will enter this state, indicating that it is requesting to connect to the server. The application interface is usually displayed through this state.
  ZegoUIKitRoomStateChangedReasonLogining = 0,
/// Log in to the room successfully. When the room is successfully logged in or switched, it will enter this state, indicating that the login to the room has been successful, and users can normally receive callback notifications of other users in the room and all stream information additions and deletions.
  ZegoUIKitRoomStateChangedReasonLogined = 1,
/// Failed to log in to the room. When the login or switch room fails, it will enter this state, indicating that the login or switch room has failed, for example, AppID or Token is incorrect, etc.
  ZegoUIKitRoomStateChangedReasonLoginFailed = 2,
/// The room connection is temporarily interrupted. If the interruption occurs due to poor network quality, the SDK will retry internally.
  ZegoUIKitRoomStateChangedReasonReconnecting = 3,
/// The room is successfully reconnected. If there is an interruption due to poor network quality, the SDK will retry internally, and enter this state after successful reconnection.
  ZegoUIKitRoomStateChangedReasonReconnected = 4,
/// The room fails to reconnect. If there is an interruption due to poor network quality, the SDK will retry internally, and enter this state after the reconnection fails.
  ZegoUIKitRoomStateChangedReasonReconnectFailed = 5,
/// Kicked out of the room by the server. For example, if you log in to the room with the same user name in other places, and the local end is kicked out of the room, it will enter this state.
  ZegoUIKitRoomStateChangedReasonKickOut = 6,
/// Logout of the room is successful. It is in this state by default before logging into the room. When calling [logoutRoom] to log out of the room successfully or [switchRoom] to log out of the current room successfully, it will enter this state.
  ZegoUIKitRoomStateChangedReasonLogout = 7,
/// Failed to log out of the room. Enter this state when calling [logoutRoom] fails to log out of the room or [switchRoom] fails to log out of the current room internally.
  ZegoUIKitRoomStateChangedReasonLogoutFailed = 8,
};


SWIFT_CLASS("_TtC12ZegoUIKitSDK28ZegoUIKitSignalingPluginImpl")
@interface ZegoUIKitSignalingPluginImpl : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@interface ZegoUIKitSignalingPluginImpl (SWIFT_EXTENSION(ZegoUIKitSDK)) <ZegoSignalingPluginEventHandler>
- (void)onConnectionStateChanged:(enum ZegoSignalingPluginConnectionState)state;
- (void)onTokenWillExpireIn:(uint32_t)second;
- (void)onCallInvitationReceived:(NSString * _Nonnull)callID inviterID:(NSString * _Nonnull)inviterID data:(NSString * _Nonnull)data;
- (void)onCallInvitationCancelled:(NSString * _Nonnull)callID inviterID:(NSString * _Nonnull)inviterID data:(NSString * _Nonnull)data;
- (void)onCallInvitationAccepted:(NSString * _Nonnull)callID inviteeID:(NSString * _Nonnull)inviteeID data:(NSString * _Nonnull)data;
- (void)onCallInvitationRejected:(NSString * _Nonnull)callID inviteeID:(NSString * _Nonnull)inviteeID data:(NSString * _Nonnull)data;
- (void)onCallInvitationTimeout:(NSString * _Nonnull)callID;
- (void)onCallInviteesAnsweredTimeout:(NSString * _Nonnull)callID invitees:(NSArray<NSString *> * _Nonnull)invitees;
- (void)onUsersInRoomAttributesUpdated:(NSDictionary<NSString *, NSDictionary<NSString *, NSString *> *> * _Nonnull)attributesMap editor:(NSString * _Nonnull)editor roomID:(NSString * _Nonnull)roomID;
- (void)onRoomPropertiesUpdated:(NSArray<NSDictionary<NSString *, NSString *> *> * _Nonnull)setProperties deleteProperties:(NSArray<NSDictionary<NSString *, NSString *> *> * _Nonnull)deleteProperties roomID:(NSString * _Nonnull)roomID;
- (void)onRoomMemberLeft:(NSArray<NSString *> * _Nonnull)userIDList roomID:(NSString * _Nonnull)roomID;
- (void)onRoomMemberJoined:(NSArray<NSString *> * _Nonnull)userIDList roomID:(NSString * _Nonnull)roomID;
- (void)onInRoomTextMessageReceived:(NSArray<ZegoSignalingInRoomTextMessage *> * _Nonnull)messages roomID:(NSString * _Nonnull)roomID;
@end


SWIFT_CLASS("_TtC12ZegoUIKitSDK13ZegoUIKitUser")
@interface ZegoUIKitUser : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC12ZegoUIKitSDK28ZegoUserInRoomAttributesInfo")
@interface ZegoUserInRoomAttributesInfo : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12ZegoUIKitSDK36ZegoUsersInRoomAttributesQueryConfig")
@interface ZegoUsersInRoomAttributesQueryConfig : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
