/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:11 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface _CDSystemTimeCallbackScheduler : NSObject {

	NSString* _eventNameRoot;

}

@property (nonatomic,copy,readonly) NSString * eventNameRoot;              //@synthesize eventNameRoot=_eventNameRoot - In the implementation block
+(id)sharedInstance;
-(void)scheduleCallbackAtDate:(id)arg1 identifier:(id)arg2 requiringDeviceWake:(BOOL)arg3 ;
-(void)unscheduleCallbackAtDate:(id)arg1 identifier:(id)arg2 requiringDeviceWake:(BOOL)arg3 ;
-(id)initWithEventNameRoot:(id)arg1 ;
-(NSString *)eventNameRoot;
-(void)_handleCallbackAtDate:(id)arg1 ;
@end

