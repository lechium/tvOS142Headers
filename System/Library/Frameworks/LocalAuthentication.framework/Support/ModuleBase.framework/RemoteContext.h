/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/ModuleBase.framework/ModuleBase
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/LARemoteContextOwnership.h>

@protocol LARemoteContextOwnership;
@class NSString, NSUUID;

@interface RemoteContext : NSObject <LARemoteContextOwnership> {

	NSString* _description;
	NSUUID* _uuid;
	id<LARemoteContextOwnership> _ownership;
	unsigned long long _acmExternalizedFormHash;
	RemoteContext* _originalOwnership;

}

@property (nonatomic,readonly) NSUUID * uuid;                                         //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) id<LARemoteContextOwnership> ownership;                //@synthesize ownership=_ownership - In the implementation block
@property (assign,nonatomic) unsigned long long acmExternalizedFormHash;              //@synthesize acmExternalizedFormHash=_acmExternalizedFormHash - In the implementation block
@property (nonatomic,readonly) RemoteContext * originalOwnership;                     //@synthesize originalOwnership=_originalOwnership - In the implementation block
-(id)description;
-(void)dealloc;
-(NSUUID *)uuid;
-(RemoteContext *)originalOwnership;
-(id)initWithOwnership:(id)arg1 uuid:(id)arg2 description:(id)arg3 originalOwnership:(id)arg4 ;
-(id<LARemoteContextOwnership>)ownership;
-(unsigned long long)acmExternalizedFormHash;
-(void)setAcmExternalizedFormHash:(unsigned long long)arg1 ;
@end

