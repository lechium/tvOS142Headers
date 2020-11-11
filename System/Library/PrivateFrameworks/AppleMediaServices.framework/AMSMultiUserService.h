/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:51 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AMSMachService.h>

@class NSString;

@interface AMSMultiUserService : NSObject <AMSMachService>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedConnection;
+(id)serviceInterface;
+(id)machServiceName;
+(id)_createXPCConnection;
+(id)proxyObject;
+(id)proxyObjectAsync;
+(id)sharedConnectionAccessQueue;
+(void)setSharedConnection:(id)arg1 ;
+(BOOL)isConnectionEntitled:(id)arg1 ;
@end

