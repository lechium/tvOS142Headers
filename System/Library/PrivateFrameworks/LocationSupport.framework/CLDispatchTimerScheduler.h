/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:38 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CLTimerScheduler.h>

@protocol OS_dispatch_source;
@class CLTimer, NSObject;

@interface CLDispatchTimerScheduler : NSObject <CLTimerScheduler> {

	CLTimer* timer;
	NSObject*<OS_dispatch_source> _source;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> source;              //@synthesize source=_source - In the implementation block
@property (assign,nonatomic,__weak) CLTimer * timer; 
-(void)dealloc;
-(NSObject*<OS_dispatch_source>)source;
-(void)setSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setTimer:(CLTimer *)arg1 ;
-(CLTimer *)timer;
-(void)reflectNextFireDelay:(double)arg1 fireInterval:(double)arg2 ;
-(id)initWithDispatchSilo:(id)arg1 ;
@end

