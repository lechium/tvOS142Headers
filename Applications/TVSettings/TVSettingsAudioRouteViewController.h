//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

@class NSArray, TVPAudioRoute, TVPAudioRoutingController;

@interface TVSettingsAudioRouteViewController : TSKViewController
{
    TVPAudioRoutingController *_routingController;	// 8 = 0x8
    TVPAudioRoute *_recentlySelectedRoute;	// 16 = 0x10
    NSArray *_routes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000b78b4
- (id)_identifierForRoute:(id)arg1;	// IMP=0x00000001000b7794
- (void)_selectRoute:(id)arg1;	// IMP=0x00000001000b772c
- (id)indexPathForPreferredFocusedViewInTableView:(id)arg1;	// IMP=0x00000001000b743c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000001000b7244
- (id)loadSettingGroups;	// IMP=0x00000001000b6e70
- (void)viewDidLoad;	// IMP=0x00000001000b6dbc
- (id)initWithStyle:(long long)arg1;	// IMP=0x00000001000b6d3c

@end

