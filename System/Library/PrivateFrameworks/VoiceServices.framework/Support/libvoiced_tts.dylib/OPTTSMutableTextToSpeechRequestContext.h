/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:09 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <libvoiced_tts.dylib/OPTTSTextToSpeechRequestContext.h>

@class NSArray, NSString;

@interface OPTTSMutableTextToSpeechRequestContext : OPTTSTextToSpeechRequestContext

@property (nonatomic,copy) NSArray * context_info; 
@property (nonatomic,copy) NSString * dialog_identifier; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSArray *)context_info;
-(void)setContext_info:(NSArray *)arg1 ;
-(NSString *)dialog_identifier;
-(void)setDialog_identifier:(NSString *)arg1 ;
@end

