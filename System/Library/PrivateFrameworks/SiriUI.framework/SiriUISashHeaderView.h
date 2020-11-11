/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>
#import <SiriUI/SiriUIReusableView.h>
#import <SiriUI/SiriUISizableHeaderView.h>

@class UILabel, NSString, SiriUISnippetViewController;

@interface SiriUISashHeaderView : UICollectionReusableView <SiriUIReusableView, SiriUISizableHeaderView> {

	UILabel* _headerLabel;
	NSString* _titleText;

}

@property (nonatomic,copy) NSString * titleText;                                                      //@synthesize titleText=_titleText - In the implementation block
@property (assign,nonatomic,__weak) SiriUISnippetViewController * snippetViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
+(double)defaultHeight;
+(id)elementKind;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)titleText;
-(void)setTitleText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(double)desiredHeightForWidth:(double)arg1 ;
@end

