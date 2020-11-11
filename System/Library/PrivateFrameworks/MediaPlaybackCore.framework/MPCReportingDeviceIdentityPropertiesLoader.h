/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:58 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MPCReportingIdentityPropertiesLoading.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface MPCReportingDeviceIdentityPropertiesLoader : NSObject <MPCReportingIdentityPropertiesLoading> {

	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSObject*<OS_dispatch_queue> _serialWorkQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedLoader;
-(id)init;
-(void)loadReportingIdentityPropertiesWithCompletionHandler:(/*^block*/id)arg1 ;
@end

