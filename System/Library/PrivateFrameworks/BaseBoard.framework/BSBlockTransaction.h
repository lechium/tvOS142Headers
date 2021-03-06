/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:56 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BSTransaction.h>

@class NSString;

@interface BSBlockTransaction : BSTransaction {

	/*^block*/id _block;
	NSString* _debugName;

}

@property (nonatomic,copy) NSString * debugName;              //@synthesize debugName=_debugName - In the implementation block
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(id)_descriptionProem;
-(void)_begin;
-(BOOL)_canBeInterrupted;
-(id)_graphNodeDebugName;
-(NSString *)debugName;
-(void)setDebugName:(NSString *)arg1 ;
@end

