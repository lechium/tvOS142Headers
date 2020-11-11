/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:57 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BiomePubSub/BPSPublisher.h>

@class NSArray;

@interface BPSSequence : BPSPublisher {

	NSArray* _sequence;

}

@property (nonatomic,retain) NSArray * sequence;              //@synthesize sequence=_sequence - In the implementation block
-(id)init;
-(void)setSequence:(NSArray *)arg1 ;
-(NSArray *)sequence;
-(void)subscribe:(id)arg1 ;
-(id)initWithSequence:(id)arg1 ;
@end
