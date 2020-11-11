/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriVOX/SiriVOX-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, SVXAudioStreamBasicDescription;

@interface SVXSpeechSynthesisAudio : NSObject <NSCopying, NSSecureCoding> {

	NSData* _data;
	SVXAudioStreamBasicDescription* _decoderASBD;
	SVXAudioStreamBasicDescription* _playerASBD;

}

@property (nonatomic,copy,readonly) NSData * data;                                             //@synthesize data=_data - In the implementation block
@property (nonatomic,copy,readonly) SVXAudioStreamBasicDescription * decoderASBD;              //@synthesize decoderASBD=_decoderASBD - In the implementation block
@property (nonatomic,copy,readonly) SVXAudioStreamBasicDescription * playerASBD;               //@synthesize playerASBD=_playerASBD - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSData *)data;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(SVXAudioStreamBasicDescription *)decoderASBD;
-(SVXAudioStreamBasicDescription *)playerASBD;
-(id)initWithData:(id)arg1 decoderASBD:(id)arg2 playerASBD:(id)arg3 ;
@end
