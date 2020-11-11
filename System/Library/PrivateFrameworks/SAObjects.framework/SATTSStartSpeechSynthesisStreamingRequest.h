/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:51 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAStartRequest.h>

@class NSString, NSDictionary;

@interface SATTSStartSpeechSynthesisStreamingRequest : SAStartRequest

@property (nonatomic,copy) NSString * audioType; 
@property (nonatomic,copy) NSString * gender; 
@property (nonatomic,copy) NSString * languageCode; 
@property (nonatomic,copy) NSString * quality; 
@property (assign,nonatomic) BOOL requiresWordTimingInfo; 
@property (nonatomic,copy) NSDictionary * speakableContextInfo; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSString * voiceName; 
+(id)startSpeechSynthesisStreamingRequest;
+(id)startSpeechSynthesisStreamingRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)languageCode;
-(NSString *)gender;
-(void)setGender:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setQuality:(NSString *)arg1 ;
-(NSString *)quality;
-(void)setLanguageCode:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)audioType;
-(void)setAudioType:(NSString *)arg1 ;
-(NSDictionary *)speakableContextInfo;
-(void)setSpeakableContextInfo:(NSDictionary *)arg1 ;
-(NSString *)voiceName;
-(void)setVoiceName:(NSString *)arg1 ;
-(BOOL)requiresWordTimingInfo;
-(void)setRequiresWordTimingInfo:(BOOL)arg1 ;
@end

