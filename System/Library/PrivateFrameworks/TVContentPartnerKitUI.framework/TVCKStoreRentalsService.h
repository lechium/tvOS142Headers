/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVContentPartnerKitUI/TVCKRemoteNotifierDelegate.h>

@class TVCKDataClientConnector, TVCKRemoteNotifier, NSMutableSet, TVSDocumentLoader, TVImageProxy, TVCKStoreBumperConfig, NSMutableArray, NSString;

@interface TVCKStoreRentalsService : NSObject <TVCKRemoteNotifierDelegate> {

	BOOL _rentalsEnabled;
	BOOL _bumperConfigLoadingInProgress;
	TVCKDataClientConnector* _connector;
	TVCKRemoteNotifier* _remoteNotifier;
	NSMutableSet* _updateOperations;
	TVSDocumentLoader* _bumperServiceDocumentLoader;
	TVImageProxy* _bumperLogoImageProxy;
	TVCKStoreBumperConfig* _storeBumperConfig;
	NSMutableArray* _bumperConfigCompletionHandlers;

}

@property (nonatomic,retain) TVCKDataClientConnector * connector;                          //@synthesize connector=_connector - In the implementation block
@property (assign,nonatomic) BOOL rentalsEnabled;                                          //@synthesize rentalsEnabled=_rentalsEnabled - In the implementation block
@property (nonatomic,retain) TVCKRemoteNotifier * remoteNotifier;                          //@synthesize remoteNotifier=_remoteNotifier - In the implementation block
@property (nonatomic,retain) NSMutableSet * updateOperations;                              //@synthesize updateOperations=_updateOperations - In the implementation block
@property (nonatomic,retain) TVSDocumentLoader * bumperServiceDocumentLoader;              //@synthesize bumperServiceDocumentLoader=_bumperServiceDocumentLoader - In the implementation block
@property (nonatomic,retain) TVImageProxy * bumperLogoImageProxy;                          //@synthesize bumperLogoImageProxy=_bumperLogoImageProxy - In the implementation block
@property (nonatomic,retain) TVCKStoreBumperConfig * storeBumperConfig;                    //@synthesize storeBumperConfig=_storeBumperConfig - In the implementation block
@property (nonatomic,retain) NSMutableArray * bumperConfigCompletionHandlers;              //@synthesize bumperConfigCompletionHandlers=_bumperConfigCompletionHandlers - In the implementation block
@property (assign,nonatomic) BOOL bumperConfigLoadingInProgress;                           //@synthesize bumperConfigLoadingInProgress=_bumperConfigLoadingInProgress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedService;
-(id)init;
-(void)dealloc;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2 ;
-(TVCKRemoteNotifier *)remoteNotifier;
-(void)setRemoteNotifier:(TVCKRemoteNotifier *)arg1 ;
-(NSMutableSet *)updateOperations;
-(void)fetchAllRentalDataItemsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)refreshRentalDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadStoreBumperConfigWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_cloudDataClientUpdated:(id)arg1 ;
-(BOOL)rentalsEnabled;
-(TVCKDataClientConnector *)connector;
-(id)_rentalQuery;
-(void)setRentalsEnabled:(BOOL)arg1 ;
-(NSMutableArray *)bumperConfigCompletionHandlers;
-(void)setBumperConfigLoadingInProgress:(BOOL)arg1 ;
-(TVImageProxy *)bumperLogoImageProxy;
-(void)setBumperLogoImageProxy:(TVImageProxy *)arg1 ;
-(BOOL)bumperConfigLoadingInProgress;
-(TVCKStoreBumperConfig *)storeBumperConfig;
-(void)setBumperServiceDocumentLoader:(TVSDocumentLoader *)arg1 ;
-(void)setStoreBumperConfig:(TVCKStoreBumperConfig *)arg1 ;
-(void)_sendRemoteChangeNotification;
-(void)_sendLocalChangeNotification;
-(void)enableRentals;
-(void)didAcquireRentals:(id)arg1 ;
-(void)didUpdateExpirationDateForRentalDueToPlayback:(id)arg1 ;
-(void)setConnector:(TVCKDataClientConnector *)arg1 ;
-(void)setUpdateOperations:(NSMutableSet *)arg1 ;
-(TVSDocumentLoader *)bumperServiceDocumentLoader;
-(void)setBumperConfigCompletionHandlers:(NSMutableArray *)arg1 ;
@end

