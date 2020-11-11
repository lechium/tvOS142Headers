/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/OctagonTrust.framework/OctagonTrust
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OctagonTrust/OctagonTrust-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OTEscrowRecordMetadata, NSString;

@interface OTEscrowRecord : PBCodable <NSCopying> {

	unsigned long long _coolOffEnd;
	unsigned long long _creationDate;
	unsigned long long _remainingAttempts;
	unsigned long long _silentAttemptAllowed;
	OTEscrowRecordMetadata* _escrowInformationMetadata;
	NSString* _label;
	NSString* _recordId;
	int _recordStatus;
	int _recordViability;
	int _recoveryStatus;
	NSString* _serialNumber;
	int _viabilityStatus;
	SCD_Struct_OT3 _has;

}

@property (assign,nonatomic) BOOL hasCreationDate; 
@property (assign,nonatomic) unsigned long long creationDate;                                 //@synthesize creationDate=_creationDate - In the implementation block
@property (assign,nonatomic) BOOL hasRemainingAttempts; 
@property (assign,nonatomic) unsigned long long remainingAttempts;                            //@synthesize remainingAttempts=_remainingAttempts - In the implementation block
@property (nonatomic,readonly) BOOL hasEscrowInformationMetadata; 
@property (nonatomic,retain) OTEscrowRecordMetadata * escrowInformationMetadata;              //@synthesize escrowInformationMetadata=_escrowInformationMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasLabel; 
@property (nonatomic,retain) NSString * label;                                                //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) BOOL hasSilentAttemptAllowed; 
@property (assign,nonatomic) unsigned long long silentAttemptAllowed;                         //@synthesize silentAttemptAllowed=_silentAttemptAllowed - In the implementation block
@property (assign,nonatomic) BOOL hasRecordStatus; 
@property (assign,nonatomic) int recordStatus;                                                //@synthesize recordStatus=_recordStatus - In the implementation block
@property (nonatomic,readonly) BOOL hasRecordId; 
@property (nonatomic,retain) NSString * recordId;                                             //@synthesize recordId=_recordId - In the implementation block
@property (assign,nonatomic) BOOL hasRecoveryStatus; 
@property (assign,nonatomic) int recoveryStatus;                                              //@synthesize recoveryStatus=_recoveryStatus - In the implementation block
@property (assign,nonatomic) BOOL hasCoolOffEnd; 
@property (assign,nonatomic) unsigned long long coolOffEnd;                                   //@synthesize coolOffEnd=_coolOffEnd - In the implementation block
@property (nonatomic,readonly) BOOL hasSerialNumber; 
@property (nonatomic,retain) NSString * serialNumber;                                         //@synthesize serialNumber=_serialNumber - In the implementation block
@property (assign,nonatomic) BOOL hasRecordViability; 
@property (assign,nonatomic) int recordViability;                                             //@synthesize recordViability=_recordViability - In the implementation block
@property (assign,nonatomic) BOOL hasViabilityStatus; 
@property (assign,nonatomic) int viabilityStatus;                                             //@synthesize viabilityStatus=_viabilityStatus - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)creationDate;
-(id)dictionaryRepresentation;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCreationDate:(unsigned long long)arg1 ;
-(NSString *)serialNumber;
-(BOOL)hasLabel;
-(NSString *)recordId;
-(void)setHasCreationDate:(BOOL)arg1 ;
-(BOOL)hasCreationDate;
-(unsigned long long)remainingAttempts;
-(void)setRemainingAttempts:(unsigned long long)arg1 ;
-(void)setSerialNumber:(NSString *)arg1 ;
-(int)recoveryStatus;
-(void)setRecoveryStatus:(int)arg1 ;
-(OTEscrowRecordMetadata *)escrowInformationMetadata;
-(unsigned long long)coolOffEnd;
-(int)recordStatus;
-(void)setRecordId:(NSString *)arg1 ;
-(BOOL)hasRecordId;
-(BOOL)hasSerialNumber;
-(void)setHasRemainingAttempts:(BOOL)arg1 ;
-(BOOL)hasRemainingAttempts;
-(BOOL)hasEscrowInformationMetadata;
-(void)setSilentAttemptAllowed:(unsigned long long)arg1 ;
-(void)setHasSilentAttemptAllowed:(BOOL)arg1 ;
-(BOOL)hasSilentAttemptAllowed;
-(void)setRecordStatus:(int)arg1 ;
-(void)setHasRecordStatus:(BOOL)arg1 ;
-(BOOL)hasRecordStatus;
-(id)recordStatusAsString:(int)arg1 ;
-(int)StringAsRecordStatus:(id)arg1 ;
-(void)setHasRecoveryStatus:(BOOL)arg1 ;
-(BOOL)hasRecoveryStatus;
-(id)recoveryStatusAsString:(int)arg1 ;
-(int)StringAsRecoveryStatus:(id)arg1 ;
-(void)setCoolOffEnd:(unsigned long long)arg1 ;
-(void)setHasCoolOffEnd:(BOOL)arg1 ;
-(BOOL)hasCoolOffEnd;
-(int)recordViability;
-(void)setRecordViability:(int)arg1 ;
-(void)setHasRecordViability:(BOOL)arg1 ;
-(BOOL)hasRecordViability;
-(id)recordViabilityAsString:(int)arg1 ;
-(int)StringAsRecordViability:(id)arg1 ;
-(int)viabilityStatus;
-(void)setViabilityStatus:(int)arg1 ;
-(void)setHasViabilityStatus:(BOOL)arg1 ;
-(BOOL)hasViabilityStatus;
-(id)viabilityStatusAsString:(int)arg1 ;
-(int)StringAsViabilityStatus:(id)arg1 ;
-(void)setEscrowInformationMetadata:(OTEscrowRecordMetadata *)arg1 ;
-(unsigned long long)silentAttemptAllowed;
@end

