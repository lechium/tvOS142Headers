/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Security.framework/Security
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData, LAContext;

@interface CTKClientSEP_TKTokenRefSEP : NSObject {

	NSData* _ACMContext;
	LAContext* _LAContext;

}

@property (readonly) NSData * ACMContext;                //@synthesize ACMContext=_ACMContext - In the implementation block
@property (readonly) LAContext * LAContext;              //@synthesize LAContext=_LAContext - In the implementation block
-(id)description;
-(id)accessControlOfObject:(id)arg1 error:(id*)arg2 ;
-(id)createOrUpdateObject:(id)arg1 attributes:(id)arg2 error:(id*)arg3 ;
-(BOOL)deleteObject:(id)arg1 error:(id*)arg2 ;
-(id)publicKeyOfObject:(id)arg1 error:(id*)arg2 ;
-(id)keyOperation:(long long)arg1 onObject:(id)arg2 algorithm:(id)arg3 mode:(long long)arg4 in1:(id)arg5 in2:(id)arg6 error:(id*)arg7 ;
-(id)attestUsingKey:(id)arg1 attestedKey:(id)arg2 nonce:(id)arg3 error:(id*)arg4 ;
-(BOOL)lifetimeControlKey:(id)arg1 lifetimeControlType:(long long)arg2 error:(id*)arg3 ;
-(LAContext *)LAContext;
-(id)initWithTokenID:(id)arg1 LAContext:(id)arg2 testMode:(id)arg3 ;
-(NSData *)ACMContext;
-(id)keyForObjectID:(id)arg1 error:(id*)arg2 ;
@end

