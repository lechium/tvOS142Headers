/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:16 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMFLogging;
@class NSMutableSet, NSString;

@interface HMDNotificationRegistration : HMFObject <HMFLogging> {

	NSMutableSet* _registeredNotifications;
	id<HMFLogging> _registerer;

}

@property (nonatomic,readonly) NSMutableSet * registeredNotifications;              //@synthesize registeredNotifications=_registeredNotifications - In the implementation block
@property (nonatomic,__weak,readonly) id<HMFLogging> registerer;                    //@synthesize registerer=_registerer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSMutableSet *)registeredNotifications;
-(id)logIdentifier;
-(id)initWithRegisterer:(id)arg1 ;
-(void)addObserver:(SEL)arg1 name:(id)arg2 object:(id)arg3 ;
-(id<HMFLogging>)registerer;
@end

