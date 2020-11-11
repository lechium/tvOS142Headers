/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSArray;

@interface AVCAudioPowerSpectrum : NSObject <NSSecureCoding> {

	float _minFrequency;
	float _maxFrequency;
	NSMutableArray* _channels;
	long long _sourceType;

}

@property (nonatomic,readonly) NSArray * channels;                //@synthesize channels=_channels - In the implementation block
@property (nonatomic,readonly) float minFrequency;                //@synthesize minFrequency=_minFrequency - In the implementation block
@property (nonatomic,readonly) float maxFrequency;                //@synthesize maxFrequency=_maxFrequency - In the implementation block
@property (nonatomic,readonly) long long sourceType;              //@synthesize sourceType=_sourceType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)sourceType;
-(NSArray *)channels;
-(float)minFrequency;
-(float)maxFrequency;
-(void)checkNumChannels:(unsigned short)arg1 ;
-(void)applyChannelBins:(VCAudioPowerSpectrumEntry*)arg1 binCount:(unsigned)arg2 channelID:(unsigned short)arg3 ;
@end

