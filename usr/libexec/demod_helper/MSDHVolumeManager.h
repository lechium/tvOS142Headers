//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MSDHVolumeManager : NSObject
{
    NSString *_demoVolumeDev;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0000000100015050
- (void).cxx_destruct;	// IMP=0x0000000100016fbc
@property(retain, nonatomic) NSString *demoVolumeDev; // @synthesize demoVolumeDev=_demoVolumeDev;
- (_Bool)unmountAPFSVolume:(id)arg1;	// IMP=0x0000000100016d18
- (_Bool)mountAPFSVolume:(id)arg1 atMountPoint:(id)arg2 withAttributes:(id)arg3;	// IMP=0x00000001000168ac
- (id)findAPFSVolumeMountPoint:(id)arg1;	// IMP=0x0000000100016668
- (id)lookupAPFSVolumeDevByName:(id)arg1;	// IMP=0x0000000100016324
- (_Bool)checkFreeSpaceLeftInContainer:(id)arg1 neededSpace:(unsigned long long)arg2;	// IMP=0x00000001000161b8
- (_Bool)deleteAPFSVolume:(id)arg1;	// IMP=0x0000000100016084
- (id)createAPFSVolume:(id)arg1 withSizeInMB:(unsigned long long)arg2 inContainer:(id)arg3;	// IMP=0x0000000100015d4c
- (id)getAPFSBootContainerDeviceNode;	// IMP=0x00000001000158f4
- (_Bool)deleteDemoVolume;	// IMP=0x0000000100015798
- (_Bool)setupDemoVolume;	// IMP=0x0000000100015514
- (_Bool)manageSnapshot:(id)arg1 forVolumeAt:(id)arg2;	// IMP=0x0000000100015144
- (id)init;	// IMP=0x00000001000150bc

@end

