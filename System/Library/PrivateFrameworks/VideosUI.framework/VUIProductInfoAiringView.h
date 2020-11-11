/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUIProductInfoAiringLayout, VUILabel, _TVImageView;

@interface VUIProductInfoAiringView : UIView {

	VUIProductInfoAiringLayout* _layout;
	VUILabel* _infoLabel;
	_TVImageView* _logo;

}

@property (nonatomic,retain) VUIProductInfoAiringLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) VUILabel * infoLabel;                             //@synthesize infoLabel=_infoLabel - In the implementation block
@property (nonatomic,retain) _TVImageView * logo;                              //@synthesize logo=_logo - In the implementation block
+(id)configureViewWithElement:(id)arg1 existingView:(id)arg2 ;
+(id)airingTextWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3 ;
+(id)_tintColorForDataSource:(id)arg1 interfaceStyle:(long long)arg2 ;
+(id)airingLogoWithImageDictionary:(id)arg1 layout:(id)arg2 existingView:(id)arg3 ;
-(VUIProductInfoAiringLayout *)layout;
-(void)setLayout:(VUIProductInfoAiringLayout *)arg1 ;
-(_TVImageView *)logo;
-(void)setLogo:(_TVImageView *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(VUILabel *)infoLabel;
-(void)setInfoLabel:(VUILabel *)arg1 ;
-(CGSize)layoutSubviewsWithSize:(CGSize)arg1 computationOnly:(BOOL)arg2 ;
@end

