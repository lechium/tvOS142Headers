/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaEnabledStatus : PBCodable {

	BOOL _assistantEnabled;
	BOOL _dictationEnabled;
	BOOL _hardwareButtonEnabled;
	BOOL _heySiriEnabled;
	BOOL _assistantOnLockscreen;
	BOOL _raiseToSpeakEnabled;
	BOOL _spokenNotificationsEnabled;
	BOOL _hasHomekitHome;
	int _shortcutsAvailable;
	int _dataSharingOptInStatus;
	BOOL _typeToSiriEnabled;
	BOOL _isPreciseLocationEnabled;
	int _voiceFeedback;
	SCD_Struct_SI5 _has;

}

@property (assign,nonatomic) BOOL assistantEnabled;                           //@synthesize assistantEnabled=_assistantEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasAssistantEnabled; 
@property (assign,nonatomic) BOOL dictationEnabled;                           //@synthesize dictationEnabled=_dictationEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasDictationEnabled; 
@property (assign,nonatomic) BOOL hardwareButtonEnabled;                      //@synthesize hardwareButtonEnabled=_hardwareButtonEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasHardwareButtonEnabled; 
@property (assign,nonatomic) BOOL heySiriEnabled;                             //@synthesize heySiriEnabled=_heySiriEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasHeySiriEnabled; 
@property (assign,nonatomic) BOOL assistantOnLockscreen;                      //@synthesize assistantOnLockscreen=_assistantOnLockscreen - In the implementation block
@property (assign,nonatomic) BOOL hasAssistantOnLockscreen; 
@property (assign,nonatomic) BOOL raiseToSpeakEnabled;                        //@synthesize raiseToSpeakEnabled=_raiseToSpeakEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasRaiseToSpeakEnabled; 
@property (assign,nonatomic) BOOL spokenNotificationsEnabled;                 //@synthesize spokenNotificationsEnabled=_spokenNotificationsEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasSpokenNotificationsEnabled; 
@property (assign,nonatomic) BOOL hasHomekitHome;                             //@synthesize hasHomekitHome=_hasHomekitHome - In the implementation block
@property (assign,nonatomic) BOOL hasHasHomekitHome; 
@property (assign,nonatomic) int shortcutsAvailable;                          //@synthesize shortcutsAvailable=_shortcutsAvailable - In the implementation block
@property (assign,nonatomic) BOOL hasShortcutsAvailable; 
@property (assign,nonatomic) int dataSharingOptInStatus;                      //@synthesize dataSharingOptInStatus=_dataSharingOptInStatus - In the implementation block
@property (assign,nonatomic) BOOL hasDataSharingOptInStatus; 
@property (assign,nonatomic) BOOL typeToSiriEnabled;                          //@synthesize typeToSiriEnabled=_typeToSiriEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasTypeToSiriEnabled; 
@property (assign,nonatomic) BOOL isPreciseLocationEnabled;                   //@synthesize isPreciseLocationEnabled=_isPreciseLocationEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasIsPreciseLocationEnabled; 
@property (assign,nonatomic) int voiceFeedback;                               //@synthesize voiceFeedback=_voiceFeedback - In the implementation block
@property (assign,nonatomic) BOOL hasVoiceFeedback; 
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(int)dataSharingOptInStatus;
-(void)setDataSharingOptInStatus:(int)arg1 ;
-(void)setAssistantEnabled:(BOOL)arg1 ;
-(void)setDictationEnabled:(BOOL)arg1 ;
-(void)setHardwareButtonEnabled:(BOOL)arg1 ;
-(void)setHeySiriEnabled:(BOOL)arg1 ;
-(void)setAssistantOnLockscreen:(BOOL)arg1 ;
-(void)setRaiseToSpeakEnabled:(BOOL)arg1 ;
-(void)setSpokenNotificationsEnabled:(BOOL)arg1 ;
-(void)setHasHomekitHome:(BOOL)arg1 ;
-(void)setShortcutsAvailable:(int)arg1 ;
-(void)setTypeToSiriEnabled:(BOOL)arg1 ;
-(void)setIsPreciseLocationEnabled:(BOOL)arg1 ;
-(void)setVoiceFeedback:(int)arg1 ;
-(BOOL)assistantEnabled;
-(BOOL)dictationEnabled;
-(BOOL)hardwareButtonEnabled;
-(BOOL)heySiriEnabled;
-(BOOL)assistantOnLockscreen;
-(BOOL)raiseToSpeakEnabled;
-(BOOL)spokenNotificationsEnabled;
-(BOOL)hasHomekitHome;
-(int)shortcutsAvailable;
-(BOOL)typeToSiriEnabled;
-(BOOL)isPreciseLocationEnabled;
-(int)voiceFeedback;
-(BOOL)hasAssistantEnabled;
-(void)setHasAssistantEnabled:(BOOL)arg1 ;
-(BOOL)hasDictationEnabled;
-(void)setHasDictationEnabled:(BOOL)arg1 ;
-(BOOL)hasHardwareButtonEnabled;
-(void)setHasHardwareButtonEnabled:(BOOL)arg1 ;
-(BOOL)hasHeySiriEnabled;
-(void)setHasHeySiriEnabled:(BOOL)arg1 ;
-(BOOL)hasAssistantOnLockscreen;
-(void)setHasAssistantOnLockscreen:(BOOL)arg1 ;
-(BOOL)hasRaiseToSpeakEnabled;
-(void)setHasRaiseToSpeakEnabled:(BOOL)arg1 ;
-(BOOL)hasSpokenNotificationsEnabled;
-(void)setHasSpokenNotificationsEnabled:(BOOL)arg1 ;
-(BOOL)hasHasHomekitHome;
-(void)setHasHasHomekitHome:(BOOL)arg1 ;
-(BOOL)hasShortcutsAvailable;
-(void)setHasShortcutsAvailable:(BOOL)arg1 ;
-(BOOL)hasDataSharingOptInStatus;
-(void)setHasDataSharingOptInStatus:(BOOL)arg1 ;
-(BOOL)hasTypeToSiriEnabled;
-(void)setHasTypeToSiriEnabled:(BOOL)arg1 ;
-(BOOL)hasIsPreciseLocationEnabled;
-(void)setHasIsPreciseLocationEnabled:(BOOL)arg1 ;
-(BOOL)hasVoiceFeedback;
-(void)setHasVoiceFeedback:(BOOL)arg1 ;
@end

