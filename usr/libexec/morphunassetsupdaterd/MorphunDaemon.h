//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MorphunDaemon : NSObject
{
}

+ (void)run;	// IMP=0x00000001000042f8
+ (void)handleXPCConnection:(id)arg1;	// IMP=0x0000000100004018
+ (void)handleXPCPeer:(id)arg1 data:(id)arg2;	// IMP=0x0000000100003b50
+ (void)blockForMessages:(id)arg1;	// IMP=0x0000000100003a98
+ (void)printRcvdMessageType:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x0000000100003a70
+ (id)getForceUpdateMessageFromXPC:(id)arg1;	// IMP=0x000000010000392c
+ (id)convertXPCStringArrayToNSArray:(id)arg1;	// IMP=0x00000001000037a4
+ (void)doForceUpdate:(id)arg1 updateError:(id *)arg2 removeError:(id *)arg3;	// IMP=0x000000010000363c
+ (id)singleShotRemoveForLanguages:(id)arg1;	// IMP=0x000000010000344c
+ (id)singleShotUpdateForLanguages:(id)arg1;	// IMP=0x0000000100003244

@end

