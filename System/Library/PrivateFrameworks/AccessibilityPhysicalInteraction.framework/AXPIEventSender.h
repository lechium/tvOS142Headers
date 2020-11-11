/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:32 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityPhysicalInteraction.framework/AccessibilityPhysicalInteraction
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <AccessibilityPhysicalInteraction/AccessibilityPhysicalInteraction-Structs.h>
@class NSObject;

@interface AXPIEventSender : NSObject {

	IOHIDEventSystemClientRef _ioSystemPostBackClient;
	NSObject*<OS_dispatch_queue> _eventSendingQueue;
	unsigned long long _senderID;

}

@property (assign,nonatomic) unsigned long long senderID;              //@synthesize senderID=_senderID - In the implementation block
+(id)sharedInstance;
-(id)init;
-(unsigned long long)senderID;
-(void)setSenderID:(unsigned long long)arg1 ;
-(void)sendEventRepresentation:(id)arg1 ;
-(void)sendIOHIDEventRef:(IOHIDEventRef)arg1 ;
@end
