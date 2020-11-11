/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXDisplayAsset;
#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSMutableIndexSet;

@interface _PXGAssetImageCacheEntry : NSObject {

	unsigned _imageOrientation;
	NSMutableIndexSet* _requestIDs;
	id<PXDisplayAsset> _asset;
	CGImageRef _image;

}

@property (nonatomic,readonly) NSMutableIndexSet * requestIDs;              //@synthesize requestIDs=_requestIDs - In the implementation block
@property (nonatomic,retain) id<PXDisplayAsset> asset;                      //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) CGImageRef image;                              //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) unsigned imageOrientation;                     //@synthesize imageOrientation=_imageOrientation - In the implementation block
-(id)init;
-(void)dealloc;
-(void)prepareForReuse;
-(CGImageRef)image;
-(void)setImage:(CGImageRef)arg1 ;
-(unsigned)imageOrientation;
-(void)setImageOrientation:(unsigned)arg1 ;
-(id<PXDisplayAsset>)asset;
-(void)setAsset:(id<PXDisplayAsset>)arg1 ;
-(NSMutableIndexSet *)requestIDs;
@end

