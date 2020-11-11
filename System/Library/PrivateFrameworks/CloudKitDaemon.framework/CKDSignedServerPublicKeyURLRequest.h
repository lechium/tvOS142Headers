/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <CloudKitDaemon/CKDURLRequest.h>

@class CKPublicKey, NSURL;

@interface CKDSignedServerPublicKeyURLRequest : CKDURLRequest {

	CKPublicKey* _verifiedPublicKey;
	NSURL* _plistURL;
	SecPolicyRef _certificateTrustPolicy;

}

@property (nonatomic,readonly) NSURL * plistURL;                                 //@synthesize plistURL=_plistURL - In the implementation block
@property (nonatomic,readonly) SecPolicyRef certificateTrustPolicy;              //@synthesize certificateTrustPolicy=_certificateTrustPolicy - In the implementation block
@property (retain) CKPublicKey * verifiedPublicKey;                              //@synthesize verifiedPublicKey=_verifiedPublicKey - In the implementation block
+(BOOL)serverResponseIsComplete:(id)arg1 ;
+(id)certificateListServerPlist:(id)arg1 ;
+(SecTrustRef)createTrustEvalFromCertificateList:(id)arg1 verifiedWithPolicy:(SecPolicyRef)arg2 ;
+(id)nearestExpirationInCertificateList:(id)arg1 ;
+(BOOL)verifyData:(id)arg1 withSignature:(id)arg2 usingKey:(SecKeyRef)arg3 ;
+(BOOL)verifyInteger:(long long)arg1 withSignature:(id)arg2 usingKey:(SecKeyRef)arg3 ;
-(void)dealloc;
-(id)url;
-(long long)serverType;
-(long long)partitionType;
-(id)httpMethod;
-(void)requestDidParsePlistObject:(id)arg1 ;
-(BOOL)allowsAnonymousAccount;
-(BOOL)requiresConfiguration;
-(BOOL)requiresDeviceID;
-(BOOL)requiresTokenRegistration;
-(BOOL)hasRequestBody;
-(NSURL *)plistURL;
-(SecPolicyRef)certificateTrustPolicy;
-(BOOL)canVerifySignedPlistValues:(id)arg1 withKey:(SecKeyRef)arg2 ;
-(void)setVerifiedPublicKey:(CKPublicKey *)arg1 ;
-(id)initWithOperation:(id)arg1 plistURL:(id)arg2 verifyWithPolicy:(SecPolicyRef)arg3 ;
-(CKPublicKey *)verifiedPublicKey;
@end

