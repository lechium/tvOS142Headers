/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:13 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDAnalyticMetadata, NSMutableArray, GEOPDClientMetadata, NSString, NSData, GEOPDPlaceRequestParameters;

@interface GEOPDPlaceRequest : PBRequest <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDAnalyticMetadata* _analyticMetadata;
	NSMutableArray* _auxiliaryTierRequestedComponents;
	GEOPDClientMetadata* _clientMetadata;
	NSMutableArray* _displayLanguages;
	NSString* _displayRegion;
	NSData* _handleData;
	GEOPDPlaceRequestParameters* _placeRequestParameters;
	NSMutableArray* _requestedComponents;
	NSMutableArray* _spokenLanguages;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _requestType;
	BOOL _needLatency;
	BOOL _suppressResultsRequiringAttribution;
	struct {
		unsigned has_requestType : 1;
		unsigned has_needLatency : 1;
		unsigned has_suppressResultsRequiringAttribution : 1;
		unsigned read_unknownFields : 1;
		unsigned read_analyticMetadata : 1;
		unsigned read_auxiliaryTierRequestedComponents : 1;
		unsigned read_clientMetadata : 1;
		unsigned read_displayLanguages : 1;
		unsigned read_displayRegion : 1;
		unsigned read_handleData : 1;
		unsigned read_placeRequestParameters : 1;
		unsigned read_requestedComponents : 1;
		unsigned read_spokenLanguages : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasNeedLatency; 
@property (assign,nonatomic) BOOL needLatency; 
@property (nonatomic,readonly) BOOL hasHandleData; 
@property (nonatomic,retain) NSData * handleData; 
@property (nonatomic,readonly) BOOL hasAnalyticMetadata; 
@property (nonatomic,retain) GEOPDAnalyticMetadata * analyticMetadata; 
@property (nonatomic,readonly) BOOL hasClientMetadata; 
@property (nonatomic,retain) GEOPDClientMetadata * clientMetadata; 
@property (nonatomic,retain) NSMutableArray * displayLanguages; 
@property (nonatomic,retain) NSMutableArray * spokenLanguages; 
@property (nonatomic,retain) NSMutableArray * requestedComponents; 
@property (assign,nonatomic) BOOL hasSuppressResultsRequiringAttribution; 
@property (assign,nonatomic) BOOL suppressResultsRequiringAttribution; 
@property (assign,nonatomic) BOOL hasRequestType; 
@property (assign,nonatomic) int requestType; 
@property (nonatomic,readonly) BOOL hasPlaceRequestParameters; 
@property (nonatomic,retain) GEOPDPlaceRequestParameters * placeRequestParameters; 
@property (nonatomic,readonly) BOOL hasDisplayRegion; 
@property (nonatomic,retain) NSString * displayRegion; 
@property (nonatomic,retain) NSMutableArray * auxiliaryTierRequestedComponents; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)displayLanguageType;
+(Class)spokenLanguageType;
+(Class)requestedComponentType;
+(Class)auxiliaryTierRequestedComponentType;
+(id)photoLookupRequestWithVendorIdentifier:(id)arg1 mapItemIdentifier:(id)arg2 range:(NSRange)arg3 traits:(id)arg4 ;
+(id)createRequestedComponentsForReason:(unsigned long long)arg1 traits:(id)arg2 count:(unsigned)arg3 ;
+(id)componentInfoWithType:(int)arg1 count:(unsigned)arg2 traits:(id)arg3 ;
+(id)collectionComponentInfoForReason:(unsigned long long)arg1 count:(unsigned)arg2 traits:(id)arg3 ;
+(id)publisherComponentInfoForReason:(unsigned long long)arg1 count:(unsigned)arg2 traits:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(int)requestType;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRequestType:(int)arg1 ;
-(void)setHasRequestType:(BOOL)arg1 ;
-(BOOL)hasRequestType;
-(id)requestTypeAsString:(int)arg1 ;
-(int)StringAsRequestType:(id)arg1 ;
-(GEOPDPlaceRequestParameters *)placeRequestParameters;
-(NSMutableArray *)displayLanguages;
-(id)cacheKey;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(int)resultProviderID;
-(GEOPDClientMetadata *)clientMetadata;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)clearSensitiveFields;
-(GEOPDAnalyticMetadata *)analyticMetadata;
-(void)setAnalyticMetadata:(GEOPDAnalyticMetadata *)arg1 ;
-(void)setClientMetadata:(GEOPDClientMetadata *)arg1 ;
-(void)addDisplayLanguage:(id)arg1 ;
-(unsigned long long)displayLanguagesCount;
-(void)clearDisplayLanguages;
-(id)displayLanguageAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasAnalyticMetadata;
-(BOOL)hasClientMetadata;
-(void)setDisplayLanguages:(NSMutableArray *)arg1 ;
-(NSMutableArray *)spokenLanguages;
-(NSString *)displayRegion;
-(NSData *)handleData;
-(void)addSpokenLanguage:(id)arg1 ;
-(void)addRequestedComponent:(id)arg1 ;
-(void)setSuppressResultsRequiringAttribution:(BOOL)arg1 ;
-(void)setPlaceRequestParameters:(GEOPDPlaceRequestParameters *)arg1 ;
-(void)setDisplayRegion:(NSString *)arg1 ;
-(void)addAuxiliaryTierRequestedComponent:(id)arg1 ;
-(void)setNeedLatency:(BOOL)arg1 ;
-(void)setHandleData:(NSData *)arg1 ;
-(BOOL)hasPlaceRequestParameters;
-(unsigned long long)spokenLanguagesCount;
-(void)clearSpokenLanguages;
-(id)spokenLanguageAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)requestedComponentsCount;
-(void)clearRequestedComponents;
-(id)requestedComponentAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)auxiliaryTierRequestedComponentsCount;
-(void)clearAuxiliaryTierRequestedComponents;
-(id)auxiliaryTierRequestedComponentAtIndex:(unsigned long long)arg1 ;
-(void)setSpokenLanguages:(NSMutableArray *)arg1 ;
-(NSMutableArray *)requestedComponents;
-(void)setRequestedComponents:(NSMutableArray *)arg1 ;
-(BOOL)suppressResultsRequiringAttribution;
-(void)setHasSuppressResultsRequiringAttribution:(BOOL)arg1 ;
-(BOOL)hasSuppressResultsRequiringAttribution;
-(BOOL)hasDisplayRegion;
-(NSMutableArray *)auxiliaryTierRequestedComponents;
-(void)setAuxiliaryTierRequestedComponents:(NSMutableArray *)arg1 ;
-(BOOL)needLatency;
-(void)setHasNeedLatency:(BOOL)arg1 ;
-(BOOL)hasNeedLatency;
-(BOOL)hasHandleData;
-(id)initForTerritoryForLatLngsE7:(id)arg1 traits:(id)arg2 ;
-(id)initForGeoIpLookupWithIpAddress:(id)arg1 traits:(id)arg2 ;
-(id)initWithMapItemToRefine:(id)arg1 traits:(id)arg2 ;
-(id)initWithIdentifiers:(id)arg1 resultProviderID:(int)arg2 traits:(id)arg3 ;
-(id)initWithComponents:(id)arg1 identifier:(id)arg2 resultProviderID:(int)arg3 traits:(id)arg4 ;
-(id)initWithExternalBusinessID:(id)arg1 contentProvider:(id)arg2 traits:(id)arg3 ;
-(id)initWithForwardGeocodeAddress:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)initWithForwardGeocodeAddressString:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)initWithReverseGeocodeCoordinate:(GEOCoarseLocationLatLng)arg1 includeEntryPoints:(BOOL)arg2 preserveOriginalLocation:(BOOL)arg3 traits:(id)arg4 ;
-(id)initWithReverseGeocodeCoordinate:(GEOCoarseLocationLatLng)arg1 floorOrdinal:(int)arg2 includeEntryPoints:(BOOL)arg3 preserveOriginalLocation:(BOOL)arg4 traits:(id)arg5 ;
-(id)initWithReverseGeocodeLocation:(id)arg1 includeEntryPoints:(BOOL)arg2 preserveOriginalLocation:(BOOL)arg3 placeTypeLimit:(int)arg4 traits:(id)arg5 ;
-(id)initWithBatchReverseGeocodeLocations:(id)arg1 additionalPlaceTypes:(int*)arg2 additionalPlaceTypesCount:(unsigned long long)arg3 traits:(id)arg4 ;
-(id)initWithMerchantCode:(id)arg1 rawMerchantCode:(id)arg2 industryCategory:(id)arg3 industryCode:(id)arg4 paymentNetwork:(id)arg5 transactionDate:(id)arg6 transactionLocation:(id)arg7 traits:(id)arg8 ;
-(id)initWithMerchantCode:(id)arg1 rawMerchantCode:(id)arg2 industryCategory:(id)arg3 industryCode:(id)arg4 paymentNetwork:(id)arg5 transactionDate:(id)arg6 transactionLocation:(id)arg7 terminalId:(id)arg8 transactionCurrencyCode:(id)arg9 transactionType:(int)arg10 transactionId:(id)arg11 warsawMerchantDomain:(id)arg12 warsawMerchantName:(id)arg13 warsawMerchantId:(id)arg14 adamId:(id)arg15 merchantId:(id)arg16 merchantDoingBizAsName:(id)arg17 merchantEnhancedName:(id)arg18 merchantCity:(id)arg19 merchantRawCity:(id)arg20 merchantState:(id)arg21 merchantRawState:(id)arg22 merchantZip:(id)arg23 merchantAddress:(id)arg24 merchantRawAddress:(id)arg25 merchantCountryCode:(id)arg26 merchantType:(id)arg27 merchantCleanConfidenceLevel:(id)arg28 merchantAdditionalData:(id)arg29 merchantCanl:(id)arg30 fuzzyMatched:(id)arg31 coarseLocationUsed:(id)arg32 traits:(id)arg33 ;
-(id)initWithAirportCode:(id)arg1 terminalCode:(id)arg2 gateCode:(id)arg3 traits:(id)arg4 ;
-(id)initWithExternalTransitStationCodes:(id)arg1 sourceID:(id)arg2 transactionDate:(id)arg3 transactionLocation:(id)arg4 traits:(id)arg5 ;
-(id)initWithSpatialPlaceLookupParameters:(id)arg1 traits:(id)arg2 ;
-(id)initWithSpatialEventLookupParameters:(id)arg1 traits:(id)arg2 ;
-(id)initWithCategoryMetadata:(id)arg1 parentMuid:(unsigned long long)arg2 traits:(id)arg3 ;
-(id)initWithBrandMUID:(unsigned long long)arg1 traits:(id)arg2 ;
-(id)initWithTransitScheduleAtStation:(unsigned long long)arg1 line:(unsigned long long)arg2 referenceTripId:(unsigned long long)arg3 routingParameters:(id)arg4 traits:(id)arg5 ;
-(id)initWithUpdatedTransitScheduleDetailsAtStation:(unsigned long long)arg1 line:(unsigned long long)arg2 referenceTripId:(unsigned long long)arg3 routingParameters:(id)arg4 traits:(id)arg5 ;
-(id)initWithTransitDeparturesAtStation:(unsigned long long)arg1 line:(unsigned long long)arg2 referenceTripId:(unsigned long long)arg3 routingParameters:(id)arg4 traits:(id)arg5 ;
-(id)initWithTransitTripDetailsAtStation:(unsigned long long)arg1 line:(unsigned long long)arg2 referenceTripId:(unsigned long long)arg3 routingParameters:(id)arg4 traits:(id)arg5 ;
-(id)initWithTripIds:(id)arg1 traits:(id)arg2 ;
-(id)initWithSearchQuery:(id)arg1 entryMetadata:(id)arg2 metadata:(id)arg3 autocompleteEntry:(id)arg4 retainedSearch:(id)arg5 maxResults:(unsigned)arg6 filters:(id)arg7 suppressResultsRequiringAttribution:(BOOL)arg8 traits:(id)arg9 error:(id*)arg10 ;
-(id)initWithPlaceRefinementParameters:(id)arg1 traits:(id)arg2 ;
-(id)initWithVendorSpecificPlaceRefinementParameters:(id)arg1 traits:(id)arg2 ;
-(id)initWithCanonicalLocationSearchQueryString:(id)arg1 traits:(id)arg2 ;
-(id)initWithSearchURLQuery:(id)arg1 identifier:(id)arg2 resultProviderId:(int)arg3 contentProvider:(id)arg4 maxResults:(unsigned)arg5 traits:(id)arg6 ;
-(id)initWithSearchURLQuery:(id)arg1 coordinate:(GEOCoarseLocationLatLng)arg2 maxResults:(unsigned)arg3 traits:(id)arg4 ;
-(id)initWithAutocompleteFragment:(id)arg1 type:(int)arg2 traits:(id)arg3 filters:(id)arg4 retainedSearch:(id)arg5 tappedQuerySuggestion:(id)arg6 sessionData:(id)arg7 error:(id*)arg8 ;
-(id)initForCategoryListWithTraits:(id)arg1 isFromNoQueryState:(BOOL)arg2 ;
-(id)initForSearchFieldPlaceholderWithTraits:(id)arg1 ;
-(id)initForNearestTransitStationWithLine:(id)arg1 coordinate:(GEOCoarseLocationLatLng)arg2 traits:(id)arg3 ;
-(id)initForDatasetCheckWithTraits:(id)arg1 ;
-(id)initWithCategory:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)initWithCategory:(id)arg1 routeInfo:(id)arg2 maxResults:(unsigned)arg3 traits:(id)arg4 ;
-(id)initWithSearchCategory:(id)arg1 venueIdentifier:(id)arg2 maxResults:(unsigned)arg3 traits:(id)arg4 ;
-(id)initWithPopularNearbySearchCategory:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)initWithBatchPopularNearbySearchCategories:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)initForBrandLookupWithIMessageUid:(id)arg1 traits:(id)arg2 ;
-(id)initForWifiFingerprintLookupWithLocations:(id)arg1 wifiAccessPoints:(id)arg2 maxLabels:(unsigned)arg3 entryTime:(unsigned long long)arg4 exitTime:(unsigned long long)arg5 traits:(id)arg6 ;
-(id)initWithInitialRequestData:(id)arg1 traits:(id)arg2 ;
-(id)initForSearchHomeWithTraits:(id)arg1 ;
-(id)initPublisherViewWithPublisherIdentifier:(id)arg1 keywordFilter:(id)arg2 addressFilter:(id)arg3 batchSize:(unsigned)arg4 withTraits:(id)arg5 ;
-(id)initForCuratedCollectionLookupWithIdentifiers:(id)arg1 isBatchLookup:(BOOL)arg2 traits:(id)arg3 ;
-(id)initForCuratedCollectionItemLookupWithIdentifiers:(id)arg1 collectionIdentifier:(id)arg2 traits:(id)arg3 ;
-(id)initWithAllCollectionViewWithBatchSize:(unsigned)arg1 keywordFilter:(id)arg2 addressFilter:(id)arg3 withTraits:(id)arg4 ;
-(BOOL)shouldConsiderCaching;
-(id)initForSpotlightCategoryListWithTraits:(id)arg1 ;
-(id)initWithMapItemToRefine:(id)arg1 coordinate:(GEOCoarseLocationLatLng)arg2 traits:(id)arg3 ;
-(void)addRequestedComponents:(id)arg1 ;
-(void)addRequestedComponentsForReason:(unsigned long long)arg1 traits:(id)arg2 count:(unsigned)arg3 ;
-(id)_initWithTraits:(id)arg1 includeHistoricalLocations:(BOOL)arg2 supportedMapsResultTypes:(id)arg3 ;
-(id)_initWithTransitScheduleRequestForStation:(unsigned long long)arg1 line:(unsigned long long)arg2 referenceTripId:(unsigned long long)arg3 routingParameters:(id)arg4 traits:(id)arg5 ;
-(id)initForAutocompleteWithTraits:(id)arg1 count:(unsigned)arg2 ;
-(id)browseCategorySuggestionparametersWithTraits:(id)arg1 isFromNoQueryState:(BOOL)arg2 ;
-(int)userPreferredTransportTypeFromTransportType:(int)arg1 ;
-(int)geoUserPreferredTransportType;
-(double)localTimestamp;
-(id)pdSpatialPlaceLookupParametersArrayForParameters:(id)arg1 ;
-(id)pdSpatialEventLookupParametersArrayForParameters:(id)arg1 ;
-(BOOL)isForwardGeocoderRequest;
-(BOOL)isCanonicalLocationSearchRequest;
-(BOOL)isMerchantRequest;
-(BOOL)isPlaceRefinementRequest;
-(BOOL)isBrandLookupRequest;
-(id)pdSpatialPlaceLookupParametersForParameters:(id)arg1 ;
-(id)pdSpatialEventLookupParametersForParameters:(id)arg1 ;
-(id)initForDFRCategoryListWithTraits:(id)arg1 ;
-(BOOL)hasResultProviderID;
@end
