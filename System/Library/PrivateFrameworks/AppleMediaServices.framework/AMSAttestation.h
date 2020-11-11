/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:49 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface AMSAttestation : NSObject
+(id)_generateCertificateChainStringsForOptions:(id)arg1 error:(id*)arg2 ;
+(id)attestationWithOptions:(id)arg1 error:(id*)arg2 ;
+(id)_attestationPListWithStyle:(unsigned long long)arg1 primaryAttestation:(id)arg2 extendedAttestation:(id)arg3 error:(id*)arg4 ;
+(id)attestationHTTPBodyDataWithStyle:(unsigned long long)arg1 regenerateKeys:(BOOL)arg2 error:(id*)arg3 ;
+(BOOL)clearAttestationWithAccount:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
@end

