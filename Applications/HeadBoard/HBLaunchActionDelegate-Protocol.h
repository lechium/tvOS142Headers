//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol HBLaunchAction, HBLaunchRequest;

@protocol HBLaunchActionDelegate <NSObject>
- (void)launchAction:(id <HBLaunchAction>)arg1 didExecuteWithRequest:(id <HBLaunchRequest>)arg2;
- (void)launchAction:(id <HBLaunchAction>)arg1 willExecuteWithRequest:(id <HBLaunchRequest>)arg2;
@end

