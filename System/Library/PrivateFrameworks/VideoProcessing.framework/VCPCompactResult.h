/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:14 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPCompactResult : NSObject {

	float _score;
	SCD_Struct_VC17 _timerange;

}

@property (assign) SCD_Struct_VC17 timerange;              //@synthesize timerange=_timerange - In the implementation block
@property (assign) float score;                            //@synthesize score=_score - In the implementation block
-(float)score;
-(void)setScore:(float)arg1 ;
-(SCD_Struct_VC17)timerange;
-(void)setTimerange:(SCD_Struct_VC17)arg1 ;
-(id)initWithTimerange:(SCD_Struct_VC17)arg1 andScore:(float)arg2 ;
@end

