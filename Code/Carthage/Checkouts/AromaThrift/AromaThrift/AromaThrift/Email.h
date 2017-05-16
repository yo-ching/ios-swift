/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#import <Foundation/Foundation.h>

#import "TProtocol.h"
#import "TApplicationException.h"
#import "TProtocolException.h"
#import "TProtocolUtil.h"
#import "TProcessor.h"
#import "TObjective-C.h"
#import "TBase.h"
#import "TAsyncTransport.h"
#import "TProtocolFactory.h"
#import "TBaseClient.h"

#import "Aroma.h"
#import "Authentication.h"

typedef Aroma_int AromaEmail_int;

typedef Aroma_long AromaEmail_long;

typedef Aroma_timestamp AromaEmail_timestamp;

typedef Aroma_Application * AromaEmail_Application;

typedef Aroma_User * AromaEmail_User;

typedef AromaAuthentication_ApplicationToken * AromaEmail_ApplicationToken;

@interface AromaEmail_EmailNewApplication : NSObject <TBase, NSCoding> {
  AromaEmail_User __creator;
  AromaEmail_Application __app;
  AromaEmail_ApplicationToken __appToken;

  BOOL __creator_isset;
  BOOL __app_isset;
  BOOL __appToken_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=creator, setter=setCreator:) AromaEmail_User creator;
@property (nonatomic, retain, getter=app, setter=setApp:) AromaEmail_Application app;
@property (nonatomic, retain, getter=appToken, setter=setAppToken:) AromaEmail_ApplicationToken appToken;
#endif

- (id) init;
- (id) initWithCreator: (AromaEmail_User) creator app: (AromaEmail_Application) app appToken: (AromaEmail_ApplicationToken) appToken;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (AromaEmail_User) creator;
- (void) setCreator: (AromaEmail_User) creator;
#endif
- (BOOL) creatorIsSet;

#if !__has_feature(objc_arc)
- (AromaEmail_Application) app;
- (void) setApp: (AromaEmail_Application) app;
#endif
- (BOOL) appIsSet;

#if !__has_feature(objc_arc)
- (AromaEmail_ApplicationToken) appToken;
- (void) setAppToken: (AromaEmail_ApplicationToken) appToken;
#endif
- (BOOL) appTokenIsSet;

@end

@interface AromaEmail_EmailNewUserRegistration : NSObject <TBase, NSCoding> {
  AromaEmail_User __infoOfNewUser;

  BOOL __infoOfNewUser_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=infoOfNewUser, setter=setInfoOfNewUser:) AromaEmail_User infoOfNewUser;
#endif

- (id) init;
- (id) initWithInfoOfNewUser: (AromaEmail_User) infoOfNewUser;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (AromaEmail_User) infoOfNewUser;
- (void) setInfoOfNewUser: (AromaEmail_User) infoOfNewUser;
#endif
- (BOOL) infoOfNewUserIsSet;

@end

@interface AromaEmail_EmailMessage : NSObject <TBase, NSCoding> {
  AromaEmail_EmailNewApplication * __newApp;
  AromaEmail_EmailNewUserRegistration * __newUser;

  BOOL __newApp_isset;
  BOOL __newUser_isset;
}

#if TARGET_OS_IPHONE || (MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5)
@property (nonatomic, retain, getter=newApp, setter=setNewApp:) AromaEmail_EmailNewApplication * newApp;
@property (nonatomic, retain, getter=newUser, setter=setNewUser:) AromaEmail_EmailNewUserRegistration * newUser;
#endif

- (id) init;
- (id) initWithNewApp: (AromaEmail_EmailNewApplication *) newApp newUser: (AromaEmail_EmailNewUserRegistration *) newUser;

- (void) read: (id <TProtocol>) inProtocol;
- (void) write: (id <TProtocol>) outProtocol;

- (void) validate;

#if !__has_feature(objc_arc)
- (AromaEmail_EmailNewApplication *) newApp;
- (void) setNewApp: (AromaEmail_EmailNewApplication *) newApp;
#endif
- (BOOL) newAppIsSet;

#if !__has_feature(objc_arc)
- (AromaEmail_EmailNewUserRegistration *) newUser;
- (void) setNewUser: (AromaEmail_EmailNewUserRegistration *) newUser;
#endif
- (BOOL) newUserIsSet;

@end

@interface AromaEmail_EmailConstants : NSObject {
}
@end
