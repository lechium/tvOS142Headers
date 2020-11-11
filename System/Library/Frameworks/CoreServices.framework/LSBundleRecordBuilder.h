/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:53 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/LSRecordBuilder.h>

@class LSRegistrationInfo, NSData, NSMutableDictionary, NSArray, NSNumber, NSString, NSURL, NSMutableSet, NSDictionary;

@interface LSBundleRecordBuilder : LSRecordBuilder {

	unsigned _bundleClass;
	LSRegistrationInfo* _registrationInfo;
	unsigned char _retries;
	unsigned _previousInstallType;
	unsigned long long _sequenceNumber;
	BOOL _registerChildItemsTrusted;
	NSData* _bundleAlias;
	unsigned long long _bundleFlags;
	unsigned _plistContentFlags;
	unsigned char _iconFlags;
	unsigned _itemFlags;
	unsigned short _archFlags;
	LSBundleMoreFlags _moreFlags;
	unsigned _platform;
	unsigned _hfsType;
	unsigned _hfsCreator;
	unsigned long long _inode;
	NSMutableDictionary* _plistRarities;
	NSMutableDictionary* _commonInfoPlistEntries;
	NSArray* _supportedGameControllers;
	BOOL _containerized;
	unsigned char _profileValidationState;
	NSNumber* _compatibilityState;
	NSNumber* _installFailureReason;
	NSString* _version;
	NSString* _minSystemVersion;
	NSString* _maxSystemVersion;
	NSString* _sdkVersion;
	NSString* _appStoreToolsBuildVersion;
	NSString* _shortVersionString;
	NSString* _execPath;
	NSArray* _machOUUIDs;
	NSNumber* _itemID;
	NSString* _teamID;
	NSArray* _activityTypes;
	NSArray* _deviceFamily;
	NSNumber* _installType;
	NSString* _identifier;
	NSString* _displayName;
	NSString* _shortDisplayName;
	NSString* _bundleName;
	NSArray* _alternateNames;
	NSURL* _dataContainerURL;
	NSURL* _bundleContainerURL;
	NSString* _categoryType;
	NSString* _secondCategoryType;
	NSString* _vendorName;
	NSString* _appType;
	NSString* _signerIdentity;
	NSString* _codeInfoIdentifier;
	NSString* _signerOrganization;
	NSString* _itemName;
	NSNumber* _storefront;
	NSNumber* _versionID;
	NSString* _sourceAppBundleID;
	NSString* _appVariant;
	NSMutableSet* _counterpartAppBundleIDs;
	NSString* _watchKitVersion;
	NSString* _complicationPrincipalClass;
	NSArray* _supportedComplicationFamilies;
	NSString* _ratingLabel;
	NSNumber* _ratingRank;
	NSString* _genre;
	NSNumber* _genreID;
	NSString* _primaryIconName;
	NSDictionary* _iconsDict;
	NSArray* _iconFileNames;
	NSNumber* _purchaserDSID;
	NSNumber* _downloaderDSID;
	NSNumber* _familyID;
	NSNumber* _staticDiskUsage;
	NSString* _libraryPath;
	NSArray* _libraryItems;
	NSArray* _documentClaims;
	NSArray* _URLClaims;
	NSArray* _importedTypes;
	NSArray* _exportedTypes;
	NSArray* _schemesWhitelist;
	NSDictionary* _pluginPlists;
	NSDictionary* _pluginMIDicts;
	NSDictionary* _groupContainers;
	NSDictionary* _entitlements;
	NSDictionary* _sandboxEnvironmentVariables;
	NSDictionary* _extensionSDK;
	NSDictionary* _intentDefinitionURLs;
	NSArray* _bgPermittedIdentifiers;
	NSDictionary* _localizedNames;
	NSDictionary* _localizedShortNames;
	NSDictionary* _localizedStrings;
	NSDictionary* _unlocalizedNamesWithContext;
	NSArray* _managedPersonas;
	NSNumber* _directoryClass;
	NSDictionary* _mobileInstallIDs;
	NSNumber* _signatureVersion;

}

@property (assign,nonatomic) unsigned char retries;                                     //@synthesize retries=_retries - In the implementation block
@property (assign,nonatomic) unsigned previousInstallType;                              //@synthesize previousInstallType=_previousInstallType - In the implementation block
@property (assign,nonatomic) unsigned long long sequenceNumber;                         //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,readonly) BOOL registerChildItemsTrusted;                          //@synthesize registerChildItemsTrusted=_registerChildItemsTrusted - In the implementation block
@property (nonatomic,readonly) BOOL containerized;                                      //@synthesize containerized=_containerized - In the implementation block
@property (nonatomic,readonly) NSNumber * compatibilityState;                           //@synthesize compatibilityState=_compatibilityState - In the implementation block
@property (nonatomic,readonly) NSNumber * installFailureReason;                         //@synthesize installFailureReason=_installFailureReason - In the implementation block
@property (nonatomic,readonly) NSString * version;                                      //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSString * minSystemVersion;                             //@synthesize minSystemVersion=_minSystemVersion - In the implementation block
@property (nonatomic,readonly) NSString * maxSystemVersion;                             //@synthesize maxSystemVersion=_maxSystemVersion - In the implementation block
@property (nonatomic,readonly) NSString * sdkVersion;                                   //@synthesize sdkVersion=_sdkVersion - In the implementation block
@property (nonatomic,readonly) NSString * appStoreToolsBuildVersion;                    //@synthesize appStoreToolsBuildVersion=_appStoreToolsBuildVersion - In the implementation block
@property (nonatomic,readonly) NSString * shortVersionString;                           //@synthesize shortVersionString=_shortVersionString - In the implementation block
@property (nonatomic,readonly) NSString * execPath;                                     //@synthesize execPath=_execPath - In the implementation block
@property (nonatomic,readonly) NSArray * machOUUIDs;                                    //@synthesize machOUUIDs=_machOUUIDs - In the implementation block
@property (nonatomic,readonly) NSNumber * itemID;                                       //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,readonly) NSString * teamID;                                       //@synthesize teamID=_teamID - In the implementation block
@property (nonatomic,readonly) NSArray * activityTypes;                                 //@synthesize activityTypes=_activityTypes - In the implementation block
@property (nonatomic,readonly) NSArray * deviceFamily;                                  //@synthesize deviceFamily=_deviceFamily - In the implementation block
@property (nonatomic,readonly) NSNumber * installType;                                  //@synthesize installType=_installType - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                                  //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSString * shortDisplayName;                             //@synthesize shortDisplayName=_shortDisplayName - In the implementation block
@property (nonatomic,readonly) NSString * bundleName;                                   //@synthesize bundleName=_bundleName - In the implementation block
@property (nonatomic,readonly) NSArray * alternateNames;                                //@synthesize alternateNames=_alternateNames - In the implementation block
@property (nonatomic,readonly) NSURL * dataContainerURL;                                //@synthesize dataContainerURL=_dataContainerURL - In the implementation block
@property (nonatomic,readonly) NSURL * bundleContainerURL;                              //@synthesize bundleContainerURL=_bundleContainerURL - In the implementation block
@property (nonatomic,readonly) NSString * categoryType;                                 //@synthesize categoryType=_categoryType - In the implementation block
@property (nonatomic,readonly) NSString * secondCategoryType;                           //@synthesize secondCategoryType=_secondCategoryType - In the implementation block
@property (nonatomic,readonly) NSString * vendorName;                                   //@synthesize vendorName=_vendorName - In the implementation block
@property (nonatomic,readonly) NSString * appType;                                      //@synthesize appType=_appType - In the implementation block
@property (nonatomic,readonly) NSString * signerIdentity;                               //@synthesize signerIdentity=_signerIdentity - In the implementation block
@property (nonatomic,readonly) NSString * codeInfoIdentifier;                           //@synthesize codeInfoIdentifier=_codeInfoIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * signerOrganization;                           //@synthesize signerOrganization=_signerOrganization - In the implementation block
@property (nonatomic,readonly) NSString * itemName;                                     //@synthesize itemName=_itemName - In the implementation block
@property (nonatomic,readonly) NSNumber * storefront;                                   //@synthesize storefront=_storefront - In the implementation block
@property (nonatomic,readonly) NSNumber * versionID;                                    //@synthesize versionID=_versionID - In the implementation block
@property (nonatomic,readonly) NSString * sourceAppBundleID;                            //@synthesize sourceAppBundleID=_sourceAppBundleID - In the implementation block
@property (nonatomic,readonly) NSString * appVariant;                                   //@synthesize appVariant=_appVariant - In the implementation block
@property (nonatomic,readonly) NSMutableSet * counterpartAppBundleIDs;                  //@synthesize counterpartAppBundleIDs=_counterpartAppBundleIDs - In the implementation block
@property (nonatomic,readonly) NSString * watchKitVersion;                              //@synthesize watchKitVersion=_watchKitVersion - In the implementation block
@property (nonatomic,readonly) NSString * complicationPrincipalClass;                   //@synthesize complicationPrincipalClass=_complicationPrincipalClass - In the implementation block
@property (nonatomic,readonly) NSArray * supportedComplicationFamilies;                 //@synthesize supportedComplicationFamilies=_supportedComplicationFamilies - In the implementation block
@property (nonatomic,readonly) NSString * ratingLabel;                                  //@synthesize ratingLabel=_ratingLabel - In the implementation block
@property (nonatomic,readonly) NSNumber * ratingRank;                                   //@synthesize ratingRank=_ratingRank - In the implementation block
@property (nonatomic,readonly) NSString * genre;                                        //@synthesize genre=_genre - In the implementation block
@property (nonatomic,readonly) NSNumber * genreID;                                      //@synthesize genreID=_genreID - In the implementation block
@property (nonatomic,readonly) NSString * primaryIconName;                              //@synthesize primaryIconName=_primaryIconName - In the implementation block
@property (nonatomic,readonly) NSDictionary * iconsDict;                                //@synthesize iconsDict=_iconsDict - In the implementation block
@property (nonatomic,readonly) NSArray * iconFileNames;                                 //@synthesize iconFileNames=_iconFileNames - In the implementation block
@property (nonatomic,readonly) NSNumber * purchaserDSID;                                //@synthesize purchaserDSID=_purchaserDSID - In the implementation block
@property (nonatomic,readonly) NSNumber * downloaderDSID;                               //@synthesize downloaderDSID=_downloaderDSID - In the implementation block
@property (nonatomic,readonly) NSNumber * familyID;                                     //@synthesize familyID=_familyID - In the implementation block
@property (nonatomic,readonly) NSNumber * staticDiskUsage;                              //@synthesize staticDiskUsage=_staticDiskUsage - In the implementation block
@property (nonatomic,readonly) NSString * libraryPath;                                  //@synthesize libraryPath=_libraryPath - In the implementation block
@property (nonatomic,readonly) NSArray * libraryItems;                                  //@synthesize libraryItems=_libraryItems - In the implementation block
@property (nonatomic,readonly) NSArray * documentClaims;                                //@synthesize documentClaims=_documentClaims - In the implementation block
@property (nonatomic,readonly) NSArray * URLClaims;                                     //@synthesize URLClaims=_URLClaims - In the implementation block
@property (nonatomic,readonly) NSArray * importedTypes;                                 //@synthesize importedTypes=_importedTypes - In the implementation block
@property (nonatomic,readonly) NSArray * exportedTypes;                                 //@synthesize exportedTypes=_exportedTypes - In the implementation block
@property (nonatomic,readonly) NSArray * schemesWhitelist;                              //@synthesize schemesWhitelist=_schemesWhitelist - In the implementation block
@property (nonatomic,readonly) NSDictionary * pluginPlists;                             //@synthesize pluginPlists=_pluginPlists - In the implementation block
@property (nonatomic,readonly) NSDictionary * pluginMIDicts;                            //@synthesize pluginMIDicts=_pluginMIDicts - In the implementation block
@property (nonatomic,readonly) NSDictionary * groupContainers;                          //@synthesize groupContainers=_groupContainers - In the implementation block
@property (nonatomic,readonly) NSDictionary * entitlements;                             //@synthesize entitlements=_entitlements - In the implementation block
@property (nonatomic,readonly) NSDictionary * sandboxEnvironmentVariables;              //@synthesize sandboxEnvironmentVariables=_sandboxEnvironmentVariables - In the implementation block
@property (nonatomic,readonly) NSDictionary * extensionSDK;                             //@synthesize extensionSDK=_extensionSDK - In the implementation block
@property (nonatomic,readonly) NSDictionary * intentDefinitionURLs;                     //@synthesize intentDefinitionURLs=_intentDefinitionURLs - In the implementation block
@property (nonatomic,readonly) NSArray * bgPermittedIdentifiers;                        //@synthesize bgPermittedIdentifiers=_bgPermittedIdentifiers - In the implementation block
@property (assign,nonatomic) unsigned char profileValidationState;                      //@synthesize profileValidationState=_profileValidationState - In the implementation block
@property (nonatomic,readonly) NSDictionary * localizedNames;                           //@synthesize localizedNames=_localizedNames - In the implementation block
@property (nonatomic,readonly) NSDictionary * localizedShortNames;                      //@synthesize localizedShortNames=_localizedShortNames - In the implementation block
@property (nonatomic,readonly) NSDictionary * localizedStrings;                         //@synthesize localizedStrings=_localizedStrings - In the implementation block
@property (nonatomic,readonly) NSDictionary * unlocalizedNamesWithContext;              //@synthesize unlocalizedNamesWithContext=_unlocalizedNamesWithContext - In the implementation block
@property (nonatomic,readonly) NSArray * managedPersonas;                               //@synthesize managedPersonas=_managedPersonas - In the implementation block
@property (nonatomic,readonly) NSNumber * directoryClass;                               //@synthesize directoryClass=_directoryClass - In the implementation block
@property (readonly) NSDictionary * mobileInstallIDs;                                   //@synthesize mobileInstallIDs=_mobileInstallIDs - In the implementation block
@property (readonly) NSNumber * signatureVersion;                                       //@synthesize signatureVersion=_signatureVersion - In the implementation block
-(NSString *)identifier;
-(NSString *)version;
-(NSString *)teamID;
-(NSString *)displayName;
-(unsigned long long)sequenceNumber;
-(NSString *)libraryPath;
-(NSString *)vendorName;
-(NSNumber *)itemID;
-(NSDictionary *)entitlements;
-(NSURL *)bundleContainerURL;
-(NSURL *)dataContainerURL;
-(NSString *)signerIdentity;
-(NSArray *)deviceFamily;
-(NSNumber *)ratingRank;
-(NSNumber *)purchaserDSID;
-(NSNumber *)downloaderDSID;
-(NSString *)sdkVersion;
-(NSString *)shortVersionString;
-(NSNumber *)signatureVersion;
-(void)setSequenceNumber:(unsigned long long)arg1 ;
-(NSNumber *)installType;
-(NSString *)bundleName;
-(unsigned char)retries;
-(NSString *)appType;
-(NSDictionary *)localizedNames;
-(NSString *)categoryType;
-(NSDictionary *)localizedStrings;
-(NSArray *)alternateNames;
-(NSString *)genre;
-(NSArray *)activityTypes;
-(NSDictionary *)intentDefinitionURLs;
-(void)setRetries:(unsigned char)arg1 ;
-(NSString *)sourceAppBundleID;
-(NSString *)ratingLabel;
-(NSNumber *)versionID;
-(NSArray *)machOUUIDs;
-(NSNumber *)storefront;
-(NSString *)itemName;
-(NSNumber *)compatibilityState;
-(NSNumber *)genreID;
-(NSNumber *)familyID;
-(NSNumber *)staticDiskUsage;
-(NSArray *)managedPersonas;
-(NSArray *)exportedTypes;
-(NSArray *)importedTypes;
-(NSString *)primaryIconName;
-(NSString *)complicationPrincipalClass;
-(NSNumber *)installFailureReason;
-(id)_LSBundleFlagMap;
-(void)addItemInfoFlag:(unsigned)arg1 ;
-(id)_LSPlistRaritiesMap;
-(id)_LSKeyTypeMap;
-(void)addPlistFlag:(unsigned)arg1 ;
-(void)addArchitectureFlag:(unsigned short)arg1 ;
-(void)addIconFlag:(unsigned char)arg1 ;
-(id)iconsDictionaryFromDict:(id)arg1 ;
-(void)setFlagsFromDictionary:(id)arg1 ;
-(void)setRaritiesFromDictionary:(id)arg1 ;
-(void)setCommonInfoPlistKeysFromDictionary:(id)arg1 ;
-(void)parseURLClaimsFromDict:(id)arg1 ;
-(void)parseIconFilenamesFromDict:(id)arg1 ;
-(void)parseDeviceFamilyFromDict:(id)arg1 ;
-(void)parseArchitecturesFromDict:(id)arg1 ;
-(void)setProfileValidationState:(unsigned char)arg1 ;
-(unsigned char)profileValidationState;
-(int)registerSchemesWhitelist:(id)arg1 bundleData:(LSBundleData*)arg2 ;
-(LSBundleData)buildBundleData:(id)arg1 error:(id*)arg2 ;
-(int)activateBindings:(id)arg1 unitID:(unsigned)arg2 bundleData:(const LSBundleData*)arg3 ;
-(unsigned)previousInstallType;
-(BOOL)containerized;
-(NSString *)minSystemVersion;
-(NSString *)maxSystemVersion;
-(NSString *)execPath;
-(NSString *)shortDisplayName;
-(NSString *)secondCategoryType;
-(NSString *)codeInfoIdentifier;
-(NSString *)appVariant;
-(NSMutableSet *)counterpartAppBundleIDs;
-(NSDictionary *)iconsDict;
-(NSArray *)iconFileNames;
-(NSArray *)libraryItems;
-(NSArray *)documentClaims;
-(NSArray *)URLClaims;
-(NSArray *)schemesWhitelist;
-(NSDictionary *)pluginPlists;
-(NSDictionary *)pluginMIDicts;
-(NSDictionary *)groupContainers;
-(NSDictionary *)sandboxEnvironmentVariables;
-(NSDictionary *)extensionSDK;
-(NSArray *)bgPermittedIdentifiers;
-(NSDictionary *)localizedShortNames;
-(NSDictionary *)unlocalizedNamesWithContext;
-(NSNumber *)directoryClass;
-(NSDictionary *)mobileInstallIDs;
-(void)setRegistrationInfo:(id)arg1 alias:(id)arg2 ;
-(void)setPreviousInstallType:(unsigned)arg1 ;
-(void)addBundleFlag:(unsigned long long)arg1 ;
-(BOOL)parseInfoPlist:(id)arg1 ;
-(BOOL)parseInstallationInfo:(id)arg1 ;
-(void)parseActivityTypesFromDictionary:(id)arg1 ;
-(void)parseNSExtensionSDKDefinitionsFromDictionary:(id)arg1 ;
-(unsigned)registerBundleRecord:(id)arg1 error:(id*)arg2 ;
-(BOOL)registerChildItemsTrusted;
-(NSString *)signerOrganization;
-(NSString *)appStoreToolsBuildVersion;
-(NSString *)watchKitVersion;
-(NSArray *)supportedComplicationFamilies;
@end

