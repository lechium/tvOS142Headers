/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:28 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAML/SAMLBaseElement.h>

@class SAMLStatusCode, NSString;

@interface SAMLStatus : SAMLBaseElement

@property (nonatomic,readonly) SAMLStatusCode * statusCode; 
@property (nonatomic,readonly) NSString * statusMessage; 
@property (nonatomic,readonly) NSString * statusDetail; 
+(id)createElement:(id*)arg1 ;
-(SAMLStatusCode *)statusCode;
-(id)status;
-(NSString *)statusMessage;
-(NSString *)statusDetail;
@end
