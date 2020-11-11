/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface BBBulletinTransaction : NSObject {

	NSString* _bulletinID;
	unsigned long long _transactionID;

}

@property (nonatomic,copy,readonly) NSString * bulletinID;                    //@synthesize bulletinID=_bulletinID - In the implementation block
@property (nonatomic,readonly) unsigned long long transactionID;              //@synthesize transactionID=_transactionID - In the implementation block
+(id)transactionWithBulletinID:(id)arg1 ;
-(id)description;
-(unsigned long long)transactionID;
-(NSString *)bulletinID;
-(unsigned long long)incrementTransactionID;
-(id)initWithBulletinID:(id)arg1 ;
@end

