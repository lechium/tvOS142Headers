/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:12 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudPhotoLibrary/CPLChangeStorage.h>

@class NSDictionary, NSString, CPLChangeBatch;

@interface CPLChangeBatchChangeStorage : CPLChangeStorage {

	NSDictionary* _changesPerScopedIdentifier;
	NSString* _storageDescription;
	CPLChangeBatch* _batch;

}

@property (nonatomic,readonly) CPLChangeBatch * batch;              //@synthesize batch=_batch - In the implementation block
-(CPLChangeBatch *)batch;
-(id)changeWithScopedIdentifier:(id)arg1 ;
-(id)changesWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2 ;
-(id)storageDescription;
-(id)initWithBatch:(id)arg1 name:(id)arg2 ;
@end
