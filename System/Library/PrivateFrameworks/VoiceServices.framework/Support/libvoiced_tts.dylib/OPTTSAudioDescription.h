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

@class NSMutableDictionary, NSData;

@interface OPTTSAudioDescription : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const AudioDescription* _root;

}

@property (nonatomic,readonly) double sample_rate; 
@property (nonatomic,readonly) unsigned format_id; 
@property (nonatomic,readonly) unsigned format_flags; 
@property (nonatomic,readonly) unsigned bytes_per_packet; 
@property (nonatomic,readonly) unsigned frames_per_packet; 
@property (nonatomic,readonly) unsigned bytes_per_frame; 
@property (nonatomic,readonly) unsigned channels_per_frame; 
@property (nonatomic,readonly) unsigned bits_per_channel; 
@property (nonatomic,readonly) unsigned reserved; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)reserved;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(unsigned)format_id;
-(double)sample_rate;
-(unsigned)format_flags;
-(unsigned)bytes_per_packet;
-(unsigned)frames_per_packet;
-(unsigned)bytes_per_frame;
-(unsigned)channels_per_frame;
-(unsigned)bits_per_channel;
-(id)initWithFlatbuffData:(id)arg1 root:(const AudioDescription*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::AudioDescription>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const AudioDescription*)arg2 ;
@end

