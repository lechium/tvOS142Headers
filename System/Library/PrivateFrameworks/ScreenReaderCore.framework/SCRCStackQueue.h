/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _SCRCStackNode;

@interface SCRCStackQueue : NSObject {

	_SCRCStackNode* _firstNode;
	_SCRCStackNode* _lastNode;
	unsigned long long _count;

}
-(id)description;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectEnumerator;
-(void)removeAllObjects;
-(BOOL)isEmpty;
-(void)pushObject:(id)arg1 ;
-(id)popObject;
-(void)enqueueObject:(id)arg1 ;
-(id)dequeueObject;
-(id)popObjectRetained;
-(id)dequeueObjectRetained;
-(void)pushArray:(id)arg1 ;
-(id)topObject;
@end
