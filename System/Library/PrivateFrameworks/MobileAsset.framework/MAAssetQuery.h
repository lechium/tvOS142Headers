/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:37 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, NSMutableArray, NSString, NSArray, NSSet;

@interface MAAssetQuery : NSObject {

	BOOL _isPallasResult;
	BOOL _isDone;
	BOOL _doNotBlockBeforeFirstUnlock;
	BOOL _doNotBlockOnNetworkStatus;
	long long _resultCode;
	NSDate* _postedDate;
	NSMutableArray* _queryParams;
	NSString* _assetType;
	NSArray* _results;
	NSSet* _assetIds;
	long long _returnTypes;
	NSDate* _lastFetchDate;

}

@property (nonatomic,readonly) NSMutableArray * queryParams;                //@synthesize queryParams=_queryParams - In the implementation block
@property (nonatomic,readonly) NSString * assetType;                        //@synthesize assetType=_assetType - In the implementation block
@property (assign,nonatomic) BOOL doNotBlockBeforeFirstUnlock;              //@synthesize doNotBlockBeforeFirstUnlock=_doNotBlockBeforeFirstUnlock - In the implementation block
@property (assign,nonatomic) BOOL doNotBlockOnNetworkStatus;                //@synthesize doNotBlockOnNetworkStatus=_doNotBlockOnNetworkStatus - In the implementation block
@property (nonatomic,readonly) NSArray * results;                           //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) long long resultCode;                        //@synthesize resultCode=_resultCode - In the implementation block
@property (nonatomic,readonly) BOOL isDone;                                 //@synthesize isDone=_isDone - In the implementation block
@property (nonatomic,readonly) NSSet * assetIds;                            //@synthesize assetIds=_assetIds - In the implementation block
@property (nonatomic,readonly) long long returnTypes;                       //@synthesize returnTypes=_returnTypes - In the implementation block
@property (nonatomic,readonly) NSDate * lastFetchDate;                      //@synthesize lastFetchDate=_lastFetchDate - In the implementation block
@property (nonatomic,readonly) NSDate * postedDate;                         //@synthesize postedDate=_postedDate - In the implementation block
-(id)description;
-(void)dealloc;
-(id)initWithType:(id)arg1 ;
-(NSArray *)results;
-(NSDate *)lastFetchDate;
-(void)setDoNotBlockBeforeFirstUnlock:(BOOL)arg1 ;
-(void)returnTypes:(long long)arg1 ;
-(void)queryMetaData:(/*^block*/id)arg1 ;
-(long long)addKeyValuePair:(id)arg1 with:(id)arg2 ;
-(long long)addKeyValueArray:(id)arg1 with:(id)arg2 ;
-(long long)resultCode;
-(long long)queryMetaDataSync;
-(NSMutableArray *)queryParams;
-(long long)returnTypes;
-(BOOL)doNotBlockBeforeFirstUnlock;
-(NSString *)assetType;
-(void)queryMetaDataWithError:(/*^block*/id)arg1 ;
-(void)getResultsFromMessage:(id)arg1 ;
-(BOOL)doNotBlockOnNetworkStatus;
-(void)augmentResultsWithState:(BOOL)arg1 ;
-(long long)addKeyValueNull:(id)arg1 ;
-(long long)queryInstalledAssetIds;
-(BOOL)isCatalogFetchedWithinThePastFewDays:(int)arg1 ;
-(BOOL)isCatalogFetchedFromLiveServer;
-(BOOL)isDone;
-(NSDate *)postedDate;
-(void)setDoNotBlockOnNetworkStatus:(BOOL)arg1 ;
-(NSSet *)assetIds;
@end

