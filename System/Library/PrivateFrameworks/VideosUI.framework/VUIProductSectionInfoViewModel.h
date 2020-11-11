/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:00 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIView, NSArray, VUIProductMetadataLayout;

@interface VUIProductSectionInfoViewModel : NSObject {

	UIView* _headerView;
	NSArray* _dataViews;
	VUIProductMetadataLayout* _layout;

}

@property (nonatomic,retain) UIView * headerView;                            //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) NSArray * dataViews;                            //@synthesize dataViews=_dataViews - In the implementation block
@property (nonatomic,retain) VUIProductMetadataLayout * layout;              //@synthesize layout=_layout - In the implementation block
+(id)headerViewWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3 ;
+(id)headerViewWithImage:(id)arg1 layout:(id)arg2 existingView:(id)arg3 ;
+(id)dataLabelViewWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3 ;
+(id)dataDescriptionViewWithString:(id)arg1 maxLine:(unsigned long long)arg2 layout:(id)arg3 existingView:(id)arg4 ;
-(VUIProductMetadataLayout *)layout;
-(void)setLayout:(VUIProductMetadataLayout *)arg1 ;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)setDataViews:(NSArray *)arg1 ;
-(NSArray *)dataViews;
@end

