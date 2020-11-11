/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:09 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <SiriSpeechSynthesis/OPTTSStartTextToSpeechStreamingRequest.h>

@class NSString, NSArray, OPTTSTextToSpeechRequestMeta;

@interface OPTTSMutableStartTextToSpeechStreamingRequest : OPTTSStartTextToSpeechStreamingRequest

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (nonatomic,copy) NSString * stream_id; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSString * gender; 
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) long long audio_type; 
@property (assign,nonatomic) BOOL enable_word_timing_info; 
@property (nonatomic,copy) NSString * voice_name; 
@property (nonatomic,copy) NSArray * context_info; 
@property (assign,nonatomic) long long preferred_voice_type; 
@property (nonatomic,copy) OPTTSTextToSpeechRequestMeta * meta_info; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSString *)gender;
-(void)setGender:(NSString *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(NSString *)stream_id;
-(void)setSpeech_id:(NSString *)arg1 ;
-(void)setStream_id:(NSString *)arg1 ;
-(NSString *)speech_id;
-(NSString *)session_id;
-(OPTTSTextToSpeechRequestMeta *)meta_info;
-(void)setSession_id:(NSString *)arg1 ;
-(void)setAudio_type:(long long)arg1 ;
-(void)setEnable_word_timing_info:(BOOL)arg1 ;
-(void)setVoice_name:(NSString *)arg1 ;
-(void)setMeta_info:(OPTTSTextToSpeechRequestMeta *)arg1 ;
-(long long)audio_type;
-(BOOL)enable_word_timing_info;
-(NSString *)voice_name;
-(NSArray *)context_info;
-(void)setContext_info:(NSArray *)arg1 ;
-(long long)preferred_voice_type;
-(void)setPreferred_voice_type:(long long)arg1 ;
@end

