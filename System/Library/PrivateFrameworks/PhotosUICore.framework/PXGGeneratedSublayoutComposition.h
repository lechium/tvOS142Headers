/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:16 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGSublayoutComposition.h>

@class PXLayoutGenerator;

@interface PXGGeneratedSublayoutComposition : PXGSublayoutComposition {

	PXLayoutGenerator* _layoutGenerator;
	PXLayoutGeometry* _layoutGeometries;
	long long _layoutGeometriesCapacity;

}

@property (nonatomic,readonly) PXLayoutGenerator * configuredLayoutGenerator; 
-(void)dealloc;
-(CGRect)contentBounds;
-(void)invalidateLayout;
-(void)referenceSizeDidChange;
-(void)updateEstimatedSublayoutGeometries;
-(void)updateSublayoutGeometriesFromAnchorSublayoutIndex:(long long)arg1 usingSublayoutUpdateBlock:(/*^block*/id)arg2 ;
-(PXLayoutGenerator *)configuredLayoutGenerator;
@end
