/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:10 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class HMFUnfairLock, NSData;

@interface HMDIdentifierSaltStore : NSObject {

	HMFUnfairLock* _lock;
	NSData* _identifierSalt;
	NSData* _assistantIdentifierSalt;

}

@property (nonatomic,retain) NSData * identifierSalt;                       //@synthesize identifierSalt=_identifierSalt - In the implementation block
@property (nonatomic,retain) NSData * assistantIdentifierSalt;              //@synthesize assistantIdentifierSalt=_assistantIdentifierSalt - In the implementation block
-(id)init;
-(NSData *)identifierSalt;
-(void)setIdentifierSalt:(NSData *)arg1 ;
-(NSData *)assistantIdentifierSalt;
-(void)setAssistantIdentifierSalt:(NSData *)arg1 ;
@end

