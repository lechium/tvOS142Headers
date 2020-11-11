/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:19 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, ICIAMMetricEvent, NSString;

@interface ICIAMMessageAction : PBCodable <NSCopying> {

	NSMutableArray* _actionParameters;
	ICIAMMetricEvent* _clickEvent;
	NSString* _displayText;
	NSString* _identifier;
	int _messageRemovalPolicy;
	NSString* _uRL;
	BOOL _requiresDelegate;
	SCD_Struct_IC4 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayText; 
@property (nonatomic,retain) NSString * displayText;                         //@synthesize displayText=_displayText - In the implementation block
@property (nonatomic,readonly) BOOL hasURL; 
@property (nonatomic,retain) NSString * uRL;                                 //@synthesize uRL=_uRL - In the implementation block
@property (assign,nonatomic) BOOL hasRequiresDelegate; 
@property (assign,nonatomic) BOOL requiresDelegate;                          //@synthesize requiresDelegate=_requiresDelegate - In the implementation block
@property (nonatomic,retain) NSMutableArray * actionParameters;              //@synthesize actionParameters=_actionParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasClickEvent; 
@property (nonatomic,retain) ICIAMMetricEvent * clickEvent;                  //@synthesize clickEvent=_clickEvent - In the implementation block
@property (assign,nonatomic) BOOL hasMessageRemovalPolicy; 
@property (assign,nonatomic) int messageRemovalPolicy;                       //@synthesize messageRemovalPolicy=_messageRemovalPolicy - In the implementation block
+(Class)actionParametersType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)identifier;
-(void)setURL:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasIdentifier;
-(BOOL)hasURL;
-(NSString *)uRL;
-(NSString *)displayText;
-(void)setDisplayText:(NSString *)arg1 ;
-(BOOL)hasDisplayText;
-(void)addActionParameters:(id)arg1 ;
-(unsigned long long)actionParametersCount;
-(void)clearActionParameters;
-(id)actionParametersAtIndex:(unsigned long long)arg1 ;
-(void)setClickEvent:(ICIAMMetricEvent *)arg1 ;
-(BOOL)requiresDelegate;
-(void)setRequiresDelegate:(BOOL)arg1 ;
-(void)setHasRequiresDelegate:(BOOL)arg1 ;
-(BOOL)hasRequiresDelegate;
-(BOOL)hasClickEvent;
-(int)messageRemovalPolicy;
-(void)setMessageRemovalPolicy:(int)arg1 ;
-(void)setHasMessageRemovalPolicy:(BOOL)arg1 ;
-(BOOL)hasMessageRemovalPolicy;
-(id)messageRemovalPolicyAsString:(int)arg1 ;
-(int)StringAsMessageRemovalPolicy:(id)arg1 ;
-(NSMutableArray *)actionParameters;
-(void)setActionParameters:(NSMutableArray *)arg1 ;
-(ICIAMMetricEvent *)clickEvent;
@end
