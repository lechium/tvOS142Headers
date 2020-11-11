/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:05 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, UIImage;

@interface PKAppearanceSpecifier : NSObject <NSCopying> {

	BOOL _hasDarkAppearance;
	UIColor* _backgroundColor;
	UIColor* _foregroundColor;
	UIColor* _tintColor;
	UIColor* _tableViewSeparatorColor;
	UIColor* _tableViewCellHighlightColor;
	UIColor* _tableViewCellAccessoryColor;
	UIColor* _tableViewCellAccessoryHighlightColor;
	UIColor* _textColor;
	UIColor* _altTextColor;
	UIColor* _buttonTextColor;
	UIColor* _buttonDisabledTextColor;
	UIColor* _buttonBackgroundColor;
	UIColor* _editableTextColor;
	UIColor* _editablePlaceholderTextColor;
	UIColor* _editableInsertionPointColor;
	UIColor* _editableSelectionBarColor;
	UIColor* _editableSelectionHighlightColor;
	UIColor* _footerHyperlinkColor;
	UIColor* _progressBarTintColor;
	UIColor* _progressBarTrackTintColor;
	UIColor* _searchBarTintcolor;
	UIColor* _cameraCaptureMaskColor;
	UIColor* _cameraCaptureMaskOutlineColor;
	UIImage* _navBarPointImage;
	UIImage* _navBarShadowPointImage;

}

@property (assign,nonatomic) BOOL hasDarkAppearance;                                    //@synthesize hasDarkAppearance=_hasDarkAppearance - In the implementation block
@property (nonatomic,copy) UIColor * backgroundColor;                                   //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) UIColor * foregroundColor;                                   //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (nonatomic,copy) UIColor * tintColor;                                         //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,copy) UIColor * tableViewSeparatorColor;                           //@synthesize tableViewSeparatorColor=_tableViewSeparatorColor - In the implementation block
@property (nonatomic,copy) UIColor * tableViewCellHighlightColor;                       //@synthesize tableViewCellHighlightColor=_tableViewCellHighlightColor - In the implementation block
@property (nonatomic,copy) UIColor * tableViewCellAccessoryColor;                       //@synthesize tableViewCellAccessoryColor=_tableViewCellAccessoryColor - In the implementation block
@property (nonatomic,copy) UIColor * tableViewCellAccessoryHighlightColor;              //@synthesize tableViewCellAccessoryHighlightColor=_tableViewCellAccessoryHighlightColor - In the implementation block
@property (nonatomic,copy) UIColor * textColor;                                         //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,copy) UIColor * altTextColor;                                      //@synthesize altTextColor=_altTextColor - In the implementation block
@property (nonatomic,copy) UIColor * buttonTextColor;                                   //@synthesize buttonTextColor=_buttonTextColor - In the implementation block
@property (nonatomic,copy) UIColor * buttonDisabledTextColor;                           //@synthesize buttonDisabledTextColor=_buttonDisabledTextColor - In the implementation block
@property (nonatomic,copy) UIColor * buttonBackgroundColor;                             //@synthesize buttonBackgroundColor=_buttonBackgroundColor - In the implementation block
@property (nonatomic,copy) UIColor * editableTextColor;                                 //@synthesize editableTextColor=_editableTextColor - In the implementation block
@property (nonatomic,copy) UIColor * editablePlaceholderTextColor;                      //@synthesize editablePlaceholderTextColor=_editablePlaceholderTextColor - In the implementation block
@property (nonatomic,copy) UIColor * editableInsertionPointColor;                       //@synthesize editableInsertionPointColor=_editableInsertionPointColor - In the implementation block
@property (nonatomic,copy) UIColor * editableSelectionBarColor;                         //@synthesize editableSelectionBarColor=_editableSelectionBarColor - In the implementation block
@property (nonatomic,copy) UIColor * editableSelectionHighlightColor;                   //@synthesize editableSelectionHighlightColor=_editableSelectionHighlightColor - In the implementation block
@property (nonatomic,copy) UIColor * footerHyperlinkColor;                              //@synthesize footerHyperlinkColor=_footerHyperlinkColor - In the implementation block
@property (nonatomic,copy) UIColor * progressBarTintColor;                              //@synthesize progressBarTintColor=_progressBarTintColor - In the implementation block
@property (nonatomic,copy) UIColor * progressBarTrackTintColor;                         //@synthesize progressBarTrackTintColor=_progressBarTrackTintColor - In the implementation block
@property (nonatomic,copy) UIColor * searchBarTintcolor;                                //@synthesize searchBarTintcolor=_searchBarTintcolor - In the implementation block
@property (nonatomic,copy) UIColor * cameraCaptureMaskColor;                            //@synthesize cameraCaptureMaskColor=_cameraCaptureMaskColor - In the implementation block
@property (nonatomic,copy) UIColor * cameraCaptureMaskOutlineColor;                     //@synthesize cameraCaptureMaskOutlineColor=_cameraCaptureMaskOutlineColor - In the implementation block
@property (nonatomic,copy) UIImage * navBarPointImage;                                  //@synthesize navBarPointImage=_navBarPointImage - In the implementation block
@property (nonatomic,copy) UIImage * navBarShadowPointImage;                            //@synthesize navBarShadowPointImage=_navBarShadowPointImage - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)foregroundColor;
-(void)setForegroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(UIColor *)tintColor;
-(UIColor *)altTextColor;
-(void)setAltTextColor:(UIColor *)arg1 ;
-(UIColor *)buttonTextColor;
-(void)setButtonTextColor:(UIColor *)arg1 ;
-(UIColor *)editableTextColor;
-(void)setEditableTextColor:(UIColor *)arg1 ;
-(UIColor *)editablePlaceholderTextColor;
-(void)setEditablePlaceholderTextColor:(UIColor *)arg1 ;
-(UIColor *)editableInsertionPointColor;
-(void)setEditableInsertionPointColor:(UIColor *)arg1 ;
-(UIColor *)editableSelectionBarColor;
-(void)setEditableSelectionBarColor:(UIColor *)arg1 ;
-(UIColor *)editableSelectionHighlightColor;
-(void)setEditableSelectionHighlightColor:(UIColor *)arg1 ;
-(UIColor *)footerHyperlinkColor;
-(void)setFooterHyperlinkColor:(UIColor *)arg1 ;
-(UIColor *)tableViewSeparatorColor;
-(BOOL)hasDarkAppearance;
-(void)setHasDarkAppearance:(BOOL)arg1 ;
-(UIColor *)cameraCaptureMaskColor;
-(UIColor *)cameraCaptureMaskOutlineColor;
-(void)setButtonBackgroundColor:(UIColor *)arg1 ;
-(void)setTableViewSeparatorColor:(UIColor *)arg1 ;
-(void)setTableViewCellHighlightColor:(UIColor *)arg1 ;
-(void)setTableViewCellAccessoryColor:(UIColor *)arg1 ;
-(void)setTableViewCellAccessoryHighlightColor:(UIColor *)arg1 ;
-(void)setButtonDisabledTextColor:(UIColor *)arg1 ;
-(void)setProgressBarTintColor:(UIColor *)arg1 ;
-(void)setProgressBarTrackTintColor:(UIColor *)arg1 ;
-(void)setCameraCaptureMaskColor:(UIColor *)arg1 ;
-(void)setCameraCaptureMaskOutlineColor:(UIColor *)arg1 ;
-(void)setNavBarPointImage:(UIImage *)arg1 ;
-(void)setNavBarShadowPointImage:(UIImage *)arg1 ;
-(UIColor *)tableViewCellHighlightColor;
-(UIColor *)tableViewCellAccessoryColor;
-(UIColor *)tableViewCellAccessoryHighlightColor;
-(UIColor *)buttonDisabledTextColor;
-(UIColor *)buttonBackgroundColor;
-(UIColor *)progressBarTintColor;
-(UIColor *)progressBarTrackTintColor;
-(UIColor *)searchBarTintcolor;
-(void)setSearchBarTintcolor:(UIColor *)arg1 ;
-(UIImage *)navBarPointImage;
-(UIImage *)navBarShadowPointImage;
@end
