/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:19 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURL, NSArray;

@interface _UIFocusSoundPool : NSObject {

	NSURL* _soundFileURL;
	unsigned _originalSystemSoundID;
	NSArray* _queue;
	unsigned long long _queueIndex;

}
-(id)initWithSystemSoundID:(unsigned)arg1 ;
-(id)initWithSoundFileURL:(id)arg1 ;
-(unsigned)playableSystemSoundID;
@end

