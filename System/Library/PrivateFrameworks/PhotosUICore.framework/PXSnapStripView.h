/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:24 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class PXSnapStripViewInternal, NSArray;

@interface PXSnapStripView : UIView {

	PXSnapStripViewInternal* _stripView;
	NSArray* _indicatorInfos;

}

@property (nonatomic,copy) NSArray * indicatorInfos;              //@synthesize indicatorInfos=_indicatorInfos - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setIndicatorInfos:(NSArray *)arg1 ;
-(void)setIndicatorInfos:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateStripView:(BOOL)arg1 ;
-(NSArray *)indicatorInfos;
@end

