/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:28 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSCondition.h>

@class NSMutableArray;

@interface AVRunLoopCondition : NSCondition {

	NSMutableArray* _runLoopStateList;

}
-(id)init;
-(void)dealloc;
-(void)signal;
-(void)wait;
-(BOOL)waitUntilDate:(id)arg1 ;
-(void)broadcast;
-(BOOL)waitUntilDate:(id)arg1 inMode:(id)arg2 ;
-(void)waitInMode:(id)arg1 ;
-(BOOL)_waitInMode:(id)arg1 untilDate:(id)arg2 ;
-(void)_signalRunLoopWithState:(id)arg1 ;
@end

