/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:11 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PKPaymentSetupProductConfiguration, NSSet, NSArray, NSURL, NSDictionary, PKPaymentSetupProductImageAssetURLs, PKPaymentSetupProductImageAssets, NSExtension, NSString, NSMutableDictionary;

@interface PKPaymentSetupProduct : NSObject <NSCopying> {

	BOOL _suppressPendingPurchases;
	BOOL _meetsAgeRequirements;
	BOOL _provisioningExtensionRequiresAuthorization;
	BOOL _hasAccount;
	PKPaymentSetupProductConfiguration* _configuration;
	NSSet* _regions;
	NSArray* _requiredFields;
	NSArray* _supportedProtocols;
	NSURL* _termsURL;
	long long _supportedProvisioningMethods;
	NSDictionary* _readerModeMetadata;
	unsigned long long _flags;
	long long _hsa2Requirement;
	PKPaymentSetupProductImageAssetURLs* _imageAssetURLs;
	PKPaymentSetupProductImageAssets* _imageAssets;
	long long _minimumSupportedAge;
	long long _maximumSupportedAge;
	NSArray* _associatedStoreIdentifiers;
	NSURL* _appLaunchURL;
	NSArray* _searchTerms;
	NSArray* _supportedCameraCaptureTypes;
	NSArray* _supportedInAppTypes;
	NSArray* _supportedTransitNetworkIdentifiers;
	NSExtension* _provisioningExtension;
	NSArray* _featureApplications;
	NSArray* _onboardingItems;
	NSString* _regionIdentifier;
	NSArray* _paymentOptions;
	NSDictionary* _rawDictionary;
	NSDictionary* _minimumOSVersion;
	NSMutableDictionary* _requestedProvisioningMethods;
	NSString* _displayName;

}

@property (nonatomic,copy) NSSet * regions;                                                          //@synthesize regions=_regions - In the implementation block
@property (nonatomic,copy) NSArray * requiredFields;                                                 //@synthesize requiredFields=_requiredFields - In the implementation block
@property (nonatomic,copy) NSArray * supportedProtocols;                                             //@synthesize supportedProtocols=_supportedProtocols - In the implementation block
@property (nonatomic,copy) NSURL * termsURL;                                                         //@synthesize termsURL=_termsURL - In the implementation block
@property (nonatomic,copy) NSArray * associatedStoreIdentifiers;                                     //@synthesize associatedStoreIdentifiers=_associatedStoreIdentifiers - In the implementation block
@property (nonatomic,copy) NSURL * appLaunchURL;                                                     //@synthesize appLaunchURL=_appLaunchURL - In the implementation block
@property (nonatomic,retain) NSDictionary * minimumOSVersion;                                        //@synthesize minimumOSVersion=_minimumOSVersion - In the implementation block
@property (nonatomic,copy) NSDictionary * rawDictionary;                                             //@synthesize rawDictionary=_rawDictionary - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * requestedProvisioningMethods;                     //@synthesize requestedProvisioningMethods=_requestedProvisioningMethods - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                                   //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) unsigned long long flags;                                               //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) long long hsa2Requirement;                                              //@synthesize hsa2Requirement=_hsa2Requirement - In the implementation block
@property (assign,nonatomic) long long minimumSupportedAge;                                          //@synthesize minimumSupportedAge=_minimumSupportedAge - In the implementation block
@property (assign,nonatomic) long long maximumSupportedAge;                                          //@synthesize maximumSupportedAge=_maximumSupportedAge - In the implementation block
@property (assign,nonatomic) BOOL meetsAgeRequirements;                                              //@synthesize meetsAgeRequirements=_meetsAgeRequirements - In the implementation block
@property (nonatomic,retain) NSArray * featureApplications;                                          //@synthesize featureApplications=_featureApplications - In the implementation block
@property (assign,nonatomic) BOOL hasAccount;                                                        //@synthesize hasAccount=_hasAccount - In the implementation block
@property (nonatomic,retain) NSArray * onboardingItems;                                              //@synthesize onboardingItems=_onboardingItems - In the implementation block
@property (nonatomic,copy,readonly) PKPaymentSetupProductConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy,readonly) NSString * partnerName; 
@property (assign,nonatomic) long long supportedProvisioningMethods;                                 //@synthesize supportedProvisioningMethods=_supportedProvisioningMethods - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * readerModeMetadata;                               //@synthesize readerModeMetadata=_readerModeMetadata - In the implementation block
@property (nonatomic,readonly) PKPaymentSetupProductImageAssetURLs * imageAssetURLs;                 //@synthesize imageAssetURLs=_imageAssetURLs - In the implementation block
@property (nonatomic,readonly) PKPaymentSetupProductImageAssets * imageAssets;                       //@synthesize imageAssets=_imageAssets - In the implementation block
@property (nonatomic,readonly) BOOL suppressPendingPurchases;                                        //@synthesize suppressPendingPurchases=_suppressPendingPurchases - In the implementation block
@property (nonatomic,copy,readonly) NSArray * searchTerms;                                           //@synthesize searchTerms=_searchTerms - In the implementation block
@property (nonatomic,copy,readonly) NSArray * supportedCameraCaptureTypes;                           //@synthesize supportedCameraCaptureTypes=_supportedCameraCaptureTypes - In the implementation block
@property (nonatomic,copy,readonly) NSArray * supportedInAppTypes;                                   //@synthesize supportedInAppTypes=_supportedInAppTypes - In the implementation block
@property (nonatomic,copy,readonly) NSArray * supportedTransitNetworkIdentifiers;                    //@synthesize supportedTransitNetworkIdentifiers=_supportedTransitNetworkIdentifiers - In the implementation block
@property (nonatomic,readonly) NSExtension * provisioningExtension;                                  //@synthesize provisioningExtension=_provisioningExtension - In the implementation block
@property (nonatomic,readonly) BOOL provisioningExtensionRequiresAuthorization;                      //@synthesize provisioningExtensionRequiresAuthorization=_provisioningExtensionRequiresAuthorization - In the implementation block
@property (nonatomic,copy,readonly) NSString * regionIdentifier;                                     //@synthesize regionIdentifier=_regionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * paymentOptions;                                        //@synthesize paymentOptions=_paymentOptions - In the implementation block
+(void)_updateProduct:(id)arg1 withDebugConfigurationForState:(unsigned long long)arg2 ;
+(id)partnerProductsFromArrayOfPartners:(id)arg1 andProducts:(id)arg2 ;
+(id)_displayNameForCardType:(id)arg1 ;
+(id)_inAppProvisioningURLWthScheme:(id)arg1 path:(id)arg2 ;
+(id)productsFromBrowseableBankApps:(id)arg1 ;
+(id)productForIssuerProvisioningExtension:(id)arg1 withStatus:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)flags;
-(PKPaymentSetupProductConfiguration *)configuration;
-(NSString *)displayName;
-(void)setFlags:(unsigned long long)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSSet *)regions;
-(NSDictionary *)rawDictionary;
-(void)setRegions:(NSSet *)arg1 ;
-(NSArray *)searchTerms;
-(id)productIdentifier;
-(id)initWithFeatureIdentifier:(unsigned long long)arg1 ;
-(NSArray *)supportedTransitNetworkIdentifiers;
-(id)partnerIdentifier;
-(NSString *)partnerName;
-(NSArray *)requiredFields;
-(NSDictionary *)readerModeMetadata;
-(NSURL *)termsURL;
-(void)setTermsURL:(NSURL *)arg1 ;
-(long long)supportedProvisioningMethods;
-(id)provisioningMethodMetadataForType:(id)arg1 ;
-(NSString *)regionIdentifier;
-(void)setHasAccount:(BOOL)arg1 ;
-(void)setFeatureApplications:(NSArray *)arg1 ;
-(id)provisioningMethodTypes;
-(void)setProvisioningMethodMetadata:(id)arg1 forType:(id)arg2 ;
-(NSArray *)paymentOptions;
-(BOOL)suppressPendingPurchases;
-(NSExtension *)provisioningExtension;
-(long long)allSupportedProtocols;
-(long long)minimumSupportedAge;
-(void)setMeetsAgeRequirements:(BOOL)arg1 ;
-(NSArray *)featureApplications;
-(NSDictionary *)minimumOSVersion;
-(NSURL *)appLaunchURL;
-(void)setRequiredFields:(NSArray *)arg1 ;
-(void)setAppLaunchURL:(NSURL *)arg1 ;
-(NSArray *)supportedProtocols;
-(id)initWithProductDictionary:(id)arg1 ;
-(BOOL)supportsOSVersion:(id)arg1 deviceClass:(id)arg2 ;
-(BOOL)supportsDevice:(id)arg1 ;
-(void)setSupportedProtocols:(NSArray *)arg1 ;
-(void)setSupportedProvisioningMethods:(long long)arg1 ;
-(long long)hsa2Requirement;
-(void)setHsa2Requirement:(long long)arg1 ;
-(PKPaymentSetupProductImageAssetURLs *)imageAssetURLs;
-(PKPaymentSetupProductImageAssets *)imageAssets;
-(void)setMinimumSupportedAge:(long long)arg1 ;
-(long long)maximumSupportedAge;
-(void)setMaximumSupportedAge:(long long)arg1 ;
-(BOOL)meetsAgeRequirements;
-(NSArray *)associatedStoreIdentifiers;
-(void)setAssociatedStoreIdentifiers:(NSArray *)arg1 ;
-(NSArray *)supportedCameraCaptureTypes;
-(NSArray *)supportedInAppTypes;
-(BOOL)provisioningExtensionRequiresAuthorization;
-(BOOL)hasAccount;
-(NSArray *)onboardingItems;
-(void)setOnboardingItems:(NSArray *)arg1 ;
-(void)setRawDictionary:(NSDictionary *)arg1 ;
-(void)setMinimumOSVersion:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)requestedProvisioningMethods;
-(void)setRequestedProvisioningMethods:(NSMutableDictionary *)arg1 ;
-(id)_initWithDisplayName:(id)arg1 partnerDictionary:(id)arg2 productIdentifier:(id)arg3 paymentOptions:(id)arg4 termsURL:(id)arg5 provisioningMethods:(id)arg6 readerModeMetadata:(id)arg7 requiredFields:(id)arg8 imageAssets:(id)arg9 minimumOSVersion:(id)arg10 region:(id)arg11 hsa2Requirement:(id)arg12 suppressPendingPurchases:(id)arg13 supportedTransitNetworkIdentifiers:(id)arg14 onboardingItems:(id)arg15 actionBaseURL:(id)arg16 productState:(id)arg17 minimumProductAge:(id)arg18 maximumProductAge:(id)arg19 associatedStoreIdentifiers:(id)arg20 appLaunchURL:(id)arg21 regionIdentifier:(id)arg22 type:(id)arg23 localizedNotificationTitle:(id)arg24 localizedNotificationMessage:(id)arg25 ;
-(void)didAuthorizeProvisioningExtension;
@end

