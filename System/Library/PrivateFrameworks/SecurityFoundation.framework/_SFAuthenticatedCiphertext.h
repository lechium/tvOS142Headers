/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:27 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SecurityFoundation/_SFCiphertext.h>

@class NSData;

@interface _SFAuthenticatedCiphertext : _SFCiphertext {

	id _authenticatedCiphertextInternal;

}

@property (readonly) NSData * authenticationCode; 
@property (readonly) NSData * initializationVector; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)initializationVector;
-(NSData *)authenticationCode;
-(id)initWithCiphertext:(id)arg1 authenticationCode:(id)arg2 initializationVector:(id)arg3 ;
@end
