/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:16 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDMediaBrowserDataSource.h>
@class NSString, HMFSystemInfo;


@protocol HMDMediaBrowserDataSource
@property (readonly) NSString * currentAccessoryMediaRouteIdentifier; 
@property (readonly) BOOL isAppleMediaAccessory; 
@property (readonly) BOOL requiresHomePodPairing; 
@property (readonly) HMFSystemInfo * systemInfo; 
@required
-(HMFSystemInfo *)systemInfo;
-(BOOL)isAppleMediaAccessory;
-(BOOL)requiresHomePodPairing;
-(id)createUnassociatedAppleMediaAccessory:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4;
-(id)createUnassociatedHomePodAccessory:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4;
-(NSString *)currentAccessoryMediaRouteIdentifier;

@end


@class NSString, HMFSystemInfo;

@interface HMDMediaBrowserDataSource : HMFObject <HMDMediaBrowserDataSource>

@property (readonly) NSString * currentAccessoryMediaRouteIdentifier; 
@property (readonly) BOOL isAppleMediaAccessory; 
@property (readonly) BOOL requiresHomePodPairing; 
@property (readonly) HMFSystemInfo * systemInfo; 
+(id)shortDescription;
-(HMFSystemInfo *)systemInfo;
-(BOOL)isAppleMediaAccessory;
-(BOOL)requiresHomePodPairing;
-(id)createUnassociatedAppleMediaAccessory:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4 ;
-(id)createUnassociatedHomePodAccessory:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4 ;
-(NSString *)currentAccessoryMediaRouteIdentifier;
@end

