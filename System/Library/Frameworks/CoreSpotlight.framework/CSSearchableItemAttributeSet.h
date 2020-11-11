/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:38 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSpotlight/CoreSpotlight-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSMutableDictionary, NSData, NSString, NSArray, NSNumber, NSDate;

@interface CSSearchableItemAttributeSet : NSObject <NSCopying, NSSecureCoding> {

	BOOL _hasCodedCustomAttributes;
	BOOL _hasKnownKeysDictionary;
	NSDictionary* _attributes;
	NSMutableDictionary* _mutableAttributes;
	NSMutableDictionary* _customAttributes;
	long long _searchableItemFlags;

}

@property (readonly) NSData * HTMLContentDataNoCopy; 
@property (readonly) NSString * textContentNoCopy; 
@property (copy) NSString * accountType; 
@property (copy) NSString * textSelected; 
@property (copy) NSString * subtitle; 
@property (copy) NSArray * userTags; 
@property (copy) NSString * albumPersistentID; 
@property (copy) NSString * adamID; 
@property (retain) NSNumber * extendedContentRating; 
@property (retain) NSNumber * fileIdentifier; 
@property (retain) NSNumber * parentFileIdentifier; 
@property (copy) NSString * filename; 
@property (retain) NSNumber * documentIdentifier; 
@property (retain) NSNumber * dataOwnerType; 
@property (getter=isExistingThread,retain) NSNumber * existingThread; 
@property (getter=isPartiallyDownloaded,retain) NSNumber * partiallyDownloaded; 
@property (readonly) NSArray * queryResultMatchedFields; 
@property (copy) NSString * uniqueIdentifier; 
@property (copy) NSString * bundleID; 
@property (copy) NSString * protectionClass; 
@property (retain) NSDate * expirationDate; 
@property (copy) NSString * userActivityType; 
@property (copy) NSString * queryResultRelevance; 
@property (copy) NSString * applicationName; 
@property (readonly) NSString * contentSnippet; 
@property (copy) NSString * relatedAppBundleIdentifier; 
@property (copy) NSArray * mailAttachmentNames; 
@property (copy) NSArray * mailAttachmentTypes; 
@property (copy) NSArray * mailAttachmentKinds; 
@property (retain) NSDate * mailDateReceived; 
@property (retain) NSDate * mailDateLastViewed; 
@property (retain) NSNumber * mailFlagged; 
@property (retain) NSNumber * mailFlagColor; 
@property (retain) NSNumber * mailRead; 
@property (retain) NSNumber * mailRepliedTo; 
@property (retain) NSNumber * mailPriority; 
@property (copy) NSArray * mailGMailLabels; 
@property (copy) NSString * mailMessageID; 
@property (copy) NSString * mailCategory; 
@property (copy) NSString * mailConversationID; 
@property (getter=isReaderView,nonatomic,retain) NSNumber * readerView; 
@property (copy) NSString * textContentDataSource; 
@property (copy) NSArray * autocompleteTriggers; 
@property (copy) NSString * fileProviderID; 
@property (copy) NSString * fileItemID; 
@property (copy) NSString * parentFileItemID; 
@property (copy) NSString * FPFilename; 
@property (copy) NSString * ownerName; 
@property (copy) NSString * ownerIdentifier; 
@property (copy) NSString * lastEditorName; 
@property (copy) NSString * lastEditorIdentifier; 
@property (copy) NSString * fileProviderDomaindentifier; 
@property (copy) NSString * fileProviderDomainIdentifier; 
@property (copy) NSArray * fileProviderUserInfoKeys; 
@property (copy) NSArray * fileProviderUserInfoValues; 
@property (getter=isPinned,nonatomic,retain) NSNumber * pinned; 
@property (getter=isTrashed,nonatomic,retain) NSNumber * trashed; 
@property (getter=isShared,nonatomic,retain) NSNumber * shared; 
@property (getter=isUploaded,nonatomic,retain) NSNumber * uploaded; 
@property (getter=isUploading,nonatomic,retain) NSNumber * uploading; 
@property (retain) NSNumber * uploadError; 
@property (getter=isDownloading,nonatomic,retain) NSNumber * downloading; 
@property (retain) NSNumber * downloadError; 
@property (copy) NSData * extraData; 
@property (retain) NSNumber * favoriteRank; 
@property (retain) NSNumber * subItemCount; 
@property (copy) NSString * sharedItemCurrentUserRole; 
@property (copy) NSString * versionIdentifier; 
@property (copy) NSString * downloadingStatus; 
@property (copy) NSData * intentData; 
@property (copy) NSString * suggestedInvocationPhrase; 
@property (retain) NSNumber * backgroundRunnable; 
@property (copy) NSString * punchoutLabel; 
@property (retain) NSNumber * shortcutAvailability; 
@property (copy) NSDate * lastApplicationLaunchedDate; 
@property (retain) NSNumber * isPlaceholder; 
@property (retain) NSNumber * isZombie; 
@property (readonly) NSMutableDictionary * mutableAttributes;                                //@synthesize mutableAttributes=_mutableAttributes - In the implementation block
@property (readonly) NSMutableDictionary * customAttributes;                                 //@synthesize customAttributes=_customAttributes - In the implementation block
@property (readonly) NSDictionary * attributes;                                              //@synthesize attributes=_attributes - In the implementation block
@property (assign) long long searchableItemFlags;                                            //@synthesize searchableItemFlags=_searchableItemFlags - In the implementation block
@property (nonatomic,readonly) BOOL hasCodedCustomAttributes;                                //@synthesize hasCodedCustomAttributes=_hasCodedCustomAttributes - In the implementation block
@property (nonatomic,readonly) BOOL hasKnownKeysDictionary;                                  //@synthesize hasKnownKeysDictionary=_hasKnownKeysDictionary - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_requiredAttributesForContentType:(id)arg1 ;
+(id)_allKeys;
+(id)_sharedAttributeKeySet;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)domainIdentifier;
-(id)identifier;
-(void)setTopic:(id)arg1 ;
-(NSString *)uniqueIdentifier;
-(id)URL;
-(id)path;
-(id)fileSize;
-(void)setPath:(id)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(void)setURL:(id)arg1 ;
-(id)bundleIdentifier;
-(id)version;
-(id)comment;
-(void)setIdentifier:(id)arg1 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(NSDictionary *)attributes;
-(NSMutableDictionary *)mutableAttributes;
-(id)executableArchitectures;
-(void)setVersion:(id)arg1 ;
-(id)timestamp;
-(id)endDate;
-(id)startDate;
-(id)duration;
-(id)title;
-(void)setTitle:(id)arg1 ;
-(id)keywords;
-(void)setKeywords:(id)arg1 ;
-(id)contentType;
-(void)setContentType:(id)arg1 ;
-(id)kind;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(id)displayName;
-(void)setKind:(id)arg1 ;
-(id)vendorName;
-(void)setSpeed:(id)arg1 ;
-(void)setDuration:(id)arg1 ;
-(id)speed;
-(void)setBundleIdentifier:(id)arg1 ;
-(id)latitude;
-(id)longitude;
-(void)setLongitude:(id)arg1 ;
-(void)setLatitude:(id)arg1 ;
-(id)orientation;
-(void)setOrientation:(id)arg1 ;
-(NSNumber *)isPlaceholder;
-(id)isLocal;
-(void)setDomainIdentifier:(id)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setStartDate:(id)arg1 ;
-(void)setEndDate:(id)arg1 ;
-(void)setTimestamp:(id)arg1 ;
-(NSString *)ownerName;
-(id)containerIdentifier;
-(void)setContainerIdentifier:(id)arg1 ;
-(id)isUploaded;
-(id)subject;
-(void)setSubject:(id)arg1 ;
-(NSString *)accountType;
-(void)setAccountType:(NSString *)arg1 ;
-(void)setAccountIdentifier:(id)arg1 ;
-(id)accountIdentifier;
-(id)topic;
-(void)setDisplayName:(id)arg1 ;
-(void)setDeliveryType:(id)arg1 ;
-(id)deliveryType;
-(id)role;
-(void)setRole:(id)arg1 ;
-(id)colorSpace;
-(void)setColorSpace:(id)arg1 ;
-(NSMutableDictionary *)customAttributes;
-(id)focalLength;
-(void)setFocalLength:(id)arg1 ;
-(void)setShared:(NSNumber *)arg1 ;
-(id)attributeForKey:(id)arg1 ;
-(id)thumbnailData;
-(void)setThumbnailData:(id)arg1 ;
-(void)setAltitude:(id)arg1 ;
-(id)altitude;
-(id)initWithAttributes:(id)arg1 ;
-(id)instructions;
-(void)setInstructions:(id)arg1 ;
-(void)setComment:(id)arg1 ;
-(id)supportsNavigation;
-(id)rating;
-(id)phoneNumbers;
-(id)languages;
-(void)setRating:(id)arg1 ;
-(id)performers;
-(void)setPerformers:(id)arg1 ;
-(id)country;
-(id)thoroughfare;
-(id)subThoroughfare;
-(id)publishers;
-(void)setCountry:(id)arg1 ;
-(void)setThoroughfare:(id)arg1 ;
-(void)setSubThoroughfare:(id)arg1 ;
-(void)setCity:(id)arg1 ;
-(void)setPostalCode:(id)arg1 ;
-(id)city;
-(id)postalCode;
-(void)setLanguages:(id)arg1 ;
-(long long)searchableItemFlags;
-(void)setSearchableItemFlags:(long long)arg1 ;
-(NSString *)protectionClass;
-(void)setProtectionClass:(NSString *)arg1 ;
-(id)attributeDictionary;
-(void)setUserActivityType:(NSString *)arg1 ;
-(void)setContentURL:(id)arg1 ;
-(NSString *)suggestedInvocationPhrase;
-(void)setSuggestedInvocationPhrase:(NSString *)arg1 ;
-(NSNumber *)shortcutAvailability;
-(void)setShortcutAvailability:(NSNumber *)arg1 ;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)addAttributesFromAttributeSet:(id)arg1 ;
-(void)setApplicationName:(NSString *)arg1 ;
-(id)initWithAttributeSet:(id)arg1 ;
-(NSString *)userActivityType;
-(id)contentTypeTree;
-(void)setContentTypeTree:(id)arg1 ;
-(id)emailHeaders;
-(id)contentURL;
-(NSNumber *)documentIdentifier;
-(NSString *)fileProviderID;
-(NSString *)fileItemID;
-(void)setDocumentIdentifier:(NSNumber *)arg1 ;
-(void)setParentFileIdentifier:(NSNumber *)arg1 ;
-(void)setFileIdentifier:(NSNumber *)arg1 ;
-(NSString *)FPFilename;
-(id)alternateNames;
-(void)setAlternateNames:(id)arg1 ;
-(id)authorNames;
-(id)emailAddresses;
-(id)authors;
-(id)primaryRecipients;
-(id)additionalRecipients;
-(id)hiddenAdditionalRecipients;
-(id)recipientNames;
-(id)recipientEmailAddresses;
-(void)setAuthorNames:(id)arg1 ;
-(void)setRecipientNames:(id)arg1 ;
-(id)HTMLContentData;
-(void)setHTMLContentData:(id)arg1 ;
-(id)textContent;
-(void)setTextContent:(id)arg1 ;
-(void)_standardizeMarkAs;
-(void)setAuthors:(id)arg1 ;
-(void)setPrimaryRecipients:(id)arg1 ;
-(id)initWithMutableDictionary:(id)arg1 ;
-(id)initWithItemContentType:(id)arg1 ;
-(void)_setNumberValue:(id)arg1 forKey:(id)arg2 ;
-(id)_getNonNullValueForKey:(id)arg1 ;
-(void)_setValue:(id)arg1 withClass:(Class)arg2 forKey:(id)arg3 copy:(BOOL)arg4 ;
-(id)customAttributeDictionary;
-(id)initWithKnownKeysDictionary:(id)arg1 ;
-(id)initWithContentType:(id)arg1 ;
-(void)setUserCreated:(id)arg1 ;
-(id)isUserCreated;
-(void)setUserOwned:(id)arg1 ;
-(id)isUserOwned;
-(void)setUserCurated:(id)arg1 ;
-(id)isUserCurated;
-(void)setRankingHint:(id)arg1 ;
-(id)rankingHint;
-(id)initWithSerializedAttributes:(id)arg1 ;
-(id)serializedAttributes;
-(BOOL)isValidAttributeSet;
-(id)requiredAttributes;
-(void)_setValue:(id)arg1 withClass:(Class)arg2 forKey:(id)arg3 ;
-(void)_setStringValue:(id)arg1 forKey:(id)arg2 ;
-(void)_setDataValue:(id)arg1 forKey:(id)arg2 ;
-(void)_setDateValue:(id)arg1 forKey:(id)arg2 ;
-(void)_setURLValue:(id)arg1 forKey:(id)arg2 ;
-(void)_setArrayValue:(id)arg1 withItemClass:(Class)arg2 forKey:(id)arg3 ;
-(void)incrementAttributeValue:(id)arg1 forKey:(id)arg2 ;
-(void)addAttributesFromDictionary:(id)arg1 ;
-(BOOL)hasCodedCustomAttributes;
-(BOOL)hasKnownKeysDictionary;
-(void)setAdditionalRecipients:(id)arg1 ;
-(void)setHiddenAdditionalRecipients:(id)arg1 ;
-(void)setEmailHeaders:(id)arg1 ;
-(void)setRelatedUniqueIdentifier:(id)arg1 ;
-(id)relatedUniqueIdentifier;
-(void)setWeakRelatedUniqueIdentifier:(id)arg1 ;
-(id)weakRelatedUniqueIdentifier;
-(void)setThumbnailURL:(id)arg1 ;
-(id)thumbnailURL;
-(void)setAccountHandles:(id)arg1 ;
-(id)accountHandles;
-(void)setMailboxIdentifiers:(id)arg1 ;
-(id)mailboxIdentifiers;
-(void)setMetadataModificationDate:(id)arg1 ;
-(id)metadataModificationDate;
-(void)setEditors:(id)arg1 ;
-(id)editors;
-(void)setParticipants:(id)arg1 ;
-(id)participants;
-(void)setAuthorEmailAddresses:(id)arg1 ;
-(id)authorEmailAddresses;
-(void)setRecipientEmailAddresses:(id)arg1 ;
-(void)setAuthorAddresses:(id)arg1 ;
-(id)authorAddresses;
-(void)setRecipientAddresses:(id)arg1 ;
-(id)recipientAddresses;
-(void)setProjects:(id)arg1 ;
-(id)projects;
-(void)setDownloadedDate:(id)arg1 ;
-(id)downloadedDate;
-(void)setContentSources:(id)arg1 ;
-(id)contentSources;
-(void)setCopyright:(id)arg1 ;
-(id)copyright;
-(void)setLastUsedDate:(id)arg1 ;
-(id)lastUsedDate;
-(void)setContentCreationDate:(id)arg1 ;
-(id)contentCreationDate;
-(void)setContentModificationDate:(id)arg1 ;
-(id)contentModificationDate;
-(void)setAddedDate:(id)arg1 ;
-(id)addedDate;
-(void)setContactKeywords:(id)arg1 ;
-(id)contactKeywords;
-(void)setPixelHeight:(id)arg1 ;
-(id)pixelHeight;
-(void)setPixelWidth:(id)arg1 ;
-(id)pixelWidth;
-(void)setPixelCount:(id)arg1 ;
-(id)pixelCount;
-(void)setBitsPerSample:(id)arg1 ;
-(id)bitsPerSample;
-(void)setFlashOn:(id)arg1 ;
-(id)isFlashOn;
-(void)setFocalLength35mm:(id)arg1 ;
-(id)isFocalLength35mm;
-(void)setAcquisitionMake:(id)arg1 ;
-(id)acquisitionMake;
-(void)setAcquisitionModel:(id)arg1 ;
-(id)acquisitionModel;
-(void)setCameraOwner:(id)arg1 ;
-(id)cameraOwner;
-(void)setLensModel:(id)arg1 ;
-(id)lensModel;
-(void)setISOSpeed:(id)arg1 ;
-(id)ISOSpeed;
-(void)setLayerNames:(id)arg1 ;
-(id)layerNames;
-(void)setWhiteBalance:(id)arg1 ;
-(id)whiteBalance;
-(void)setAperture:(id)arg1 ;
-(id)aperture;
-(void)setProfileName:(id)arg1 ;
-(id)profileName;
-(void)setResolutionWidthDPI:(id)arg1 ;
-(id)resolutionWidthDPI;
-(void)setResolutionHeightDPI:(id)arg1 ;
-(id)resolutionHeightDPI;
-(void)setExposureMode:(id)arg1 ;
-(id)exposureMode;
-(void)setExposureTime:(id)arg1 ;
-(id)exposureTime;
-(void)setEXIFVersion:(id)arg1 ;
-(id)EXIFVersion;
-(void)setEXIFGPSVersion:(id)arg1 ;
-(id)EXIFGPSVersion;
-(void)setCodecs:(id)arg1 ;
-(id)codecs;
-(void)setMediaTypes:(id)arg1 ;
-(id)mediaTypes;
-(void)setStreamable:(id)arg1 ;
-(id)isStreamable;
-(void)setTotalBitRate:(id)arg1 ;
-(id)totalBitRate;
-(void)setVideoBitRate:(id)arg1 ;
-(id)videoBitRate;
-(void)setAudioBitRate:(id)arg1 ;
-(id)audioBitRate;
-(void)setAlbum:(id)arg1 ;
-(id)album;
-(void)setArtist:(id)arg1 ;
-(id)artist;
-(void)setHasAlphaChannel:(id)arg1 ;
-(id)hasAlphaChannel;
-(void)setRedEyeOn:(id)arg1 ;
-(id)isRedEyeOn;
-(void)setMeteringMode:(id)arg1 ;
-(id)meteringMode;
-(void)setMaxAperture:(id)arg1 ;
-(id)maxAperture;
-(void)setFNumber:(id)arg1 ;
-(id)fNumber;
-(void)setExposureProgram:(id)arg1 ;
-(id)exposureProgram;
-(void)setExposureTimeString:(id)arg1 ;
-(id)exposureTimeString;
-(void)setHeadline:(id)arg1 ;
-(id)headline;
-(void)setStateOrProvince:(id)arg1 ;
-(id)stateOrProvince;
-(void)setFullyFormattedAddress:(id)arg1 ;
-(id)fullyFormattedAddress;
-(void)setSupportsNavigation:(id)arg1 ;
-(void)setImageDirection:(id)arg1 ;
-(id)imageDirection;
-(void)setNamedLocation:(id)arg1 ;
-(id)namedLocation;
-(void)setGPSTrack:(id)arg1 ;
-(id)GPSTrack;
-(void)setGPSStatus:(id)arg1 ;
-(id)GPSStatus;
-(void)setGPSMeasureMode:(id)arg1 ;
-(id)GPSMeasureMode;
-(void)setGPSDOP:(id)arg1 ;
-(id)GPSDOP;
-(void)setGPSMapDatum:(id)arg1 ;
-(id)GPSMapDatum;
-(void)setGPSDestLatitude:(id)arg1 ;
-(id)GPSDestLatitude;
-(void)setGPSDestLongitude:(id)arg1 ;
-(id)GPSDestLongitude;
-(void)setGPSDestBearing:(id)arg1 ;
-(id)GPSDestBearing;
-(void)setGPSDestDistance:(id)arg1 ;
-(id)GPSDestDistance;
-(void)setGPSProcessingMethod:(id)arg1 ;
-(id)GPSProcessingMethod;
-(void)setGPSAreaInformation:(id)arg1 ;
-(id)GPSAreaInformation;
-(void)setGPSDateStamp:(id)arg1 ;
-(id)GPSDateStamp;
-(void)setGPSDifferental:(id)arg1 ;
-(id)GPSDifferental;
-(void)setAudioSampleRate:(id)arg1 ;
-(id)audioSampleRate;
-(void)setAudioChannelCount:(id)arg1 ;
-(id)audioChannelCount;
-(void)setTempo:(id)arg1 ;
-(id)tempo;
-(void)setKeySignature:(id)arg1 ;
-(id)keySignature;
-(void)setTimeSignature:(id)arg1 ;
-(id)timeSignature;
-(void)setAudioEncodingApplication:(id)arg1 ;
-(id)audioEncodingApplication;
-(void)setComposer:(id)arg1 ;
-(id)composer;
-(void)setLyricist:(id)arg1 ;
-(id)lyricist;
-(void)setAudioTrackNumber:(id)arg1 ;
-(id)audioTrackNumber;
-(void)setRecordingDate:(id)arg1 ;
-(id)recordingDate;
-(void)setMusicalGenre:(id)arg1 ;
-(id)musicalGenre;
-(void)setGeneralMIDISequence:(id)arg1 ;
-(id)isGeneralMIDISequence;
-(void)setOrganizations:(id)arg1 ;
-(id)organizations;
-(void)setRights:(id)arg1 ;
-(id)rights;
-(void)setPublishers:(id)arg1 ;
-(void)setContributors:(id)arg1 ;
-(id)contributors;
-(void)setCoverage:(id)arg1 ;
-(id)coverage;
-(void)setTheme:(id)arg1 ;
-(id)theme;
-(void)setContentDescription:(id)arg1 ;
-(id)contentDescription;
-(void)setAudiences:(id)arg1 ;
-(id)audiences;
-(void)setPageCount:(id)arg1 ;
-(id)pageCount;
-(void)setFileSize:(id)arg1 ;
-(void)setPageWidth:(id)arg1 ;
-(id)pageWidth;
-(void)setPageHeight:(id)arg1 ;
-(id)pageHeight;
-(void)setSecurityMethod:(id)arg1 ;
-(id)securityMethod;
-(void)setCreator:(id)arg1 ;
-(id)creator;
-(void)setEncodingApplications:(id)arg1 ;
-(id)encodingApplications;
-(void)setDueDate:(id)arg1 ;
-(id)dueDate;
-(void)setCompletionDate:(id)arg1 ;
-(id)completionDate;
-(void)setImportantDates:(id)arg1 ;
-(id)importantDates;
-(void)setRatingDescription:(id)arg1 ;
-(id)ratingDescription;
-(void)setPlayCount:(id)arg1 ;
-(id)playCount;
-(void)setLocal:(id)arg1 ;
-(void)setContentRating:(id)arg1 ;
-(id)contentRating;
-(void)setPhoneNumbers:(id)arg1 ;
-(void)setSupportsPhoneCall:(id)arg1 ;
-(id)supportsPhoneCall;
-(void)setEmailAddresses:(id)arg1 ;
-(void)setInstantMessageAddresses:(id)arg1 ;
-(id)instantMessageAddresses;
-(void)setFinderComment:(id)arg1 ;
-(id)finderComment;
-(void)setCalendarHolidayIdentifier:(id)arg1 ;
-(id)calendarHolidayIdentifier;
-(void)setFontNames:(id)arg1 ;
-(id)fontNames;
-(void)setAppleLoopsRootKey:(id)arg1 ;
-(id)appleLoopsRootKey;
-(void)setAppleLoopsKeyFilterType:(id)arg1 ;
-(id)appleLoopsKeyFilterType;
-(void)setAppleLoopsLoopMode:(id)arg1 ;
-(id)appleLoopsLoopMode;
-(void)setAppleLoopDescriptors:(id)arg1 ;
-(id)appleLoopDescriptors;
-(void)setMusicalInstrumentCategory:(id)arg1 ;
-(id)musicalInstrumentCategory;
-(void)setMusicalInstrumentName:(id)arg1 ;
-(id)musicalInstrumentName;
-(void)setExecutableArchitectures:(id)arg1 ;
-(void)setExecutablePlatform:(id)arg1 ;
-(id)executablePlatform;
-(void)setVendorName:(id)arg1 ;
-(void)setApplicationCategories:(id)arg1 ;
-(id)applicationCategories;
-(void)setApplicationManaged:(id)arg1 ;
-(id)isApplicationManaged;
-(void)setSupportFileType:(id)arg1 ;
-(id)supportFileType;
-(void)setInformation:(id)arg1 ;
-(id)information;
-(void)setDirector:(id)arg1 ;
-(id)director;
-(void)setProducer:(id)arg1 ;
-(id)producer;
-(void)setGenre:(id)arg1 ;
-(id)genre;
-(void)setOriginalFormat:(id)arg1 ;
-(id)originalFormat;
-(void)setOriginalSource:(id)arg1 ;
-(id)originalSource;
-(void)setLikelyJunk:(id)arg1 ;
-(id)isLikelyJunk;
-(void)setProviderDataTypes:(id)arg1 ;
-(id)providerDataTypes;
-(void)setProviderFileTypes:(id)arg1 ;
-(id)providerFileTypes;
-(void)setProviderDataTypeIdentifiers:(id)arg1 ;
-(id)providerDataTypeIdentifiers;
-(void)setProviderFileTypeIdentifiers:(id)arg1 ;
-(id)providerFileTypeIdentifiers;
-(void)setProviderInPlaceFileTypeIdentifiers:(id)arg1 ;
-(id)providerInPlaceFileTypeIdentifiers;
-(void)setCalendarDelegateIdentifier:(id)arg1 ;
-(id)calendarDelegateIdentifier;
-(NSData *)HTMLContentDataNoCopy;
-(NSString *)textContentNoCopy;
-(void)setTextSelected:(NSString *)arg1 ;
-(NSString *)textSelected;
-(void)setUserTags:(NSArray *)arg1 ;
-(NSArray *)userTags;
-(void)setAlbumPersistentID:(NSString *)arg1 ;
-(NSString *)albumPersistentID;
-(void)setAdamID:(NSString *)arg1 ;
-(NSString *)adamID;
-(void)setExtendedContentRating:(NSNumber *)arg1 ;
-(NSNumber *)extendedContentRating;
-(NSNumber *)fileIdentifier;
-(NSNumber *)parentFileIdentifier;
-(void)setDataOwnerType:(NSNumber *)arg1 ;
-(NSNumber *)dataOwnerType;
-(void)setExistingThread:(NSNumber *)arg1 ;
-(id)isExistingThread;
-(void)setPartiallyDownloaded:(NSNumber *)arg1 ;
-(id)isPartiallyDownloaded;
-(void)setQueryResultMatchedFields:(NSArray *)arg1 ;
-(NSArray *)queryResultMatchedFields;
-(NSString *)applicationName;
-(NSString *)contentSnippet;
-(void)setQueryResultRelevance:(NSString *)arg1 ;
-(NSString *)queryResultRelevance;
-(void)setRelatedAppBundleIdentifier:(NSString *)arg1 ;
-(NSString *)relatedAppBundleIdentifier;
-(void)setAttachmentNames:(id)arg1 ;
-(id)attachmentNames;
-(void)setAttachmentTypes:(id)arg1 ;
-(id)attachmentTypes;
-(void)setAttachmentPaths:(id)arg1 ;
-(id)attachmentPaths;
-(void)setMailAttachmentNames:(NSArray *)arg1 ;
-(NSArray *)mailAttachmentNames;
-(void)setMailAttachmentTypes:(NSArray *)arg1 ;
-(NSArray *)mailAttachmentTypes;
-(void)setMailAttachmentKinds:(NSArray *)arg1 ;
-(NSArray *)mailAttachmentKinds;
-(void)setMailDateReceived:(NSDate *)arg1 ;
-(NSDate *)mailDateReceived;
-(void)setMailDateLastViewed:(NSDate *)arg1 ;
-(NSDate *)mailDateLastViewed;
-(void)setMailFlagged:(NSNumber *)arg1 ;
-(NSNumber *)mailFlagged;
-(void)setMailFlagColor:(NSNumber *)arg1 ;
-(NSNumber *)mailFlagColor;
-(void)setMailRead:(NSNumber *)arg1 ;
-(NSNumber *)mailRead;
-(void)setMailRepliedTo:(NSNumber *)arg1 ;
-(NSNumber *)mailRepliedTo;
-(void)setMailPriority:(NSNumber *)arg1 ;
-(NSNumber *)mailPriority;
-(void)setMailGMailLabels:(NSArray *)arg1 ;
-(NSArray *)mailGMailLabels;
-(void)setMailMessageID:(NSString *)arg1 ;
-(NSString *)mailMessageID;
-(void)setMailCategory:(NSString *)arg1 ;
-(NSString *)mailCategory;
-(void)setMailConversationID:(NSString *)arg1 ;
-(NSString *)mailConversationID;
-(void)setReaderView:(NSNumber *)arg1 ;
-(id)isReaderView;
-(void)setTextContentDataSource:(NSString *)arg1 ;
-(NSString *)textContentDataSource;
-(NSArray *)autocompleteTriggers;
-(void)setAutocompleteTriggers:(NSArray *)arg1 ;
-(void)setFileProviderDomainIdentifier:(NSString *)arg1 ;
-(NSString *)fileProviderDomainIdentifier;
-(void)_markAs:(int)arg1 date:(id)arg2 sender:(id)arg3 senderHandle:(id)arg4 recipients:(id)arg5 recipientHandles:(id)arg6 transport:(id)arg7 ;
-(void)_markAs:(id)arg1 userHandle:(id)arg2 dateKey:(id)arg3 userHandleKey:(id)arg4 ;
-(id)userSharedSentDate;
-(id)userSharedSentSender;
-(id)userSharedSentSenderHandle;
-(id)userSharedSentTransport;
-(id)userSharedSentRecipient;
-(id)userSharedSentRecipientHandle;
-(id)userSharedReceivedDate;
-(id)userSharedReceivedSender;
-(id)userSharedReceivedSenderHandle;
-(id)userSharedReceivedTransport;
-(id)userSharedReceivedRecipient;
-(id)userSharedReceivedRecipientHandle;
-(id)userPrintedDate;
-(id)userPrintedUserHandle;
-(id)userDownloadedDate;
-(id)userDownloadedUserHandle;
-(id)userModifiedDate;
-(id)userModifiedUserHandle;
-(id)userCreatedDate;
-(id)userCreatedUserHandle;
-(void)setFileProviderID:(NSString *)arg1 ;
-(void)setFileItemID:(NSString *)arg1 ;
-(void)setFPFilename:(NSString *)arg1 ;
-(NSString *)parentFileItemID;
-(void)setParentFileItemID:(NSString *)arg1 ;
-(void)setOwnerName:(NSString *)arg1 ;
-(void)setOwnerIdentifier:(NSString *)arg1 ;
-(NSString *)ownerIdentifier;
-(void)setLastEditorName:(NSString *)arg1 ;
-(NSString *)lastEditorName;
-(void)setLastEditorIdentifier:(NSString *)arg1 ;
-(NSString *)lastEditorIdentifier;
-(void)setFileProviderDomaindentifier:(NSString *)arg1 ;
-(NSString *)fileProviderDomaindentifier;
-(void)setFileProviderUserInfoKeys:(NSArray *)arg1 ;
-(NSArray *)fileProviderUserInfoKeys;
-(void)setFileProviderUserInfoValues:(NSArray *)arg1 ;
-(NSArray *)fileProviderUserInfoValues;
-(void)setTrashed:(NSNumber *)arg1 ;
-(id)isTrashed;
-(id)isShared;
-(id)isPinned;
-(void)setIsPinned:(id)arg1 ;
-(void)setUploaded:(NSNumber *)arg1 ;
-(void)setUploading:(NSNumber *)arg1 ;
-(id)isUploading;
-(void)setUploadError:(NSNumber *)arg1 ;
-(NSNumber *)uploadError;
-(void)setDownloading:(NSNumber *)arg1 ;
-(id)isDownloading;
-(void)setDownloadError:(NSNumber *)arg1 ;
-(NSNumber *)downloadError;
-(void)setExtraData:(NSData *)arg1 ;
-(NSData *)extraData;
-(void)setFavoriteRank:(NSNumber *)arg1 ;
-(NSNumber *)favoriteRank;
-(void)setSubItemCount:(NSNumber *)arg1 ;
-(NSNumber *)subItemCount;
-(void)setSharedItemCurrentUserRole:(NSString *)arg1 ;
-(NSString *)sharedItemCurrentUserRole;
-(void)setDownloadingStatus:(NSString *)arg1 ;
-(NSString *)downloadingStatus;
-(void)setVersionIdentifier:(NSString *)arg1 ;
-(NSString *)versionIdentifier;
-(void)markAsSent:(id)arg1 sender:(id)arg2 senderHandle:(id)arg3 recipients:(id)arg4 recipientHandles:(id)arg5 transport:(id)arg6 ;
-(void)markAsReceived:(id)arg1 sender:(id)arg2 senderHandle:(id)arg3 recipients:(id)arg4 recipientHandles:(id)arg5 transport:(id)arg6 ;
-(void)markAsPrinted:(id)arg1 userHandle:(id)arg2 ;
-(void)markAsDownloaded:(id)arg1 userHandle:(id)arg2 ;
-(void)markAsModified:(id)arg1 userHandle:(id)arg2 ;
-(void)markAsCreated:(id)arg1 userHandle:(id)arg2 ;
-(void)setIntentData:(NSData *)arg1 ;
-(NSData *)intentData;
-(NSNumber *)backgroundRunnable;
-(void)setBackgroundRunnable:(NSNumber *)arg1 ;
-(void)setPunchoutLabel:(NSString *)arg1 ;
-(NSString *)punchoutLabel;
-(NSDate *)lastApplicationLaunchedDate;
-(void)setLastApplicationLaunchedDate:(NSDate *)arg1 ;
-(void)setIsPlaceholder:(NSNumber *)arg1 ;
-(NSNumber *)isZombie;
-(void)setIsZombie:(NSNumber *)arg1 ;
-(void)setContainerTitle:(id)arg1 ;
-(id)containerTitle;
-(void)setContainerDisplayName:(id)arg1 ;
-(id)containerDisplayName;
-(void)setContainerOrder:(id)arg1 ;
-(id)containerOrder;
-(void)setAllDay:(id)arg1 ;
-(id)allDay;
-(void)setValue:(id)arg1 forCustomKey:(id)arg2 ;
-(id)valueForCustomKey:(id)arg1 ;
@end

