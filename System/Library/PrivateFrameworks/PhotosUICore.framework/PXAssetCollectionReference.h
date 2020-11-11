/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:28 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXSectionedObjectReference.h>

@class PXAssetReference;

@interface PXAssetCollectionReference : PXSectionedObjectReference {

	PXAssetReference* _keyAssetReference;

}

@property (nonatomic,readonly) id<PXDisplayAssetCollection> assetCollection; 
@property (nonatomic,readonly) PXAssetReference * keyAssetReference;                      //@synthesize keyAssetReference=_keyAssetReference - In the implementation block
-(id<PXDisplayAssetCollection>)assetCollection;
-(id)initWithAssetCollection:(id)arg1 keyAssetReference:(id)arg2 indexPath:(PXSimpleIndexPath)arg3 ;
-(PXAssetReference *)keyAssetReference;
@end
