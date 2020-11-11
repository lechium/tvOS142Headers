/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:10 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface WFXPCActivityScheduler : NSObject {

	NSString* _activityIdentifier;

}

@property (nonatomic,readonly) NSString * activityIdentifier;              //@synthesize activityIdentifier=_activityIdentifier - In the implementation block
+(id)activatedSchedulerWithActivityIdentifier:(id)arg1 checkInHandler:(/*^block*/id)arg2 runHandler:(/*^block*/id)arg3 ;
+(id)activatedSchedulerWithActivityIdentifier:(id)arg1 runHandler:(/*^block*/id)arg2 ;
-(void)invalidate;
-(NSString *)activityIdentifier;
-(id)initWithActivityIdentifier:(id)arg1 ;
-(void)scheduleWithCheckInHandler:(/*^block*/id)arg1 runHandler:(/*^block*/id)arg2 ;
-(void)scheduleWithRunHandler:(/*^block*/id)arg1 ;
@end

