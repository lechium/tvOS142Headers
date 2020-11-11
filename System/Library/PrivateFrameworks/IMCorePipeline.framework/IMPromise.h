/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:33 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/IMCorePipeline.framework/IMCorePipeline
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class IMResult, NSMutableArray;

@interface IMPromise : NSObject {

	IMResult* _result;
	NSMutableArray* _completionBlocks;

}
+(id)all:(id)arg1 ;
-(void)failWithError:(id)arg1 ;
-(BOOL)completed;
-(id)initWithError:(id)arg1 ;
-(id)then:(/*^block*/id)arg1 ;
-(id)initWithValue:(id)arg1 ;
-(void)fullfillWithValue:(id)arg1 ;
-(void)registerCompletionBlock:(/*^block*/id)arg1 ;
@end

