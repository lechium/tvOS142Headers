/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:27 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAML/SAMLBaseElement.h>

@class NSString, NSDate, SAMLSignature, SAMLSubject, SAMLNameIdPolicy, SAMLConditions, SAMLRequestedAuthNContext, SAMLScoping;

@interface SAMLAuthNRequestElement : SAMLBaseElement

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSDate * issueInstant; 
@property (nonatomic,retain) NSString * destination; 
@property (nonatomic,readonly) NSString * consent; 
@property (assign,nonatomic) BOOL forceAuthN; 
@property (assign,nonatomic) BOOL isPassive; 
@property (nonatomic,retain) NSString * providerName; 
@property (nonatomic,retain) NSString * issuer; 
@property (nonatomic,readonly) SAMLSignature * signature; 
@property (nonatomic,retain) SAMLSubject * subject; 
@property (nonatomic,retain) SAMLNameIdPolicy * nameIdPolicy; 
@property (nonatomic,retain) SAMLConditions * conditions; 
@property (nonatomic,readonly) SAMLRequestedAuthNContext * context; 
@property (nonatomic,retain) SAMLScoping * scoping; 
+(id)createElement:(id*)arg1 ;
-(NSString *)identifier;
-(SAMLRequestedAuthNContext *)context;
-(SAMLSignature *)signature;
-(void)setDestination:(NSString *)arg1 ;
-(NSString *)destination;
-(SAMLSubject *)subject;
-(void)setSubject:(SAMLSubject *)arg1 ;
-(NSString *)issuer;
-(SAMLConditions *)conditions;
-(void)setConditions:(SAMLConditions *)arg1 ;
-(NSString *)providerName;
-(void)setProviderName:(NSString *)arg1 ;
-(void)setIssuer:(NSString *)arg1 ;
-(NSDate *)issueInstant;
-(NSString *)consent;
-(BOOL)forceAuthN;
-(void)setForceAuthN:(BOOL)arg1 ;
-(BOOL)isPassive;
-(void)setIsPassive:(BOOL)arg1 ;
-(SAMLNameIdPolicy *)nameIdPolicy;
-(void)setNameIdPolicy:(SAMLNameIdPolicy *)arg1 ;
-(SAMLScoping *)scoping;
-(void)setScoping:(SAMLScoping *)arg1 ;
@end

