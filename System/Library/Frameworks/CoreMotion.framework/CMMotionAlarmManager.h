/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:04 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CMMotionAlarmDelegateProtocol;
@class NSString;

@interface CMMotionAlarmManager : NSObject {

	id<CMMotionAlarmDelegateProtocol> _delegate;
	NSString* _name;

}

@property (assign,nonatomic) id<CMMotionAlarmDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * name;                                       //@synthesize name=_name - In the implementation block
+(id)defaultManager;
-(NSString *)name;
-(id)init;
-(void)dealloc;
-(id<CMMotionAlarmDelegateProtocol>)delegate;
-(void)setDelegate:(id<CMMotionAlarmDelegateProtocol>)arg1 ;
-(id)initWithName:(id)arg1 ;
-(BOOL)unregisterAlarmWithName:(id)arg1 error:(id*)arg2 ;
-(BOOL)acknowledgeAlarmWithName:(id)arg1 error:(id*)arg2 ;
-(BOOL)registerAlarmWithName:(id)arg1 type:(unsigned)arg2 duration:(unsigned)arg3 repeats:(BOOL)arg4 error:(id*)arg5 ;
-(BOOL)launchRemoteAppWithError:(id*)arg1 ;
-(BOOL)unregisterAlarm:(id)arg1 error:(id*)arg2 ;
-(BOOL)acknowledgeAlarm:(id)arg1 error:(id*)arg2 ;
@end

