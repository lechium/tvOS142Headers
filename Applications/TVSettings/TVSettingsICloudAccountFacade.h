//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, TVSiCloudAccountManager;

@interface TVSettingsICloudAccountFacade : NSObject
{
    ACAccount *_lazyActiveAccount;	// 8 = 0x8
    TVSiCloudAccountManager *_accountManager;	// 16 = 0x10
}

+ (_Bool)automaticallyNotifiesObserversOfLazyActiveAccount;	// IMP=0x000000010000da4c
- (void).cxx_destruct;	// IMP=0x000000010000def4
@property(retain, nonatomic) TVSiCloudAccountManager *accountManager; // @synthesize accountManager=_accountManager;
- (void)reloadLazyAccount;	// IMP=0x000000010000dd04
@property(retain, nonatomic) ACAccount *lazyActiveAccount;
- (id)initWithAccountManager:(id)arg1;	// IMP=0x000000010000d844

@end

