/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:14 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXScrollViewControllerObserver <NSObject>
@optional
-(void)scrollViewControllerWillLayoutSubviews:(id)arg1;
-(void)scrollViewControllerDidLayoutSubviews:(id)arg1;
-(void)scrollViewControllerWillBeginScrolling:(id)arg1;
-(void)scrollViewControllerDidScroll:(id)arg1;
-(void)scrollViewControllerWillEndScrolling:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3;
-(void)scrollViewControllerDidEndScrolling:(id)arg1;
-(void)scrollViewControllerContentBoundsDidChange:(id)arg1;
-(void)scrollViewControllerContentInsetDidChange:(id)arg1;
-(BOOL)scrollViewControllerShouldScrollToTop:(id)arg1;
-(void)scrollViewControllerWillBeginScrollingAnimation:(id)arg1 towardsContentEdges:(unsigned long long)arg2;
-(void)scrollViewControllerDidEndScrollingAnimation:(id)arg1;

@end

