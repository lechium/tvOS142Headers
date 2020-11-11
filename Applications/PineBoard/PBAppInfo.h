//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PineBoardServices/PBSAppInfo.h>

#import "PBAppInfo-Protocol.h"

@class FBSSceneIdentity, NSString, PBApplicationInfo, PBApplicationPlaceholder;

@interface PBAppInfo : PBSAppInfo <PBAppInfo>
{
    PBApplicationInfo *_applicationInfo;	// 8 = 0x8
    PBApplicationPlaceholder *_applicationPlaceholder;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010010389c
@property(readonly, nonatomic) PBApplicationPlaceholder *applicationPlaceholder; // @synthesize applicationPlaceholder=_applicationPlaceholder;
@property(readonly, nonatomic) PBApplicationInfo *applicationInfo; // @synthesize applicationInfo=_applicationInfo;
- (_Bool)isPBAppInfo;	// IMP=0x0000000100103824
- (Class)classForCoder;	// IMP=0x00000001001037f4
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010010379c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100103770
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100103144
- (id)initWithAppInfo:(id)arg1;	// IMP=0x0000000100102fcc
- (id)initWithApplicationPlaceholder:(id)arg1;	// IMP=0x0000000100102ef4
- (id)initWithApplicationInfo:(id)arg1;	// IMP=0x0000000100102e1c
@property(readonly, nonatomic) FBSSceneIdentity *defaultSceneIdentity;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

