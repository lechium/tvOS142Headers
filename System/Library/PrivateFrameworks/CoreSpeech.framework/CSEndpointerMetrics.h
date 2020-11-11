/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSDictionary;

@interface CSEndpointerMetrics : NSObject {

	double _totalAudioRecorded;
	NSArray* _featuresAtEndpoint;
	long long _endpointerType;
	NSDictionary* _serverFeatureLatencyDistribution;
	NSDictionary* _additionalMetrics;

}

@property (assign,nonatomic) double totalAudioRecorded;                                    //@synthesize totalAudioRecorded=_totalAudioRecorded - In the implementation block
@property (nonatomic,retain) NSArray * featuresAtEndpoint;                                 //@synthesize featuresAtEndpoint=_featuresAtEndpoint - In the implementation block
@property (assign,nonatomic) long long endpointerType;                                     //@synthesize endpointerType=_endpointerType - In the implementation block
@property (nonatomic,retain) NSDictionary * serverFeatureLatencyDistribution;              //@synthesize serverFeatureLatencyDistribution=_serverFeatureLatencyDistribution - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalMetrics;                             //@synthesize additionalMetrics=_additionalMetrics - In the implementation block
-(NSDictionary *)additionalMetrics;
-(void)setAdditionalMetrics:(NSDictionary *)arg1 ;
-(NSArray *)featuresAtEndpoint;
-(void)setFeaturesAtEndpoint:(NSArray *)arg1 ;
-(NSDictionary *)serverFeatureLatencyDistribution;
-(void)setServerFeatureLatencyDistribution:(NSDictionary *)arg1 ;
-(double)totalAudioRecorded;
-(void)setTotalAudioRecorded:(double)arg1 ;
-(id)initWithTotalAudioRecorded:(double)arg1 featuresAtEndpoint:(id)arg2 endpointerType:(long long)arg3 serverFeatureLatencyDistribution:(id)arg4 additionalMetrics:(id)arg5 ;
-(long long)endpointerType;
-(void)setEndpointerType:(long long)arg1 ;
@end

