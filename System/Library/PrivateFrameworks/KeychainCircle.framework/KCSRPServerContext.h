/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <KeychainCircle/KeychainCircle-Structs.h>
#import <KeychainCircle/KCSRPContext.h>

@class NSData;

@interface KCSRPServerContext : KCSRPContext {

	NSData* _salt;
	NSData* _verifier;

}

@property (retain) NSData * verifier;              //@synthesize verifier=_verifier - In the implementation block
@property (readonly) NSData * salt;                //@synthesize salt=_salt - In the implementation block
-(NSData *)salt;
-(BOOL)resetWithPassword:(id)arg1 error:(id*)arg2 ;
-(id)initWithUser:(id)arg1 password:(id)arg2 digestInfo:(const ccdigest_info*)arg3 group:(ccdh_gp*)arg4 randomSource:(ccrng_state*)arg5 ;
-(id)initWithUser:(id)arg1 salt:(id)arg2 verifier:(id)arg3 digestInfo:(const ccdigest_info*)arg4 group:(ccdh_gp*)arg5 randomSource:(ccrng_state*)arg6 ;
-(id)copyChallengeFor:(id)arg1 error:(id*)arg2 ;
-(id)copyConfirmationFor:(id)arg1 error:(id*)arg2 ;
-(NSData *)verifier;
-(void)setVerifier:(NSData *)arg1 ;
@end
