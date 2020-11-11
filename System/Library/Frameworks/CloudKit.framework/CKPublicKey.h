/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData, NSDate;

@interface CKPublicKey : NSObject {

	NSData* _publicKey;
	long long _version;
	NSDate* _expiration;
	NSData* _certData;

}

@property (nonatomic,readonly) NSData * publicKey;               //@synthesize publicKey=_publicKey - In the implementation block
@property (nonatomic,readonly) long long version;                //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSDate * expiration;              //@synthesize expiration=_expiration - In the implementation block
@property (nonatomic,readonly) NSData * certData;                //@synthesize certData=_certData - In the implementation block
-(long long)version;
-(NSData *)publicKey;
-(BOOL)hasExpired;
-(NSDate *)expiration;
-(id)initWithPublicKey:(id)arg1 version:(long long)arg2 expiration:(id)arg3 certificateData:(id)arg4 ;
-(NSData *)certData;
@end

