/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:28 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXVideoComparisonViewController.h>

@class PHAsset, NSURL;

@interface PXDreamyDiagnosticsViewController : PXVideoComparisonViewController {

	int _variantVideoRequestID;
	PHAsset* _variantAsset;
	NSURL* _variantVideoURL;

}

@property (nonatomic,retain) PHAsset * variantAsset;                 //@synthesize variantAsset=_variantAsset - In the implementation block
@property (nonatomic,retain) NSURL * variantVideoURL;                //@synthesize variantVideoURL=_variantVideoURL - In the implementation block
@property (assign,nonatomic) int variantVideoRequestID;              //@synthesize variantVideoRequestID=_variantVideoRequestID - In the implementation block
-(id)radarTitle;
-(void)viewDidLoad;
-(id)variantVideoDescription;
-(id)inputVideoButtonsTitle;
-(id)variantVideoButtonsTitle;
-(void)prepareVariantVideoWithProgress:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)prepareVariantVideoForExportWithProgress:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)invalidateInputAndVariantReferences;
-(BOOL)useVariantVideoByDefaultInToggle;
-(id)radarComponentID;
-(id)radarComponentName;
-(id)radarComponentVersion;
-(void)_loadAndCacheVariantVideoURLFromAsset:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_loadAndCacheVariantAssetWithError:(id*)arg1 ;
-(PHAsset *)variantAsset;
-(void)setVariantAsset:(PHAsset *)arg1 ;
-(NSURL *)variantVideoURL;
-(void)setVariantVideoURL:(NSURL *)arg1 ;
-(int)variantVideoRequestID;
-(void)setVariantVideoRequestID:(int)arg1 ;
@end

