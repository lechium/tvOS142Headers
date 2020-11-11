/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:32 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@class UILabel;

@interface PXLabelAnimationContext : NSObject {

	UILabel* _label;
	CGRect _destinationRect;

}

@property (retain) UILabel * label;                     //@synthesize label=_label - In the implementation block
@property (assign) CGRect destinationRect;              //@synthesize destinationRect=_destinationRect - In the implementation block
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(CGRect)destinationRect;
-(id)initWithLabel:(id)arg1 andDestinationRect:(CGRect)arg2 ;
-(void)setDestinationRect:(CGRect)arg1 ;
@end

