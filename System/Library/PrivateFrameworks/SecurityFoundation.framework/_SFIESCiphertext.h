/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:27 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SecurityFoundation/_SFCiphertext.h>

@class _SFECPublicKey, NSData;

@interface _SFIESCiphertext : _SFCiphertext {

	id _iesCiphertextInternal;

}

@property (readonly) _SFECPublicKey * ephemeralSenderPublicKey; 
@property (readonly) NSData * authenticationCode; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)authenticationCode;
-(_SFECPublicKey *)ephemeralSenderPublicKey;
-(id)initWithCiphertext:(id)arg1 ephemeralSenderPublicKey:(id)arg2 authenticationCode:(id)arg3 ;
@end

