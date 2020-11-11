/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:28 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXPlacesMapGeotaggableInfoDelegate.h>

@class NSString;

@interface PXPlacesGeotaggableMediaProvider : NSObject <PXPlacesMapGeotaggableInfoDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)imageForGeotaggable:(id)arg1 ofSize:(CGSize)arg2 networkAccessAllowed:(BOOL)arg3 andCompletion:(/*^block*/id)arg4 ;
-(id)_fetchImageManagerAssetForPlacesAsset:(id)arg1 ;
@end

