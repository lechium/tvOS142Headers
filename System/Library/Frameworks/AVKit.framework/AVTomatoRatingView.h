/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:51 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class UIImageView, UILabel;

@interface AVTomatoRatingView : UIView {

	UIImageView* _tomatoRatingIcon;
	UILabel* _tomatoRatingLabel;
	float _tomatoRating;
	unsigned long long _tomatoFreshness;

}

@property (assign,nonatomic) float tomatoRating;                              //@synthesize tomatoRating=_tomatoRating - In the implementation block
@property (assign,nonatomic) unsigned long long tomatoFreshness;              //@synthesize tomatoFreshness=_tomatoFreshness - In the implementation block
-(id)init;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setTomatoFreshness:(unsigned long long)arg1 ;
-(void)setTomatoRating:(float)arg1 ;
-(float)tomatoRating;
-(unsigned long long)tomatoFreshness;
@end

