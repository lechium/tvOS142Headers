/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface FMKeyFrame : NSObject {

	float _value;
	long long _sampleTime;

}

@property (assign,nonatomic) long long sampleTime;              //@synthesize sampleTime=_sampleTime - In the implementation block
@property (assign,nonatomic) float value;                       //@synthesize value=_value - In the implementation block
-(id)description;
-(float)value;
-(void)setValue:(float)arg1 ;
-(long long)sampleTime;
-(id)initWithValue:(float)arg1 atTime:(long long)arg2 ;
-(void)setSampleTime:(long long)arg1 ;
@end

