/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UIPageViewControllerDataSource <NSObject>
@optional
-(long long)presentationCountForPageViewController:(id)arg1;
-(long long)presentationIndexForPageViewController:(id)arg1;

@required
-(id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
-(id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;

@end

