/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Memories/Memories-Structs.h>
@interface FlexMLGainValue : NSObject {

	float _gain;
	SCD_Struct_TV3 _segmentTime;

}

@property (nonatomic,readonly) float gain;                              //@synthesize gain=_gain - In the implementation block
@property (nonatomic,readonly) SCD_Struct_TV3 segmentTime;              //@synthesize segmentTime=_segmentTime - In the implementation block
-(long long)compare:(id)arg1 ;
-(float)gain;
-(id)initWithGain:(float)arg1 segmentTime:(SCD_Struct_TV3)arg2 ;
-(SCD_Struct_TV3)segmentTime;
@end

