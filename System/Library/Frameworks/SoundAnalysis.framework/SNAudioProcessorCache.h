/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:07 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMapTable;

@interface SNAudioProcessorCache : NSObject {

	NSMapTable* _activeProcessorsCache;

}
-(id)init;
-(id)sharedProcessorWithConfiguration:(id)arg1 ;
-(id)audioProcessorWithConfiguration:(id)arg1 ;
-(id)createAudioProcessorWithConfiguration:(id)arg1 ;
@end

