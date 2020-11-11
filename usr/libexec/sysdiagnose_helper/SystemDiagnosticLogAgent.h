//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SystemDiagnosticLogAgent : NSObject
{
}

+ (_Bool)_runBlock:(CDUnknownBlockType)arg1 withTimeout:(double)arg2;	// IMP=0x0000000100007038
+ (id)sharedInstance;	// IMP=0x00000001000046f4
- (id)stringForReqType:(long long)arg1;	// IMP=0x00000001000071a0
- (_Bool)getPreferences:(const char *)arg1 withTimeout:(double)arg2;	// IMP=0x0000000100006eb4
- (void)writePreferenceInDomain:(id)arg1 withKey:(id)arg2 toDirectory:(const char *)arg3 currentUser:(_Bool)arg4;	// IMP=0x0000000100006bdc
- (id)getPreferencesforDomain:(id)arg1 withKeys:(id)arg2 currentUser:(_Bool)arg3;	// IMP=0x0000000100006a10
- (void)revertToRootMode:(_Bool)arg1;	// IMP=0x00000001000069f4
- (void)setUserMode:(_Bool)arg1;	// IMP=0x00000001000069c0
- (_Bool)_libNotifyTaskAtLocation:(const char *)arg1 andTimeout:(long long)arg2;	// IMP=0x0000000100006894
- (_Bool)ASPToolTaskForDir:(const char *)arg1 WithTimeout:(double)arg2;	// IMP=0x00000001000066cc
- (_Bool)ASPToolSnapshotForDir:(const char *)arg1 WithTimeout:(double)arg2;	// IMP=0x0000000100006534
- (_Bool)ASPToolGenericWithTimeout:(double)arg1 andBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100006430
- (id)coreCaptureConfigTask:(double)arg1;	// IMP=0x0000000100005f40
- (id)_memoryExceptionsTaskWithTimeout:(long long)arg1;	// IMP=0x0000000100005dc8
- (id)_powerTaskWithTimeout:(long long)arg1;	// IMP=0x00000001000059d4
- (_Bool)coreCaptureTaskWithDir:(const char *)arg1 WithTimeout:(double)arg2 ofType:(int)arg3;	// IMP=0x0000000100005344
- (long long)_logItemForType:(int)arg1;	// IMP=0x0000000100005328
- (_Bool)runningBoardTaskWithDir:(const char *)arg1 WithTimeout:(double)arg2;	// IMP=0x000000010000511c
- (_Bool)timezoneTaskWithDir:(const char *)arg1 WithTimeout:(double)arg2;	// IMP=0x0000000100004e38
- (_Bool)batteryHealthTaskWithDir:(const char *)arg1 WithTimeout:(double)arg2;	// IMP=0x00000001000048d4
- (_Bool)DSCSYMTaskForDir:(const char *)arg1 WithTimeout:(double)arg2;	// IMP=0x00000001000047a0
- (void)processMessage:(id)arg1 replyWith:(id)arg2;	// IMP=0x0000000100004760

@end
