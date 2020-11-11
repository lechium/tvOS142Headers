/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UISegmentedControl.h>

@interface _PXCuratedLibraryZoomLevelSegmentedControl : UISegmentedControl {

	BOOL _lastTouchRemainedOnSelectedSegment;

}

@property (nonatomic,readonly) BOOL lastTouchRemainedOnSelectedSegment;              //@synthesize lastTouchRemainedOnSelectedSegment=_lastTouchRemainedOnSelectedSegment - In the implementation block
+(BOOL)_cursorInteractionEnabled;
+(double)_cornerRadiusForTraitCollection:(id)arg1 size:(int)arg2 ;
+(double)_sectionIndicatorInsetForTraitCollection:(id)arg1 size:(int)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)lastTouchRemainedOnSelectedSegment;
-(void)_highlightSegment:(long long)arg1 ;
@end

