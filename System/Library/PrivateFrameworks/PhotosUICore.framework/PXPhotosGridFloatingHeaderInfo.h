/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:16 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSAttributedString;


@protocol PXPhotosGridFloatingHeaderInfo <NSObject>
@property (nonatomic,readonly) NSAttributedString * floatingSummaryTitle; 
@property (nonatomic,readonly) NSAttributedString * floatingSummarySubtitle; 
@property (nonatomic,readonly) BOOL floatingEnableOverview; 
@required
-(NSAttributedString *)floatingSummaryTitle;
-(NSAttributedString *)floatingSummarySubtitle;
-(BOOL)floatingEnableOverview;

@end
