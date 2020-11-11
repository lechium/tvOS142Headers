/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CryptoTokenKit/CryptoTokenKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TKTokenID : NSObject <NSCopying, NSSecureCoding> {

	NSString* _stringRepresentation;

}

@property (readonly) NSString * stringRepresentation;              //@synthesize stringRepresentation=_stringRepresentation - In the implementation block
@property (readonly) NSString * classID; 
@property (readonly) NSString * instanceID; 
+(BOOL)supportsSecureCoding;
+(id)encodedKeyID:(id)arg1 ;
+(id)encodedCertificateID:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTokenID:(id)arg1 ;
-(NSString *)stringRepresentation;
-(NSString *)instanceID;
-(NSString *)classID;
-(id)initWithClassID:(id)arg1 instanceID:(id)arg2 ;
-(id)decodedObjectID:(id)arg1 isCertificate:(BOOL*)arg2 error:(id*)arg3 ;
-(id)decodedKeyID:(id)arg1 error:(id*)arg2 ;
-(id)decodedCertificateID:(id)arg1 error:(id*)arg2 ;
@end

