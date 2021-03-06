/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:11 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSIndexSet;

@interface _CPLEngineScopeCache : NSObject {

	NSMutableDictionary* _scopeCache;
	NSMutableDictionary* _scopeByLocalIndex;
	NSMutableDictionary* _scopeByCloudIndex;
	NSMutableDictionary* _scopeByStableIndex;
	NSIndexSet* _validLocalIndexes;
	NSIndexSet* _validCloudIndexes;

}
-(id)init;
-(id)scopeWithIdentifier:(id)arg1 ;
-(void)cacheValidCloudIndexes:(id)arg1 ;
-(id)validCloudIndexes;
-(void)cacheValidLocalIndexes:(id)arg1 ;
-(id)validLocalIndexes;
-(id)scopeWithStableIndex:(long long)arg1 ;
-(id)scopeWithCloudIndex:(long long)arg1 ;
-(id)scopeWithLocalIndex:(long long)arg1 ;
-(void)cacheScope:(id)arg1 forScopeStorage:(id)arg2 ;
@end

