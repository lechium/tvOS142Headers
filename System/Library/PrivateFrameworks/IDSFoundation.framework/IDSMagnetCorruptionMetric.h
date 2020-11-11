/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CUTCoreAnalyticsMetric.h>

@class NSDictionary, NSString;

@interface IDSMagnetCorruptionMetric : NSObject <CUTCoreAnalyticsMetric> {

	unsigned long long _correctFramesSinceLastCorruption;
	unsigned long long _correctRawBytesSinceLastCorruption;
	unsigned long long _discardedRawBytes;
	unsigned long long _recoveryTimeInMs;
	unsigned long long _linkType;

}

@property (nonatomic,readonly) unsigned long long correctFramesSinceLastCorruption;                //@synthesize correctFramesSinceLastCorruption=_correctFramesSinceLastCorruption - In the implementation block
@property (nonatomic,readonly) unsigned long long correctRawBytesSinceLastCorruption;              //@synthesize correctRawBytesSinceLastCorruption=_correctRawBytesSinceLastCorruption - In the implementation block
@property (nonatomic,readonly) unsigned long long discardedRawBytes;                               //@synthesize discardedRawBytes=_discardedRawBytes - In the implementation block
@property (nonatomic,readonly) unsigned long long recoveryTimeInMs;                                //@synthesize recoveryTimeInMs=_recoveryTimeInMs - In the implementation block
@property (nonatomic,readonly) unsigned long long linkType;                                        //@synthesize linkType=_linkType - In the implementation block
@property (readonly) NSDictionary * dictionaryRepresentation; 
@property (readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(NSDictionary *)dictionaryRepresentation;
-(unsigned long long)linkType;
-(unsigned long long)discardedRawBytes;
-(unsigned long long)correctRawBytesSinceLastCorruption;
-(unsigned long long)correctFramesSinceLastCorruption;
-(unsigned long long)recoveryTimeInMs;
-(id)initWithCorrectFramesSinceLastCorruption:(unsigned long long)arg1 correctRawBytesSinceLastCorruption:(unsigned long long)arg2 discardedRawBytes:(unsigned long long)arg3 recoveryTimeInMs:(unsigned long long)arg4 linkType:(unsigned long long)arg5 ;
@end

