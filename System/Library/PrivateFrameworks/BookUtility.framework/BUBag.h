/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:59 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AMSBagProtocol.h>

@protocol AMSBagProtocol;
@class NSDate, NSString, AMSProcessInfo, AMSBagValue;

@interface BUBag : NSObject <AMSBagProtocol> {

	id<AMSBagProtocol> _bag;

}

@property (nonatomic,readonly) AMSBagValue * bu_addFundsURL; 
@property (nonatomic,readonly) AMSBagValue * bu_allowCitations; 
@property (nonatomic,readonly) AMSBagValue * bu_allowingCitations; 
@property (nonatomic,readonly) AMSBagValue * bu_availableBookUpdates; 
@property (nonatomic,readonly) AMSBagValue * bu_availableBookUpdatesReloadFrequency; 
@property (nonatomic,readonly) AMSBagValue * bu_amdDomains; 
@property (nonatomic,readonly) AMSBagValue * bu_amdFinishProvisioning; 
@property (nonatomic,readonly) AMSBagValue * bu_amdSyncMachine; 
@property (nonatomic,readonly) AMSBagValue * bu_appAnalyticsURL; 
@property (nonatomic,readonly) AMSBagValue * bu_automaticDownloadQueueURL; 
@property (nonatomic,readonly) AMSBagValue * bu_booksISBNURL; 
@property (nonatomic,readonly) AMSBagValue * bu_booksMediaAPIHost; 
@property (nonatomic,readonly) AMSBagValue * bu_booksMediaAPIPreviewHost; 
@property (nonatomic,readonly) AMSBagValue * bu_booksTabs; 
@property (nonatomic,readonly) AMSBagValue * bu_buyProduct; 
@property (nonatomic,readonly) AMSBagValue * bu_contentRestoreMaxItemCount; 
@property (nonatomic,readonly) AMSBagValue * bu_contentRestoreURL; 
@property (nonatomic,readonly) AMSBagValue * bu_countryCode; 
@property (nonatomic,readonly) AMSBagValue * bu_currencyCode; 
@property (nonatomic,readonly) AMSBagValue * bu_deleteUserReviewUrl; 
@property (nonatomic,readonly) AMSBagValue * bu_dtPurchasesPages; 
@property (nonatomic,readonly) AMSBagValue * bu_endOfBookUpsellEnabled; 
@property (nonatomic,readonly) AMSBagValue * bu_endOfPictureBookUpsellEnabled; 
@property (nonatomic,readonly) AMSBagValue * bu_familyInfo; 
@property (nonatomic,readonly) AMSBagValue * bu_forgottenPassword; 
@property (nonatomic,readonly) AMSBagValue * bu_isAudiobooksStoreEnabled; 
@property (nonatomic,readonly) AMSBagValue * bu_isBooksStoreEnabled; 
@property (nonatomic,readonly) AMSBagValue * bu_ixStoreSheet; 
@property (nonatomic,readonly) AMSBagValue * bu_ixStoreSheetBooks; 
@property (nonatomic,readonly) AMSBagValue * bu_jsAppURL; 
@property (nonatomic,readonly) AMSBagValue * bu_kvsGetAll; 
@property (nonatomic,readonly) AMSBagValue * bu_kvsPutAll; 
@property (nonatomic,readonly) AMSBagValue * bu_language; 
@property (nonatomic,readonly) AMSBagValue * bu_languageTag; 
@property (nonatomic,readonly) AMSBagValue * bu_libraryLink; 
@property (nonatomic,readonly) AMSBagValue * bu_mdFinishProvisioning; 
@property (nonatomic,readonly) AMSBagValue * bu_mdSyncMachine; 
@property (nonatomic,readonly) AMSBagValue * bu_mediaAPITokenProviderURL; 
@property (nonatomic,readonly) AMSBagValue * bu_metrics; 
@property (nonatomic,readonly) AMSBagValue * bu_mobileNetworkConstraints; 
@property (nonatomic,readonly) AMSBagValue * bu_mobileURLHandlers; 
@property (nonatomic,readonly) AMSBagValue * bu_p2LaunchEbookstoreHostPatterns; 
@property (nonatomic,readonly) AMSBagValue * bu_p2LaunchEbookstorePathPatterns; 
@property (nonatomic,readonly) AMSBagValue * bu_p2LaunchAudioBookStorePathPatterns; 
@property (nonatomic,readonly) AMSBagValue * bu_p2ServiceTermsURL; 
@property (nonatomic,readonly) AMSBagValue * bu_privacyAcknowledgementURL; 
@property (nonatomic,readonly) AMSBagValue * bu_processRedirectURL; 
@property (nonatomic,readonly) AMSBagValue * bu_purchaseDAAP; 
@property (nonatomic,readonly) AMSBagValue * bu_readingGoalShareURL; 
@property (nonatomic,readonly) AMSBagValue * bu_remoteConfigSupportedStorefronts; 
@property (nonatomic,readonly) AMSBagValue * bu_resetAndRedirectURL; 
@property (nonatomic,readonly) AMSBagValue * bu_saveUserReviewURL; 
@property (nonatomic,readonly) AMSBagValue * bu_searchHints; 
@property (nonatomic,readonly) AMSBagValue * bu_signSAPRequest; 
@property (nonatomic,readonly) AMSBagValue * bu_signSAPSetup; 
@property (nonatomic,readonly) AMSBagValue * bu_signSAPSetupCert; 
@property (nonatomic,readonly) AMSBagValue * bu_songDownloadDone; 
@property (nonatomic,readonly) AMSBagValue * bu_storeFront; 
@property (nonatomic,readonly) AMSBagValue * bu_storePlatformLookupURLUnpersonalized; 
@property (nonatomic,readonly) AMSBagValue * bu_tafEmailBodyUrlBase; 
@property (nonatomic,readonly) AMSBagValue * bu_trendingSearches; 
@property (nonatomic,readonly) AMSBagValue * bu_trustedDomains; 
@property (nonatomic,readonly) AMSBagValue * bu_userRateContentURL; 
@property (nonatomic,readonly) AMSBagValue * bu_userReviewSortOptions; 
@property (nonatomic,readonly) AMSBagValue * bu_viewAudiobook; 
@property (nonatomic,readonly) AMSBagValue * bu_viewBook; 
@property (nonatomic,readonly) AMSBagValue * bu_viewBookUpdateParams; 
@property (nonatomic,readonly) AMSBagValue * bu_writeUserReviewURL; 
@property (nonatomic,readonly) AMSBagValue * bu_acquireSlotURL; 
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (nonatomic,copy,readonly) NSString * profile; 
@property (nonatomic,copy,readonly) NSString * profileVersion; 
@property (nonatomic,copy,readonly) AMSProcessInfo * processInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultBag;
+(id)defaultBagKeysDictionary;
+(id)_keySetWithDictionary:(id)arg1 ;
+(id)_defaultValueDictionary;
+(void)registerKeySetToDefaultBag:(id)arg1 ;
+(void)audiobookStoreIsAvailable:(/*^block*/id)arg1 ;
+(void)setRunFromOfflineCache:(BOOL)arg1 ;
+(void)setBagValuesFromOfflineCache:(id)arg1 ;
-(NSDate *)expirationDate;
-(id)boolForKey:(id)arg1 ;
-(id)integerForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)doubleForKey:(id)arg1 ;
-(id)URLForKey:(id)arg1 ;
-(BOOL)isExpired;
-(NSString *)profile;
-(NSString *)profileVersion;
-(void)createSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(AMSBagValue *)bu_isAudiobooksStoreEnabled;
-(AMSBagValue *)bu_addFundsURL;
-(AMSBagValue *)bu_allowCitations;
-(AMSBagValue *)bu_allowingCitations;
-(AMSBagValue *)bu_amdDomains;
-(AMSBagValue *)bu_amdFinishProvisioning;
-(AMSBagValue *)bu_amdSyncMachine;
-(AMSBagValue *)bu_appAnalyticsURL;
-(AMSBagValue *)bu_automaticDownloadQueueURL;
-(AMSBagValue *)bu_availableBookUpdates;
-(AMSBagValue *)bu_availableBookUpdatesReloadFrequency;
-(AMSBagValue *)bu_booksISBNURL;
-(AMSBagValue *)bu_booksMediaAPIHost;
-(AMSBagValue *)bu_booksMediaAPIPreviewHost;
-(AMSBagValue *)bu_booksTabs;
-(AMSBagValue *)bu_buyProduct;
-(AMSBagValue *)bu_contentRestoreMaxItemCount;
-(AMSBagValue *)bu_contentRestoreURL;
-(AMSBagValue *)bu_countryCode;
-(AMSBagValue *)bu_currencyCode;
-(AMSBagValue *)bu_deleteUserReviewUrl;
-(AMSBagValue *)bu_dtPurchasesPages;
-(AMSBagValue *)bu_endOfBookUpsellEnabled;
-(AMSBagValue *)bu_endOfPictureBookUpsellEnabled;
-(AMSBagValue *)bu_familyInfo;
-(AMSBagValue *)bu_forgottenPassword;
-(AMSBagValue *)bu_isBooksStoreEnabled;
-(AMSBagValue *)bu_ixStoreSheet;
-(AMSBagValue *)bu_ixStoreSheetBooks;
-(AMSBagValue *)bu_jsAppURL;
-(AMSBagValue *)bu_kvsGetAll;
-(AMSBagValue *)bu_kvsPutAll;
-(AMSBagValue *)bu_language;
-(AMSBagValue *)bu_languageTag;
-(AMSBagValue *)bu_libraryLink;
-(AMSBagValue *)bu_mdFinishProvisioning;
-(AMSBagValue *)bu_mdSyncMachine;
-(AMSBagValue *)bu_mediaAPITokenProviderURL;
-(AMSBagValue *)bu_metrics;
-(AMSBagValue *)bu_mobileNetworkConstraints;
-(AMSBagValue *)bu_mobileURLHandlers;
-(AMSBagValue *)bu_p2LaunchEbookstoreHostPatterns;
-(AMSBagValue *)bu_p2LaunchEbookstorePathPatterns;
-(AMSBagValue *)bu_p2LaunchAudioBookStorePathPatterns;
-(AMSBagValue *)bu_p2ServiceTermsURL;
-(AMSBagValue *)bu_privacyAcknowledgementURL;
-(AMSBagValue *)bu_processRedirectURL;
-(AMSBagValue *)bu_purchaseDAAP;
-(AMSBagValue *)bu_readingGoalShareURL;
-(AMSBagValue *)bu_remoteConfigSupportedStorefronts;
-(AMSBagValue *)bu_resetAndRedirectURL;
-(AMSBagValue *)bu_saveUserReviewURL;
-(AMSBagValue *)bu_searchHints;
-(AMSBagValue *)bu_signSAPRequest;
-(AMSBagValue *)bu_signSAPSetup;
-(AMSBagValue *)bu_signSAPSetupCert;
-(AMSBagValue *)bu_songDownloadDone;
-(AMSBagValue *)bu_storeFront;
-(AMSBagValue *)bu_storePlatformLookupURLUnpersonalized;
-(AMSBagValue *)bu_tafEmailBodyUrlBase;
-(AMSBagValue *)bu_trendingSearches;
-(AMSBagValue *)bu_trustedDomains;
-(AMSBagValue *)bu_userRateContentURL;
-(AMSBagValue *)bu_userReviewSortOptions;
-(AMSBagValue *)bu_viewAudiobook;
-(AMSBagValue *)bu_viewBook;
-(AMSBagValue *)bu_viewBookUpdateParams;
-(AMSBagValue *)bu_writeUserReviewURL;
-(AMSBagValue *)bu_acquireSlotURL;
@end

