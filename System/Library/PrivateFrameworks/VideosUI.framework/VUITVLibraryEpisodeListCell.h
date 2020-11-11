/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:00 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <TVMLKit/TVContainerCollectionViewCell.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/TVAuxiliaryViewSelecting.h>

@protocol VUITVLibraryEpisodeListCellDelegate, TVAuxiliaryViewSelecting;
@class UIView, _TVStackingPosterView, VUITVEpisodeInformationView, UIPress, IKViewElement, VUIMediaItem, NSString;

@interface VUITVLibraryEpisodeListCell : TVContainerCollectionViewCell <UIGestureRecognizerDelegate, TVAuxiliaryViewSelecting> {

	BOOL _isFocusWithinCell;
	id<VUITVLibraryEpisodeListCellDelegate> _delegate;
	UIView*<TVAuxiliaryViewSelecting> _auxiliarySelectingView;
	_TVStackingPosterView* _stackingPosterView;
	UIView* _imageView;
	UIView* _overlayView;
	VUITVEpisodeInformationView* _informationView;
	UIPress* _press;
	IKViewElement* _viewElement;
	IKViewElement* _imageViewElement;
	IKViewElement* _informationViewElement;
	VUIMediaItem* _mediaItem;

}

@property (assign,nonatomic) BOOL isFocusWithinCell;                                                //@synthesize isFocusWithinCell=_isFocusWithinCell - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;                                           //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) IKViewElement * imageViewElement;                                      //@synthesize imageViewElement=_imageViewElement - In the implementation block
@property (nonatomic,retain) IKViewElement * informationViewElement;                                //@synthesize informationViewElement=_informationViewElement - In the implementation block
@property (nonatomic,retain) VUIMediaItem * mediaItem;                                              //@synthesize mediaItem=_mediaItem - In the implementation block
@property (assign,nonatomic,__weak) id<VUITVLibraryEpisodeListCellDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView*<TVAuxiliaryViewSelecting> auxiliarySelectingView;              //@synthesize auxiliarySelectingView=_auxiliarySelectingView - In the implementation block
@property (nonatomic,retain) _TVStackingPosterView * stackingPosterView;                            //@synthesize stackingPosterView=_stackingPosterView - In the implementation block
@property (nonatomic,retain) UIView * imageView;                                                    //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                                  //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) VUITVEpisodeInformationView * informationView;                         //@synthesize informationView=_informationView - In the implementation block
@property (nonatomic,retain) UIPress * press;                                                       //@synthesize press=_press - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)configureVUITVLibraryEpisodeListCell:(id)arg1 withMedia:(id)arg2 width:(double)arg3 cornerRadius:(double)arg4 ;
+(CGSize)sizeForEpisodeListCellWithDescription:(id)arg1 width:(double)arg2 cornerRadius:(double)arg3 ;
+(id)configureWithElement:(id)arg1 existingView:(id)arg2 ;
-(id<VUITVLibraryEpisodeListCellDelegate>)delegate;
-(void)setDelegate:(id<VUITVLibraryEpisodeListCellDelegate>)arg1 ;
-(void)prepareForReuse;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(VUIMediaItem *)mediaItem;
-(void)setMediaItem:(VUIMediaItem *)arg1 ;
-(UIView *)imageView;
-(void)layoutSubviews;
-(void)setImageView:(UIView *)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceivePress:(id)arg2 ;
-(UIView *)overlayView;
-(void)setOverlayView:(UIView *)arg1 ;
-(UIPress *)press;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(IKViewElement *)viewElement;
-(void)_searchForFocusRegionsInContext:(id)arg1 ;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(UIEdgeInsets)selectionMarginsForSize:(CGSize)arg1 ;
-(id)selectingView;
-(void)setPress:(UIPress *)arg1 ;
-(void)setStackingPosterView:(_TVStackingPosterView *)arg1 ;
-(_TVStackingPosterView *)stackingPosterView;
-(CGSize)_layoutWithSize:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
-(VUITVEpisodeInformationView *)informationView;
-(void)setInformationView:(VUITVEpisodeInformationView *)arg1 ;
-(BOOL)_shouldAddInfoViewToPoster;
-(void)setAuxiliarySelectingView:(UIView*<TVAuxiliaryViewSelecting>)arg1 ;
-(void)postConfigurationSetup;
-(void)setImageViewElement:(IKViewElement *)arg1 ;
-(IKViewElement *)informationViewElement;
-(void)setInformationViewElement:(IKViewElement *)arg1 ;
-(void)imageViewHandler:(id)arg1 ;
-(void)informationViewHandler:(id)arg1 ;
-(void)_addTapGestureRecognizersForImageView;
-(void)_addTapGestureRecognizersForInformationView;
-(UIView*<TVAuxiliaryViewSelecting>)auxiliarySelectingView;
-(BOOL)isFocusWithinCell;
-(void)setIsFocusWithinCell:(BOOL)arg1 ;
-(IKViewElement *)imageViewElement;
@end
