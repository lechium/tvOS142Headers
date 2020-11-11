/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:47 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AirTraffic/AirTraffic-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, ICStoreMediaResponseItem, NSNumber, NSString, NSDictionary;

@interface ATStoreInfo : NSObject <NSSecureCoding, NSCopying> {

	NSMutableDictionary* _downloadDictionary;
	NSMutableDictionary* _assetDictionary;
	ICStoreMediaResponseItem* _storeMediaResponseItem;

}

@property (nonatomic,retain) NSNumber * adamID; 
@property (nonatomic,retain) NSNumber * DSID; 
@property (nonatomic,retain) NSNumber * cloudDSID; 
@property (nonatomic,retain) NSNumber * collectionID; 
@property (nonatomic,retain) NSNumber * versionID; 
@property (nonatomic,retain) NSNumber * drmFree; 
@property (nonatomic,retain) NSNumber * sagaID; 
@property (nonatomic,retain) NSNumber * subscriptionID; 
@property (nonatomic,retain) NSNumber * matchStatus; 
@property (nonatomic,retain) NSNumber * redownloadStatus; 
@property (nonatomic,retain) NSString * appleID; 
@property (nonatomic,retain) NSString * syncID; 
@property (nonatomic,retain) NSString * storefrontID; 
@property (nonatomic,retain) NSString * XID; 
@property (nonatomic,retain) NSString * flavor; 
@property (nonatomic,retain) NSString * dimensions; 
@property (nonatomic,retain) NSString * podcastEpisodeGUID; 
@property (nonatomic,retain) NSString * redownloadParams; 
@property (nonatomic,retain) NSNumber * endpointType; 
@property (nonatomic,retain) ICStoreMediaResponseItem * storeMediaResponseItem;              //@synthesize storeMediaResponseItem=_storeMediaResponseItem - In the implementation block
@property (readonly) NSDictionary * downloadDictionary;                                      //@synthesize downloadDictionary=_downloadDictionary - In the implementation block
@property (readonly) NSDictionary * assetDictionary;                                         //@synthesize assetDictionary=_assetDictionary - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)subscriptionID;
-(void)setAdamID:(NSNumber *)arg1 ;
-(NSNumber *)adamID;
-(NSString *)dimensions;
-(void)setDimensions:(NSString *)arg1 ;
-(NSString *)appleID;
-(void)setAppleID:(NSString *)arg1 ;
-(void)setSubscriptionID:(NSNumber *)arg1 ;
-(void)setCollectionID:(NSNumber *)arg1 ;
-(NSNumber *)collectionID;
-(NSNumber *)DSID;
-(void)setDSID:(NSNumber *)arg1 ;
-(NSString *)flavor;
-(NSDictionary *)assetDictionary;
-(NSString *)podcastEpisodeGUID;
-(void)setPodcastEpisodeGUID:(NSString *)arg1 ;
-(NSString *)redownloadParams;
-(void)setVersionID:(NSNumber *)arg1 ;
-(NSNumber *)versionID;
-(NSNumber *)matchStatus;
-(void)setMatchStatus:(NSNumber *)arg1 ;
-(NSNumber *)endpointType;
-(NSString *)storefrontID;
-(void)setEndpointType:(NSNumber *)arg1 ;
-(NSString *)syncID;
-(void)setSyncID:(NSString *)arg1 ;
-(void)setRedownloadParams:(NSString *)arg1 ;
-(NSNumber *)sagaID;
-(NSNumber *)cloudDSID;
-(void)setCloudDSID:(NSNumber *)arg1 ;
-(NSNumber *)drmFree;
-(void)setDrmFree:(NSNumber *)arg1 ;
-(void)setSagaID:(NSNumber *)arg1 ;
-(NSNumber *)redownloadStatus;
-(void)setRedownloadStatus:(NSNumber *)arg1 ;
-(void)setStorefrontID:(NSString *)arg1 ;
-(NSString *)XID;
-(void)setXID:(NSString *)arg1 ;
-(void)setFlavor:(NSString *)arg1 ;
-(NSDictionary *)downloadDictionary;
-(ICStoreMediaResponseItem *)storeMediaResponseItem;
-(void)setStoreMediaResponseItem:(ICStoreMediaResponseItem *)arg1 ;
@end

