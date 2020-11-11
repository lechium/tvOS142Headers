//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UICollectionViewCell, _TVCarouselView;

@protocol TVCarouselViewDelegate <NSObject>

@optional
- (void)carouselView:(_TVCarouselView *)arg1 didCenterItemAtIndex:(unsigned long long)arg2;
- (void)carouselView:(_TVCarouselView *)arg1 didPlayItemAtIndex:(unsigned long long)arg2;
- (void)carouselView:(_TVCarouselView *)arg1 didFocusItemAtIndex:(unsigned long long)arg2;
- (void)carouselViewDidScroll:(_TVCarouselView *)arg1;
- (void)carouselView:(_TVCarouselView *)arg1 didEndDisplayingItemAtIndex:(unsigned long long)arg2;
- (void)carouselView:(_TVCarouselView *)arg1 willDisplayItemAtIndex:(unsigned long long)arg2;
- (void)carouselView:(_TVCarouselView *)arg1 didEndDisplayingCell:(UICollectionViewCell *)arg2 forItemAtIndex:(unsigned long long)arg3;
- (void)carouselView:(_TVCarouselView *)arg1 willDisplayCell:(UICollectionViewCell *)arg2 forItemAtIndex:(unsigned long long)arg3;
- (void)carouselView:(_TVCarouselView *)arg1 didDeselectItemAtIndex:(unsigned long long)arg2;
- (void)carouselView:(_TVCarouselView *)arg1 didSelectItemAtIndex:(unsigned long long)arg2;
- (_Bool)carouselView:(_TVCarouselView *)arg1 shouldDeselectItemAtIndex:(unsigned long long)arg2;
- (_Bool)carouselView:(_TVCarouselView *)arg1 shouldSelectItemAtIndex:(unsigned long long)arg2;
- (void)carouselView:(_TVCarouselView *)arg1 didUnhighlightItemAtIndex:(unsigned long long)arg2;
- (void)carouselView:(_TVCarouselView *)arg1 didHighlightItemAtIndex:(unsigned long long)arg2;
- (_Bool)carouselView:(_TVCarouselView *)arg1 shouldHighlightItemAtIndex:(unsigned long long)arg2;
@end

