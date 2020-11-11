/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:32 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXUIViewBasicTile.h>
#import <libobjc.A.dylib/PXReusableObject.h>

@protocol PXUIButtonTileDelegate;
@class NSString, UIView, UIButton, PXButtonSpec, NSArray;

@interface PXUIButtonTile : NSObject <PXUIViewBasicTile, PXReusableObject> {

	BOOL _hasScheduledUpdate;
	SCD_Struct_PX37 _needsUpdateFlags;
	id<PXUIButtonTileDelegate> _delegate;
	NSString* _title;
	UIView* __view;
	UIButton* __button;
	PXButtonSpec* __spec;
	NSArray* __layoutConstraints;

}

@property (nonatomic,readonly) UIView * _view;                                                      //@synthesize _view=__view - In the implementation block
@property (nonatomic,readonly) UIButton * _button;                                                  //@synthesize _button=__button - In the implementation block
@property (setter=_setSpec:,nonatomic,retain) PXButtonSpec * _spec;                                 //@synthesize _spec=__spec - In the implementation block
@property (setter=_setLayoutConstraints:,nonatomic,copy) NSArray * _layoutConstraints;              //@synthesize _layoutConstraints=__layoutConstraints - In the implementation block
@property (assign,nonatomic,__weak) id<PXUIButtonTileDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * title;                                                        //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UIView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<PXUIButtonTileDelegate>)delegate;
-(void)setDelegate:(id<PXUIButtonTileDelegate>)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)prepareForReuse;
-(UIButton *)_button;
-(BOOL)_needsUpdate;
-(UIView *)view;
-(UIView *)_view;
-(void)_updateIfNeeded;
-(PXButtonSpec *)_spec;
-(void)_setSpec:(id)arg1 ;
-(void)_setNeedsUpdate;
-(void)becomeReusable;
-(void)_handleButton:(id)arg1 ;
-(void)_invalidateButton;
-(void)_updateButtonIfNeeded;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(NSArray *)_layoutConstraints;
-(void)_setLayoutConstraints:(id)arg1 ;
@end

