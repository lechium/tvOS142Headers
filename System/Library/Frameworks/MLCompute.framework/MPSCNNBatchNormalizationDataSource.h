/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:57 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MPSCNNBatchNormalizationDataSource <NSObject,NSCopying>
@optional
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1;
-(id)initWithCoder:(id)arg1;
-(float)epsilon;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2;
-(id)updateGammaAndBetaWithCommandBuffer:(id)arg1 batchNormalizationState:(id)arg2;
-(id)updateMeanAndVarianceWithCommandBuffer:(id)arg1 batchNormalizationState:(id)arg2;
-(BOOL)updateGammaAndBetaWithBatchNormalizationState:(id)arg1;
-(BOOL)updateMeanAndVarianceWithBatchNormalizationState:(id)arg1;

@required
-(BOOL)load;
-(id)label;
-(void)purge;
-(float*)gamma;
-(float*)mean;
-(float*)beta;
-(unsigned long long)numberOfFeatureChannels;
-(float*)variance;

@end

