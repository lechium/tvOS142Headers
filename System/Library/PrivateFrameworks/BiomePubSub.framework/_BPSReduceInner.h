/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:57 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BiomePubSub/BPSReduceProducer.h>

@interface _BPSReduceInner : BPSReduceProducer {

	/*^block*/id _reduce;

}

@property (nonatomic,readonly) id reduce;              //@synthesize reduce=_reduce - In the implementation block
-(id)receiveNewValue:(id)arg1 ;
-(id)initWithDownstream:(id)arg1 initial:(id)arg2 reduce:(/*^block*/id)arg3 ;
-(id)reduce;
@end

