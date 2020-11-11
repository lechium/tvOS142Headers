//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKService.h"

#import "GKUtilityService-Protocol.h"

@class NSString;

@interface GKUtilityService : GKService <GKUtilityService>
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x000000010015d828
+ (Class)interfaceClass;	// IMP=0x000000010015d81c
- (oneway void)openGameCenterSettings;	// IMP=0x000000010015ee44
- (oneway void)deleteCachedImageDataFromSubdirectory:(id)arg1 withFileName:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010015ea04
- (oneway void)loadCachedImageDataFromSubdirectory:(id)arg1 withFileName:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010015e670
- (oneway void)cacheImageData:(id)arg1 inSubdirectory:(id)arg2 withFileName:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010015e344
- (oneway void)requestImageDataForURL:(id)arg1 subdirectory:(id)arg2 fileName:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010015e244
- (oneway void)getStoreBagValuesForKeys:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010015daac
- (id)validateEnvironment;	// IMP=0x000000010015d838
- (_Bool)requiresAuthentication;	// IMP=0x000000010015d830

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

