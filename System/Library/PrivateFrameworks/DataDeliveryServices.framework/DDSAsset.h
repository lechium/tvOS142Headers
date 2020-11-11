/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:21 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSURL, NSString, MAAsset;

@interface DDSAsset : NSObject {

	NSDictionary* _attributes;
	NSURL* _localURL;
	unsigned long long _assetState;
	NSString* _dataType;
	NSString* _assetType;
	MAAsset* _maAsset;
	NSString* _debuggingID;
	NSString* _uniqueIdentifier;

}

@property (nonatomic,retain) MAAsset * maAsset;                                      //@synthesize maAsset=_maAsset - In the implementation block
@property (nonatomic,retain) NSString * debuggingID;                                 //@synthesize debuggingID=_debuggingID - In the implementation block
@property (nonatomic,retain) NSString * uniqueIdentifier;                            //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * attributes;                            //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) unsigned long long compatibilityVersion; 
@property (nonatomic,readonly) unsigned long long contentVersion; 
@property (nonatomic,readonly) NSURL * localURL;                                     //@synthesize localURL=_localURL - In the implementation block
@property (nonatomic,readonly) unsigned long long assetState;                        //@synthesize assetState=_assetState - In the implementation block
@property (nonatomic,readonly) NSString * locale; 
@property (nonatomic,readonly) NSString * dataType;                                  //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,readonly) NSString * assetType;                                 //@synthesize assetType=_assetType - In the implementation block
@property (nonatomic,readonly) NSString * installDate; 
@property (nonatomic,readonly) NSString * shortName; 
@property (nonatomic,readonly) NSString * assetUUID; 
+(id)asset;
+(id)uniqueIdentifierForMAAsset:(id)arg1 ;
+(id)assetWithMAAsset:(id)arg1 ;
+(id)debuggingIDsForAssets:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(NSString *)locale;
-(NSString *)uniqueIdentifier;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(NSDictionary *)attributes;
-(NSString *)dataType;
-(NSString *)installDate;
-(unsigned long long)contentVersion;
-(unsigned long long)compatibilityVersion;
-(NSString *)shortName;
-(NSString *)assetType;
-(NSURL *)localURL;
-(NSString *)assetUUID;
-(unsigned long long)assetState;
-(MAAsset *)maAsset;
-(void)setMaAsset:(MAAsset *)arg1 ;
-(NSString *)debuggingID;
-(BOOL)isEqualToAsset:(id)arg1 ;
-(void)_mergeAttributes:(id)arg1 ;
-(void)setDebuggingID:(NSString *)arg1 ;
@end

