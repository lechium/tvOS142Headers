/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:38 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSExtension, NSObject, LSPlugInKitProxy;

@interface UNSNotificationServiceExtension : NSObject {

	NSExtension* _extension;
	double _serviceTime;
	double _graceTime;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) LSPlugInKitProxy * proxy; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
+(id)_extensionIdentifiersCurrentlyAllowedAccessToNotificationCenter;
+(void)_allowAccessToNotificationCenterForServiceExtensionWithIdentifier:(id)arg1 ;
+(void)_disallowAccessToNotificationCenterForServiceExtensionWithIdentifier:(id)arg1 ;
+(BOOL)isAccessToNotificationCenterAllowedForServiceExtensionWithIdentifier:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(LSPlugInKitProxy *)proxy;
-(id)_initWithExtension:(id)arg1 serviceTime:(double)arg2 graceTime:(double)arg3 ;
-(id)mutateContentForNotificationRequest:(id)arg1 error:(id*)arg2 ;
@end

