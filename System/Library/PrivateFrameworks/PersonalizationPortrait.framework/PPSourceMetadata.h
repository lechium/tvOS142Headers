/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:46 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <ProactiveSupport/_PASZonedObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet;

@interface PPSourceMetadata : _PASZonedObject <NSCopying, NSSecureCoding, MLFeatureProvider> {

	unsigned char _flags;
	unsigned short _donationCount;
	unsigned short _contactHandleCount;
	unsigned _dwellTimeSeconds;
	unsigned _lengthSeconds;
	unsigned _lengthCharacters;

}

@property (nonatomic,readonly) unsigned dwellTimeSeconds;                      //@synthesize dwellTimeSeconds=_dwellTimeSeconds - In the implementation block
@property (nonatomic,readonly) unsigned lengthSeconds;                         //@synthesize lengthSeconds=_lengthSeconds - In the implementation block
@property (nonatomic,readonly) unsigned lengthCharacters;                      //@synthesize lengthCharacters=_lengthCharacters - In the implementation block
@property (nonatomic,readonly) unsigned short donationCount;                   //@synthesize donationCount=_donationCount - In the implementation block
@property (nonatomic,readonly) unsigned short contactHandleCount;              //@synthesize contactHandleCount=_contactHandleCount - In the implementation block
@property (nonatomic,readonly) unsigned char flags;                            //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(unsigned char)flags;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFlags:(unsigned char)arg1 ;
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)initWithDwellTimeSeconds:(unsigned)arg1 lengthSeconds:(unsigned)arg2 lengthCharacters:(unsigned)arg3 donationCount:(unsigned short)arg4 contactHandleCount:(unsigned short)arg5 flags:(unsigned char)arg6 ;
-(BOOL)isEqualToSourceMetadata:(id)arg1 ;
-(unsigned)dwellTimeSeconds;
-(unsigned)lengthSeconds;
-(unsigned)lengthCharacters;
-(unsigned short)donationCount;
-(unsigned short)contactHandleCount;
@end

