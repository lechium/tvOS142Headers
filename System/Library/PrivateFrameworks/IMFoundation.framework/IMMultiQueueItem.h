/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:12 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface IMMultiQueueItem : NSObject {

	id _block;
	NSString* _GUID;
	NSString* _describer;

}

@property (nonatomic,readonly) id block;                                //@synthesize block=_block - In the implementation block
@property (getter=UID,nonatomic,readonly) NSString * GUID;              //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,readonly) NSString * describer;                    //@synthesize describer=_describer - In the implementation block
-(id)block;
-(id)initWithBlock:(id)arg1 GUID:(id)arg2 description:(id)arg3 ;
-(NSString *)GUID;
-(NSString *)describer;
@end

