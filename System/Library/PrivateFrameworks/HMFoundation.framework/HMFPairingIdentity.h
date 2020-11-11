/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HMFPairingKey;

@interface HMFPairingIdentity : HMFObject <NSSecureCoding, NSCopying> {

	NSString* _identifier;
	HMFPairingKey* _publicKey;
	HMFPairingKey* _privateKey;

}

@property (nonatomic,copy,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) HMFPairingKey * publicKey;                     //@synthesize publicKey=_publicKey - In the implementation block
@property (nonatomic,copy,readonly) HMFPairingKey * privateKey;                    //@synthesize privateKey=_privateKey - In the implementation block
@property (copy,readonly) HMFPairingIdentity * publicPairingIdentity; 
+(BOOL)supportsSecureCoding;
+(id)pairingIdentity;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(HMFPairingKey *)publicKey;
-(id)shortDescription;
-(HMFPairingKey *)privateKey;
-(id)initWithIdentifier:(id)arg1 publicKey:(id)arg2 privateKey:(id)arg3 ;
-(id)attributeDescriptions;
-(HMFPairingIdentity *)publicPairingIdentity;
@end

