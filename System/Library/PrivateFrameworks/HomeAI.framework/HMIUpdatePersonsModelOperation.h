/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFOperation.h>

@class NSUUID;

@interface HMIUpdatePersonsModelOperation : HMFOperation {

	BOOL _external;
	NSUUID* _sourceUUID;
	NSUUID* _homeUUID;

}

@property (readonly) NSUUID * sourceUUID;              //@synthesize sourceUUID=_sourceUUID - In the implementation block
@property (readonly) NSUUID * homeUUID;                //@synthesize homeUUID=_homeUUID - In the implementation block
@property (readonly) BOOL external;                    //@synthesize external=_external - In the implementation block
+(id)logCategory;
-(void)main;
-(NSUUID *)homeUUID;
-(BOOL)external;
-(NSUUID *)sourceUUID;
-(id)logIdentifier;
-(id)initWithSourceUUID:(id)arg1 homeUUID:(id)arg2 external:(BOOL)arg3 ;
-(void)updatePersonsModelWithRetryOnError:(BOOL)arg1 ;
@end

