/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:53 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTLBuffer;
@interface MPSPredicate : NSObject {

	id<MTLBuffer> _predicateBuffer;
	unsigned long long _predicateOffset;

}

@property (nonatomic,retain,readonly) id<MTLBuffer> predicateBuffer;              //@synthesize predicateBuffer=_predicateBuffer - In the implementation block
@property (nonatomic,readonly) unsigned long long predicateOffset;                //@synthesize predicateOffset=_predicateOffset - In the implementation block
+(id)predicateWithBuffer:(id)arg1 offset:(unsigned long long)arg2 ;
-(id)debugDescription;
-(id)init;
-(void)dealloc;
-(id)initWithDevice:(id)arg1 ;
-(id)debugQuickLookObject;
-(id)initWithBuffer:(id)arg1 offset:(unsigned long long)arg2 ;
-(id<MTLBuffer>)predicateBuffer;
-(unsigned long long)predicateOffset;
@end

