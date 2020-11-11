/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IDSFoundation/IDSMPIdentity.h>

@class NSData;

@interface IDSMPFullAccountIdentity : IDSMPIdentity

@property (nonatomic,readonly) NSData * publicName; 
+(id)identityWithData:(id)arg1 error:(id*)arg2 ;
+(id)fullAccountIdentityWithError:(id*)arg1 ;
-(id)dataRepresentationWithError:(id*)arg1 ;
-(id)publicAccountIdentityWithError:(id*)arg1 ;
-(NSData *)publicName;
-(id)rolledAccountIdenityWithError:(id*)arg1 ;
-(id)signData:(id)arg1 withError:(id*)arg2 ;
@end
