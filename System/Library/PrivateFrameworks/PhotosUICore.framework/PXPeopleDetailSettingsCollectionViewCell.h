/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:13 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NSNumberFormatter, UIImageView, NSString, UILabel, UIView, PXRoundedCornerOverlayView, UIImage;

@interface PXPeopleDetailSettingsCollectionViewCell : UICollectionViewCell {

	NSNumberFormatter* _quantityNumberFormatter;
	CGRect _unitRect;
	BOOL _isFavorite;
	BOOL _isReordering;
	UIImageView* _avatarView;
	NSString* _name;
	unsigned long long _photoQuantity;
	double _textAlpha;
	UILabel* _quantityLabel;
	UILabel* _nameLabel;
	UIView* _actionIndicatorView;
	UIView* _selectionView;
	PXRoundedCornerOverlayView* _roundCornerOverlay;

}

@property (nonatomic,retain) UILabel * nameLabel;                                                    //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UIView * actionIndicatorView;                                           //@synthesize actionIndicatorView=_actionIndicatorView - In the implementation block
@property (nonatomic,retain) UIView * selectionView;                                                 //@synthesize selectionView=_selectionView - In the implementation block
@property (nonatomic,retain) PXRoundedCornerOverlayView * roundCornerOverlay;                        //@synthesize roundCornerOverlay=_roundCornerOverlay - In the implementation block
@property (nonatomic,readonly) UIImageView * avatarView;                                             //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,copy) NSString * name;                                                          //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long photoQuantity;                                       //@synthesize photoQuantity=_photoQuantity - In the implementation block
@property (assign,getter=isActionIndicatorHidden,nonatomic) BOOL actionIndicatorHidden; 
@property (assign,nonatomic) double textAlpha;                                                       //@synthesize textAlpha=_textAlpha - In the implementation block
@property (assign,nonatomic) BOOL isFavorite;                                                        //@synthesize isFavorite=_isFavorite - In the implementation block
@property (nonatomic,retain) UILabel * quantityLabel;                                                //@synthesize quantityLabel=_quantityLabel - In the implementation block
@property (assign,setter=setReordering:,nonatomic) BOOL isReordering;                                //@synthesize isReordering=_isReordering - In the implementation block
+(double)preferredHeightForWidth:(double)arg1 forAvatarPercentage:(double)arg2 withSizeClass:(long long)arg3 isFavorite:(BOOL)arg4 ;
-(NSString *)name;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(void)prepareForReuse;
-(void)_updateType;
-(void)setSelected:(BOOL)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setIsFavorite:(BOOL)arg1 ;
-(BOOL)isFavorite;
-(UIView *)selectionView;
-(long long)_preferredSizeClass;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UIImageView *)avatarView;
-(void)setImage:(id)arg1 normalizedFaceRect:(CGRect)arg2 ;
-(void)setPhotoQuantity:(unsigned long long)arg1 ;
-(void)setActionIndicatorHidden:(BOOL)arg1 ;
-(BOOL)isActionIndicatorHidden;
-(void)setTextAlpha:(double)arg1 ;
-(void)setReordering:(BOOL)arg1 ;
-(double)avatarCenterYOffset;
-(void)contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(id)_placeHolderColor;
-(unsigned long long)photoQuantity;
-(double)textAlpha;
-(UILabel *)quantityLabel;
-(void)setQuantityLabel:(UILabel *)arg1 ;
-(BOOL)isReordering;
-(UIView *)actionIndicatorView;
-(void)setActionIndicatorView:(UIView *)arg1 ;
-(void)setSelectionView:(UIView *)arg1 ;
-(PXRoundedCornerOverlayView *)roundCornerOverlay;
-(void)setRoundCornerOverlay:(PXRoundedCornerOverlayView *)arg1 ;
@end

