/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIDSRegistrationCompleted : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _circleStatus;
	int _registrationError;
	int _registrationType;
	NSString* _serviceIdentifier;
	unsigned _wasSuccessful;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasRegistrationType; 
@property (assign,nonatomic) int registrationType;                      //@synthesize registrationType=_registrationType - In the implementation block
@property (nonatomic,readonly) BOOL hasServiceIdentifier; 
@property (nonatomic,retain) NSString * serviceIdentifier;              //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasWasSuccessful; 
@property (assign,nonatomic) unsigned wasSuccessful;                    //@synthesize wasSuccessful=_wasSuccessful - In the implementation block
@property (assign,nonatomic) BOOL hasRegistrationError; 
@property (assign,nonatomic) int registrationError;                     //@synthesize registrationError=_registrationError - In the implementation block
@property (assign,nonatomic) BOOL hasCircleStatus; 
@property (assign,nonatomic) int circleStatus;                          //@synthesize circleStatus=_circleStatus - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)serviceIdentifier;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setRegistrationError:(int)arg1 ;
-(void)setHasRegistrationError:(BOOL)arg1 ;
-(BOOL)hasRegistrationError;
-(int)registrationError;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(BOOL)hasServiceIdentifier;
-(void)setRegistrationType:(int)arg1 ;
-(void)setHasRegistrationType:(BOOL)arg1 ;
-(BOOL)hasRegistrationType;
-(void)setWasSuccessful:(unsigned)arg1 ;
-(void)setHasWasSuccessful:(BOOL)arg1 ;
-(BOOL)hasWasSuccessful;
-(void)setCircleStatus:(int)arg1 ;
-(void)setHasCircleStatus:(BOOL)arg1 ;
-(BOOL)hasCircleStatus;
-(int)registrationType;
-(unsigned)wasSuccessful;
-(int)circleStatus;
@end

