/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:53 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface _LSValidationToken : NSObject <NSSecureCoding> {

	NSData* _payload;
	NSData* _nonce;
	NSData* _HMAC;
	id _owner;

}

@property (assign,nonatomic,__weak) id owner;              //@synthesize owner=_owner - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)HMACWithPayload:(id)arg1 nonce:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setOwner:(id)arg1 ;
-(id)initWithPayload:(id)arg1 ;
-(id)owner;
-(BOOL)isCorrectForPayload:(id)arg1 ;
@end
