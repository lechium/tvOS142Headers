/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:34 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CallHistory/CHLogger.h>

@class NSString;

@interface CHPhoneNumber : CHLogger {

	BOOL _formattedRepresentationAttempted;
	BOOL _normalizedRepresentationAttempted;
	NSString* _formattedRepresentation;
	NSString* _normalizedRepresentation;
	NSString* _digits;
	NSString* _isoCountryCode;

}

@property (nonatomic,copy,readonly) NSString * digits;                                //@synthesize digits=_digits - In the implementation block
@property (nonatomic,copy) NSString * isoCountryCode;                                 //@synthesize isoCountryCode=_isoCountryCode - In the implementation block
@property (assign,nonatomic) BOOL formattedRepresentationAttempted;                   //@synthesize formattedRepresentationAttempted=_formattedRepresentationAttempted - In the implementation block
@property (assign,nonatomic) BOOL normalizedRepresentationAttempted;                  //@synthesize normalizedRepresentationAttempted=_normalizedRepresentationAttempted - In the implementation block
@property (nonatomic,copy,readonly) NSString * formattedRepresentation;               //@synthesize formattedRepresentation=_formattedRepresentation - In the implementation block
@property (nonatomic,copy,readonly) NSString * normalizedRepresentation;              //@synthesize normalizedRepresentation=_normalizedRepresentation - In the implementation block
-(NSString *)isoCountryCode;
-(void)setIsoCountryCode:(NSString *)arg1 ;
-(NSString *)digits;
-(NSString *)formattedRepresentation;
-(id)initWithDigits:(id)arg1 isoCountryCode:(id)arg2 ;
-(NSString *)normalizedRepresentation;
-(BOOL)formattedRepresentationAttempted;
-(void)setFormattedRepresentationAttempted:(BOOL)arg1 ;
-(BOOL)normalizedRepresentationAttempted;
-(void)setNormalizedRepresentationAttempted:(BOOL)arg1 ;
@end
