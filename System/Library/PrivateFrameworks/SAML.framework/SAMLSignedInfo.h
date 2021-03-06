/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:28 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAML/SAML-Structs.h>
#import <SAML/SAMLBaseElement.h>

@class NSString, NSNumber, NSArray;

@interface SAMLSignedInfo : SAMLBaseElement

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * canonicalizationMethod; 
@property (nonatomic,readonly) NSNumber * signatureMethodLength; 
@property (nonatomic,readonly) NSString * signatureMethod; 
@property (nonatomic,readonly) NSArray * references; 
+(id)createElement:(id*)arg1 ;
-(NSString *)identifier;
-(NSString *)signatureMethod;
-(NSArray *)references;
-(xmlNode*)xmlNode:(id*)arg1 ;
-(NSString *)canonicalizationMethod;
-(NSNumber *)signatureMethodLength;
@end

