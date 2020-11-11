//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, TVHCatalogueRelatedContent;

@protocol TVHCatalogueItem <NSObject>
@property(readonly, nonatomic) _Bool shouldDisplay;
@property(readonly, nonatomic, getter=isRemoveable) _Bool removeable;
@property(readonly, nonatomic, getter=isHideable) _Bool hideable;
@property(readonly, nonatomic) TVHCatalogueRelatedContent *relatedContent;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSString *identifier;
@end
