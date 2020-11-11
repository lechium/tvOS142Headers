/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSValueTransformer.h>

@interface TVPBlockBasedValueTransformer : NSValueTransformer {

	/*^block*/id _transformerBlock;

}

@property (nonatomic,copy) id transformerBlock;              //@synthesize transformerBlock=_transformerBlock - In the implementation block
-(id)init;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(id)transformedValue:(id)arg1 ;
-(id)transformerBlock;
-(void)setTransformerBlock:(id)arg1 ;
@end

