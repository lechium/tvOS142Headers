/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VCRedundancyControlAlgorithm <NSObject>
@property (nonatomic,readonly) unsigned redundancyPercentage; 
@property (nonatomic,readonly) double redundancyInterval; 
@optional
-(SCD_Struct_VC50*)getFecLevelPerFrameSizeVector;

@required
-(void)updateRedundancyStrategyWithNetworkStatistics:(SCD_Struct_AV33)arg1;
-(unsigned)redundancyPercentage;
-(double)redundancyInterval;

@end

