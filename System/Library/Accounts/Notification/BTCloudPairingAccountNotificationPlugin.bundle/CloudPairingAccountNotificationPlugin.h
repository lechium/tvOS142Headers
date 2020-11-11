/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:49 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Accounts/Notification/BTCloudPairingAccountNotificationPlugin.bundle/BTCloudPairingAccountNotificationPlugin
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ACDAccountNotificationPlugin.h>

@protocol OS_xpc_object;
@class NSObject, NSString;

@interface CloudPairingAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin> {

	NSObject*<OS_xpc_object> _cloudKitConnection;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> cloudKitConnection;              //@synthesize cloudKitConnection=_cloudKitConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4 ;
-(void)account:(id)arg1 didPerformActionsForDataclasses:(id)arg2 ;
-(void)accountModified;
-(NSObject*<OS_xpc_object>)cloudKitConnection;
-(void)setCloudKitConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(id)daemonConection;
@end
