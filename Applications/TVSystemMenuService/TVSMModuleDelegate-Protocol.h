//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol TVSMModule;

@protocol TVSMModuleDelegate <NSObject>
- (void)moduleDidRequestSystemMenuDismissal:(id <TVSMModule>)arg1;
- (void)moduleDidRequestDismissal:(id <TVSMModule>)arg1;
- (void)moduleDidRequestOverlay:(id <TVSMModule>)arg1;
- (void)moduleDidRequestExpansion:(id <TVSMModule>)arg1;
@end

