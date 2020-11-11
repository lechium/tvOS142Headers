/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject;

@interface BFFCapabilities : NSObject {

	BOOL _shouldShowWalletInitialized;
	BOOL _shouldShowWallet;
	NSObject*<OS_dispatch_queue> _fetchQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> fetchQueue;              //@synthesize fetchQueue=_fetchQueue - In the implementation block
@property (assign,nonatomic) BOOL shouldShowWalletInitialized;                     //@synthesize shouldShowWalletInitialized=_shouldShowWalletInitialized - In the implementation block
@property (assign,nonatomic) BOOL shouldShowWallet;                                //@synthesize shouldShowWallet=_shouldShowWallet - In the implementation block
+(id)sharedCapabilities;
-(id)init;
-(void)dealloc;
-(void)_localeChanged:(id)arg1 ;
-(BOOL)isAppleTV;
-(BOOL)hasSecureElement;
-(NSObject*<OS_dispatch_queue>)fetchQueue;
-(void)shouldShowWallet:(/*^block*/id)arg1 ;
-(void)setFetchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)shouldShowWalletInitialized;
-(void)setShouldShowWalletInitialized:(BOOL)arg1 ;
-(BOOL)shouldShowWallet;
-(void)setShouldShowWallet:(BOOL)arg1 ;
@end

