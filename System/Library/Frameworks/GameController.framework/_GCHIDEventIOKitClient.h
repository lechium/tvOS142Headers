/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameController/GameController-Structs.h>
#import <GameController/_GCHIDEventSubject.h>

@interface _GCHIDEventIOKitClient : _GCHIDEventSubject {

	IOHIDEventSystemClientRef _ioClient;

}
-(id)init;
-(void)dealloc;
-(id)initWithClient:(IOHIDEventSystemClientRef)arg1 queue:(id)arg2 ;
@end

