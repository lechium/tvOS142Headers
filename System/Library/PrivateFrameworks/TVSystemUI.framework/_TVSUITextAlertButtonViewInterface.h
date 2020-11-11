/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:52 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol _TVSUITextAlertButtonViewInterface <NSObject>
@property (setter=ab_setTitle:,nonatomic,retain) NSString * ab_title; 
@property (setter=ab_setDetailText:,nonatomic,retain) NSString * ab_detailText; 
@required
-(void)ab_setTitle:(id)arg1 animated:(BOOL)arg2;
-(NSString *)ab_title;
-(void)ab_setTitle:(id)arg1;
-(NSString *)ab_detailText;
-(void)ab_setDetailText:(id)arg1;
-(void)ab_setDetailText:(id)arg1 animated:(BOOL)arg2;
-(double)ab_minimumWidth;

@end
