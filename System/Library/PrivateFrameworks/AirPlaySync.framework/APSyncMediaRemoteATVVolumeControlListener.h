/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:43 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AirPlaySync.framework/AirPlaySync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AirPlaySync/AirPlaySync-Structs.h>
@interface APSyncMediaRemoteATVVolumeControlListener : NSObject {

	const void* _callbackContext;
	/*function pointer*/void* _volumeControlTypeDidChange;

}
-(void)dealloc;
-(id)initWithContextAndCallback:(/*function pointer*/void*)arg1 callbackContext:(const void*)arg2 ;
-(void)_volumeControlTypeChanged:(CFDictionaryRef)arg1 ;
@end

