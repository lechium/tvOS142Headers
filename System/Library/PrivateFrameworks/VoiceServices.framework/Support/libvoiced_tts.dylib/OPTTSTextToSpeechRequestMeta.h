/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString;

@interface OPTTSTextToSpeechRequestMeta : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const TextToSpeechRequestMeta* _root;

}

@property (nonatomic,readonly) long long channel_type; 
@property (nonatomic,readonly) NSString * app_id; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)app_id;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(long long)channel_type;
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechRequestMeta*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::TextToSpeechRequestMeta>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechRequestMeta*)arg2 ;
@end

