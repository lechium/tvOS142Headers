/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:27 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _SFECKeyPair, _SFECPublicKey;

@interface _SFECDHKeySource : NSObject {

	id _ecdhKeySourceInternal;

}

@property (nonatomic,retain) _SFECKeyPair * localKeyPair; 
@property (nonatomic,retain) _SFECPublicKey * remotePublicKey; 
-(_SFECPublicKey *)remotePublicKey;
-(void)setRemotePublicKey:(_SFECPublicKey *)arg1 ;
-(_SFECKeyPair *)localKeyPair;
-(id)initWithLocalKeyPair:(id)arg1 remotePublickKey:(id)arg2 ;
-(void)setLocalKeyPair:(_SFECKeyPair *)arg1 ;
@end
