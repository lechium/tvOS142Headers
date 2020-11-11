/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol RUIHeader <NSObject>
@optional
-(void)setDelegate:(id)arg1;
-(void)setImageSize:(CGSize)arg1;
-(id)subHeaderLabel;
-(double)headerHeightForWidth:(double)arg1 inView:(id)arg2;
-(void)setText:(id)arg1 attributes:(id)arg2;
-(id)headerLabel;
-(void)setSubHeaderText:(id)arg1 attributes:(id)arg2;
-(void)setDetailText:(id)arg1 attributes:(id)arg2;
-(id)detailHeaderLabel;
-(void)setIconImage:(id)arg1;
-(void)setImageAlignment:(int)arg1;
-(void)setSectionIsFirst:(BOOL)arg1;
-(double)headerHeightForWidth:(double)arg1 inTableView:(id)arg2;

@required
-(id)initWithAttributes:(id)arg1;

@end

