//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, TVHKMediaEntity, TVHLockup, TVHMediaEntitiesShelfViewController;

@protocol TVHMediaEntitiesShelfViewControllerDelegate <NSObject>

@optional
- (void)mediaEntitiesShelfViewController:(TVHMediaEntitiesShelfViewController *)arg1 didPlayMediaEntity:(TVHKMediaEntity *)arg2;
- (void)mediaEntitiesShelfViewController:(TVHMediaEntitiesShelfViewController *)arg1 didLongPressMediaEntity:(TVHKMediaEntity *)arg2;
- (void)mediaEntitiesShelfViewController:(TVHMediaEntitiesShelfViewController *)arg1 didSelectMediaEntity:(TVHKMediaEntity *)arg2;
- (void)mediaEntitiesShelfViewController:(TVHMediaEntitiesShelfViewController *)arg1 didFocusMediaEntity:(TVHKMediaEntity *)arg2;
- (void)mediaEntitiesShelfViewController:(TVHMediaEntitiesShelfViewController *)arg1 configureLockup:(TVHLockup *)arg2 forMediaEntity:(TVHKMediaEntity *)arg3;
- (NSString *)titleForMediaEntitiesShelfViewController:(TVHMediaEntitiesShelfViewController *)arg1;
@end

