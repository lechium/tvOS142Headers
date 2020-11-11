/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:29 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSCondition;

@interface AVEventWaiter : NSObject {

	NSCondition* _condition;
	BOOL _eventCompleted;

}
-(id)init;
-(void)dealloc;
-(void)markEventAsCompleted;
-(void)waitUntilEventIsCompleted;
@end
