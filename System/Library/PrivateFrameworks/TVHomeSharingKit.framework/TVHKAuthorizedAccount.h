/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSNumber, NSData;

@interface TVHKAuthorizedAccount : NSObject {

	NSNumber* _userIdentifier;
	NSData* _keyList;

}

@property (nonatomic,copy) NSNumber * userIdentifier;              //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,copy) NSData * keyList;                       //@synthesize keyList=_keyList - In the implementation block
-(id)new;
-(id)description;
-(id)init;
-(NSNumber *)userIdentifier;
-(void)setUserIdentifier:(NSNumber *)arg1 ;
-(NSData *)keyList;
-(id)initWithUserIdentifier:(id)arg1 keyList:(id)arg2 ;
-(void)setKeyList:(NSData *)arg1 ;
@end

