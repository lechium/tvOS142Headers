//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TVHMediaEntitiesDataSource, TVHMediaEntitiesShelfViewController;

@interface TVHMediaEntitiesPlayedStateDataSourceItem : NSObject
{
    TVHMediaEntitiesDataSource *_dataSource;	// 8 = 0x8
    TVHMediaEntitiesShelfViewController *_shelfViewController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000c1f04
@property(readonly, nonatomic) TVHMediaEntitiesShelfViewController *shelfViewController; // @synthesize shelfViewController=_shelfViewController;
@property(readonly, nonatomic) TVHMediaEntitiesDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) _Bool hasDisplayableContent;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)initWithMediaEntitiesDataSource:(id)arg1 shelfViewControllerBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c1d70

@end

